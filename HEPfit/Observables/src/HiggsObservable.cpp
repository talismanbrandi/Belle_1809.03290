/* 
 * Copyright (C) 2014 HEPfit Collaboration
 *
 *
 * For the licensing terms see doc/COPYING.
 */

#include "HiggsObservable.h"
#include "ThObsFactory.h"
#include <TNamed.h>
#include <TFile.h>
#include <TROOT.h>
#include <TMath.h>
#include <iostream>
#include <fstream>
#include <boost/tokenizer.hpp>
#include <string>
#include <sstream>

HiggsObservable::HiggsObservable(const Observable& Obs) :
Observable(Obs)
{
    isnew = true;
    isCorrelated = false;
    covarianceFromConfig = false;
};

HiggsObservable::HiggsObservable(const HiggsObservable& orig)
{
    channels = orig.channels;
    thObsV = orig.thObsV;
    thobsvsize = orig.thobsvsize;
    channelsize = orig.channelsize;
    isnew = orig.isnew;
    isCorrelated = orig.isCorrelated;
    covarianceFromConfig = orig.covarianceFromConfig;
    InvCov = orig.InvCov;
    rank = orig.rank;
}

//HiggsObservable::~HiggsObservable() {}

void HiggsObservable::setParametricLikelihood(std::string filename, std::vector<ThObservable*> thObsV)
{
    this->filename = filename;
    this->thObsV = thObsV;
    std::ifstream ifile(filename.c_str());
    if (!ifile.is_open())
        throw std::runtime_error("\nERROR: " + filename + " does not exist. Make sure to specify a valid Higgs parameters configuration file.\n");
    std::string line;
    bool IsEOF;
    bool readCorrelations = false;
    unsigned int i = 0; 
    unsigned int nrows = 0;
    do {
        IsEOF = getline(ifile, line).eof();
        if (line.compare(0, 11, "MEASUREMENT") == 0) nrows++;
    } while (!IsEOF);
    if (nrows == 0) {
        std::stringstream ss;
        ss << "\nERROR: " << filename << " should contain at least 1 measurement.\n";
        throw std::runtime_error(ss.str());
    }
    int implicit_tth = (isnew ? 0 : -1);
    channels.ResizeTo(nrows, thObsV.size() + 3 + implicit_tth);
    ifile.clear();
    ifile.seekg(0, ifile.beg);
    int lineNo = 0;
    do {
        IsEOF = getline(ifile, line).eof();
        lineNo++;
        if (*line.rbegin() == '\r') line.erase(line.length() - 1); // for CR+LF
        if (line.compare(0, 11, "MEASUREMENT") != 0 && !readCorrelations) {
            continue;
        } else {
            boost::char_separator<char> sep(" |\t");
            boost::tokenizer<boost::char_separator<char> > tok(line, sep);
            boost::tokenizer<boost::char_separator<char> >::iterator beg = tok.begin();
            if (isCorrelated) readCorrelations = true;
            // Read the necessary information from the config file. Each row contains:
            // ggH fraction
            // VBF fraction
            // VH fraction (ttH is computed as 1-ggH-VBF-VH)
            // average value of mu
            // left-side error
            // right-side error
            beg++; // skip label
            for (int j = 0; j < channels.GetNcols(); j++)
                channels(i, j) = atof((*(++beg)).c_str());
            if (isCorrelated && (std::fabs(channels(i, thObsV.size() + 1)) != std::fabs(channels(i, thObsV.size() + 2)))) {
                if (rank == 0) throw std::runtime_error("ERROR: Gaussian errors must be symmetric for CorrelatedHiggsObservables in " + filename + " at line number:" + boost::lexical_cast<std::string>(lineNo) + ".\n");
                else sleep(2);
            }
            i++;
            if (readCorrelations && (i == nrows)) {
                gslpp::matrix<double> myCorr(gslpp::matrix<double>::Id(nrows));
                int ni = 0;
                for (unsigned int irow = 0; irow < nrows; irow++) {
                    IsEOF = getline(ifile, line).eof();
                    if (line.empty() || line.at(0) == '#') {
                        if (rank == 0) throw std::runtime_error("ERROR: no comments or empty lines in CorrelatedHiggsObservables please! In file " + filename + " at line number:" + boost::lexical_cast<std::string>(lineNo) + ".\n");
                        else sleep(2);
                    }
                    lineNo++;
                    boost::tokenizer<boost::char_separator<char> > mytok(line, sep);
                    beg = mytok.begin();
                    int nj = 0;
                    for (unsigned int jcol = 0; jcol < nrows; jcol++) {
                        if ((*beg).compare(0, 1, "0") == 0
                                || (*beg).compare(0, 1, "1") == 0
                                || (*beg).compare(0, 1, "-") == 0 || (covarianceFromConfig == true)) {
                            if (std::distance(mytok.begin(), mytok.end()) < nrows) {
                                if (rank == 0) throw std::runtime_error(("ERROR: Correlation matrix is of wrong size in CorrelatedHiggsObservables: " + name + +" at line number:" + boost::lexical_cast<std::string>(lineNo) + ".\n").c_str());
                                else sleep(2);
                            }
                            myCorr(ni, nj) = atof((*beg).c_str());
                            nj++;
                            beg++;
                        } else {
                            if (rank == 0) throw std::runtime_error("ERROR: invalid correlation matrix for " + name + ". Check element (" + boost::lexical_cast<std::string>(ni + 1) + "," + boost::lexical_cast<std::string>(nj + 1) + ") in line number " + boost::lexical_cast<std::string>(lineNo) + " in file " + filename + ".\n");
                            else sleep(2);
                        }
                    }
                    ni++;
                }
                if (myCorr.size_i() != nrows || myCorr.size_j() != nrows)
                    throw std::runtime_error("The size of the correlated observables in " + name + " does not match the size of the correlation matrix!");
                InvCov = new gslpp::matrix<double>(nrows, nrows, 0.);
                if (covarianceFromConfig) {
                    for (unsigned int i = 0; i < nrows; i++)
                        for (unsigned int j = 0; j < nrows; j++)
                            (*InvCov)(i, j) = myCorr(i, j);
                } else {
                    for (unsigned int i = 0; i < nrows; i++)
                        for (unsigned int j = 0; j < nrows; j++)
                            (*InvCov)(i, j) = channels(i, thObsV.size() + 2) * myCorr(i, j) * channels(i, thObsV.size() + 2); // left = right imposed above
                    *InvCov = InvCov->inverse();
                }
                readCorrelations = false;
            }
        }
    } while (!IsEOF);
    if (i != nrows) {
        std::stringstream ss;
        ss << "\nERROR: " << filename << " should contain " << nrows << " measurements, but I have read " << i << " ones instead.\n";
        throw std::runtime_error(ss.str());
    }

    thobsvsize = thObsV.size();
    channelsize = channels.GetNrows();
    theoryValues.resize(thobsvsize + 1 + channelsize);
}

double HiggsObservable::computeWeight()
{
    double logprob = 0;

    if (isnew) {
        for (int i = 0; i < channels.GetNrows(); i++) {
            double mu = 0;
            for (unsigned int j = 0; j < thobsvsize; j++) {
                theoryValues.at(j) = thObsV.at(j)->computeThValue();
                mu += channels(i, j) * theoryValues.at(j);
            }
            theoryValues.at(thobsvsize) = tho->computeThValue();
            if (thObsV.at(0)->getModel().isModelLinearized())
                theoryValues.at(thobsvsize + i + 1) = -1. + mu + theoryValues.at(thobsvsize);
            else
                theoryValues.at(thobsvsize + i + 1) = mu * theoryValues.at(thobsvsize);
            if (!isCorrelated) logprob += LogSplitGaussian(theoryValues.at(thobsvsize + i + 1), channels(i, thobsvsize), channels(i, thobsvsize + 1), channels(i, thobsvsize + 2));
        }
        if (isCorrelated) {
            gslpp::vector<double> theObsVal(channels.GetNrows(), 0.);
            for (int i = 0; i < channels.GetNrows(); i++) {
                theObsVal(i) = theoryValues.at(thobsvsize + i + 1);
            }
            logprob =  (-0.5 * theObsVal * ((*InvCov) * theObsVal));
        }
    } else {
        for (int i = 0; i < channels.GetNrows(); i++) {
            double mu = 0, sum = 0.;
            for (unsigned int j = 0; j < thobsvsize - 1; j++) {
                theoryValues.at(j) = thObsV.at(j)->computeThValue();
                mu += channels(i, j) * theoryValues.at(j);
                sum += channels(i, j);
            }
            mu += (1. - sum) * thObsV.at(thobsvsize - 1)->computeThValue();
            theoryValues.at(thobsvsize) = tho->computeThValue();
            theoryValues.at(thobsvsize + i + 1) = mu * theoryValues.at(thobsvsize);
            logprob += LogSplitGaussian(theoryValues.at(thobsvsize + i + 1), channels(i, 3), channels(i, 4), channels(i, 5));
        }
    }

    return (logprob);
}

boost::tokenizer<boost::char_separator<char> >::iterator & HiggsObservable::ParseHiggsObservable(
        boost::tokenizer<boost::char_separator<char> >::iterator & beg,
        ThObsFactory& myObsFactory,
        StandardModel * myModel,
        int rank)
{
    this->rank = rank;
    std::string type = "HiggsObservable";
    setObsType(type);
    std::vector<ThObservable*> hthobs;
    ++beg;
    distr = *beg;
    if (distr.compare("parametric") == 0) {
        setIsnew(false);
        ++beg;
        distr = *beg;
        if (distr.compare("LHC7") == 0) {
            hthobs.push_back(myObsFactory.CreateThMethod("ggH7", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("VBF7", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("VH7", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("ttH7", *myModel));
        } else if (distr.compare("LHC8") == 0) {
            hthobs.push_back(myObsFactory.CreateThMethod("ggH8", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("VBF8", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("VH8", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("ttH8", *myModel));
        } else if (distr.compare("TeV196") == 0) {
            hthobs.push_back(myObsFactory.CreateThMethod("ggH196", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("VBF196", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("VH196", *myModel));
            hthobs.push_back(myObsFactory.CreateThMethod("ttH196", *myModel));
        } else if (rank == 0)
            throw std::runtime_error("ERROR: wrong keyword " + distr + " in " + getName());
        setParametricLikelihood(*(++beg), hthobs);
    } else if (distr.compare("new_parametric") == 0) {
        std::string filename_h = *(++beg);
        std::ifstream ifile(filename_h.c_str());
        if (!ifile.is_open()) {
            if (rank == 0) throw std::runtime_error("\nERROR: " + filename_h + " does not exist. Make sure to specify a valid Higgs parameters configuration file.\n");
            else sleep(2);
        }
        std::string line_h;
        bool IsEOF_h;
        do {
            IsEOF_h = getline(ifile, line_h).eof();
            if (line_h.compare(0, 10, "CATEGORIES") == 0) {
                boost::char_separator<char> sep(" \t");
                boost::tokenizer<boost::char_separator<char> > mytok(line_h, sep);
                boost::tokenizer<boost::char_separator<char> >::iterator beg2 = mytok.begin();
                beg2++;
                while (beg2 != mytok.end()) {
                    std::string cat = *beg2;
                    hthobs.push_back(myObsFactory.CreateThMethod(cat, *myModel));
                    beg2++;
                }
            }
        } while (!IsEOF_h);
        if (hthobs.size() > 0)
            setParametricLikelihood(filename_h, hthobs);
        else {
            if (rank == 0) throw std::runtime_error("\nERROR: " + getName() + " does not provide at least one category\n");
            else sleep(2);
        }
    } else {
        if (rank == 0) throw std::runtime_error("ERROR: wrong distribution flag " + distr + " in " + getName());
        else sleep(2);
    }

    return beg;
}

