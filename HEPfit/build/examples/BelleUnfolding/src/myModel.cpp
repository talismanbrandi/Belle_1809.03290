/* 
 * Copyright (C) 2015 HEPfit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#include "myModel.h"

/* Define mandatory model parameters here. */
const std::string myModel::myModelvars[NmyModelvars] = {"NTh1", "NTh2", "NTh3", "NTh4", "NTh5", "NTh6", "NTh7", "NTh8", "NTh9", "NTh10",
                                                        "NTh11", "NTh12", "NTh13", "NTh14", "NTh15", "NTh16", "NTh17", "NTh18", "NTh19", "NTh20",
                                                        "NTh21", "NTh22", "NTh23", "NTh24", "NTh25", "NTh26", "NTh27", "NTh28", "NTh29", "NTh30",
                                                        "NTh31", "NTh32", "NTh33", "NTh34", "NTh35", "NTh36", "NTh37", "NTh38", "NTh39", "NTh40",
                                                        "NBB", "f00", "BRDst", "BRD", "tauB0",
                                                        "eps_el1", "eps_el2", "eps_el3", "eps_el4", "eps_el5", "eps_el6", "eps_el7", "eps_el8", "eps_el9", "eps_el10",
                                                        "eps_el11", "eps_el12", "eps_el13", "eps_el14", "eps_el15", "eps_el16", "eps_el17", "eps_el18", "eps_el19", "eps_el20",
                                                        "eps_el21", "eps_el22", "eps_el23", "eps_el24", "eps_el25", "eps_el26", "eps_el27", "eps_el28", "eps_el29", "eps_el30",
                                                        "eps_el31", "eps_el32", "eps_el33", "eps_el34", "eps_el35", "eps_el36", "eps_el37", "eps_el38", "eps_el39", "eps_el40",
                                                        "eps_el1", "eps_mu2", "eps_mu3", "eps_mu4", "eps_mu5", "eps_mu6", "eps_mu7", "eps_mu8", "eps_mu9", "eps_mu10",
                                                        "eps_mu11", "eps_mu12", "eps_mu13", "eps_mu14", "eps_mu15", "eps_mu16", "eps_mu17", "eps_mu18", "eps_mu19", "eps_mu20",
                                                        "eps_mu21", "eps_mu22", "eps_mu23", "eps_mu24", "eps_mu25", "eps_mu26", "eps_mu27", "eps_mu28", "eps_mu29", "eps_mu30",
                                                        "eps_mu31", "eps_mu32", "eps_mu33", "eps_mu34", "eps_mu35", "eps_mu36", "eps_mu37", "eps_mu38", "eps_mu39", "eps_mu40"};

myModel::myModel()
:   StandardModel()
{
    /* Define all the parameters here and port them as observables too */
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh1", boost::cref(NTh1)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh2", boost::cref(NTh2)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh3", boost::cref(NTh3)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh4", boost::cref(NTh4)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh5", boost::cref(NTh5)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh6", boost::cref(NTh6)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh7", boost::cref(NTh7)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh8", boost::cref(NTh8)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh9", boost::cref(NTh9)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh10", boost::cref(NTh10)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh11", boost::cref(NTh11)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh12", boost::cref(NTh12)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh13", boost::cref(NTh13)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh14", boost::cref(NTh14)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh15", boost::cref(NTh15)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh16", boost::cref(NTh16)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh17", boost::cref(NTh17)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh18", boost::cref(NTh18)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh19", boost::cref(NTh19)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh20", boost::cref(NTh20)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh21", boost::cref(NTh21)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh22", boost::cref(NTh22)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh23", boost::cref(NTh23)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh24", boost::cref(NTh24)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh25", boost::cref(NTh25)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh26", boost::cref(NTh26)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh27", boost::cref(NTh27)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh28", boost::cref(NTh28)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh29", boost::cref(NTh29)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh30", boost::cref(NTh30)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh31", boost::cref(NTh31)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh32", boost::cref(NTh32)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh33", boost::cref(NTh33)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh34", boost::cref(NTh34)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh35", boost::cref(NTh35)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh36", boost::cref(NTh36)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh37", boost::cref(NTh37)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh38", boost::cref(NTh38)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh39", boost::cref(NTh39)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NTh40", boost::cref(NTh40)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("NBB", boost::cref(NBB)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("f00", boost::cref(f00)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("BRDst", boost::cref(BRDst)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("BRD", boost::cref(BRD)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("tauB0", boost::cref(tauB0)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el1", boost::cref(eps_el1)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el2", boost::cref(eps_el2)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el3", boost::cref(eps_el3)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el4", boost::cref(eps_el4)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el5", boost::cref(eps_el5)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el6", boost::cref(eps_el6)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el7", boost::cref(eps_el7)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el8", boost::cref(eps_el8)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el9", boost::cref(eps_el9)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el10", boost::cref(eps_el10)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el11", boost::cref(eps_el11)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el12", boost::cref(eps_el12)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el13", boost::cref(eps_el13)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el14", boost::cref(eps_el14)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el15", boost::cref(eps_el15)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el16", boost::cref(eps_el16)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el17", boost::cref(eps_el17)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el18", boost::cref(eps_el18)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el19", boost::cref(eps_el19)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el20", boost::cref(eps_el20)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el21", boost::cref(eps_el21)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el22", boost::cref(eps_el22)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el23", boost::cref(eps_el23)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el24", boost::cref(eps_el24)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el25", boost::cref(eps_el25)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el26", boost::cref(eps_el26)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el27", boost::cref(eps_el27)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el28", boost::cref(eps_el28)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el29", boost::cref(eps_el29)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el30", boost::cref(eps_el30)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el31", boost::cref(eps_el31)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el32", boost::cref(eps_el32)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el33", boost::cref(eps_el33)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el34", boost::cref(eps_el34)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el35", boost::cref(eps_el35)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el36", boost::cref(eps_el36)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el37", boost::cref(eps_el37)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el38", boost::cref(eps_el38)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el39", boost::cref(eps_el39)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_el40", boost::cref(eps_el40)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu1", boost::cref(eps_mu1)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu2", boost::cref(eps_mu2)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu3", boost::cref(eps_mu3)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu4", boost::cref(eps_mu4)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu5", boost::cref(eps_mu5)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu6", boost::cref(eps_mu6)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu7", boost::cref(eps_mu7)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu8", boost::cref(eps_mu8)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu9", boost::cref(eps_mu9)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu10", boost::cref(eps_mu10)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu11", boost::cref(eps_mu11)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu12", boost::cref(eps_mu12)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu13", boost::cref(eps_mu13)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu14", boost::cref(eps_mu14)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu15", boost::cref(eps_mu15)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu16", boost::cref(eps_mu16)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu17", boost::cref(eps_mu17)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu18", boost::cref(eps_mu18)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu19", boost::cref(eps_mu19)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu20", boost::cref(eps_mu20)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu21", boost::cref(eps_mu21)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu22", boost::cref(eps_mu22)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu23", boost::cref(eps_mu23)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu24", boost::cref(eps_mu24)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu25", boost::cref(eps_mu25)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu26", boost::cref(eps_mu26)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu27", boost::cref(eps_mu27)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu28", boost::cref(eps_mu28)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu29", boost::cref(eps_mu29)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu30", boost::cref(eps_mu30)));
    
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu31", boost::cref(eps_mu31)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu32", boost::cref(eps_mu32)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu33", boost::cref(eps_mu33)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu34", boost::cref(eps_mu34)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu35", boost::cref(eps_mu35)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu36", boost::cref(eps_mu36)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu37", boost::cref(eps_mu37)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu38", boost::cref(eps_mu38)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu39", boost::cref(eps_mu39)));
    ModelParamMap.insert(std::pair<std::string, boost::reference_wrapper<const double> >("eps_mu40", boost::cref(eps_mu40)));
}

myModel::~myModel()
{
    if (IsModelInitialized()) {
        /* Destroy whatever you want, e.g. potentially dangerous pointers. */
    }
}

/* Initialize model here */
bool myModel::InitializeModel()
{
    condition = false;
    setModelInitialized(StandardModel::InitializeModel());
    return(true);
}
    
bool myModel::Init(const std::map<std::string, double>& DPars)
{
    return(StandardModel::Init(DPars));
}

/* Do whatever is necessary before parameters are updated by the MCMC. */
bool myModel::PreUpdate()
{
    if(!StandardModel::PreUpdate()) return (false);
    return (true);
}

/* Model update method used be the MCMC to update the model parameters. */
bool myModel::Update(const std::map<std::string, double>& DPars)
{    
    if(!PreUpdate()) return (false);
    
    UpdateError = false;

    for (std::map<std::string, double>::const_iterator it = DPars.begin(); it != DPars.end(); it++)
        setParameter(it->first, it->second);

    if (UpdateError) return (false);

    if(!PostUpdate()) return (false);

    return (true);

    return (true);
}

/* Postupdate method to update whatever is needed after the model parameters are updated */
bool myModel::PostUpdate()
{
    if(!StandardModel::PostUpdate()) return (false);

    return (true);
}

/* Model parameters and their derived quantities can be set here. */
void myModel::setParameter(const std::string name, const double& value)
{
    if(name.compare("NTh1") == 0)
        NTh1 = value;
    else if(name.compare("NTh2") == 0)
        NTh2 = value;
    else if(name.compare("NTh3") == 0)
        NTh3 = value;
    else if(name.compare("NTh4") == 0)
        NTh4 = value;
    else if(name.compare("NTh5") == 0)
        NTh5 = value;
    else if(name.compare("NTh6") == 0)
        NTh6 = value;
    else if(name.compare("NTh7") == 0)
        NTh7 = value;
    else if(name.compare("NTh8") == 0)
        NTh8 = value;
    else if(name.compare("NTh9") == 0)
        NTh9 = value;
    else if(name.compare("NTh10") == 0)
        NTh10 = value;
        
    else if(name.compare("NTh11") == 0)
        NTh11 = value;
    else if(name.compare("NTh12") == 0)
        NTh12 = value;
    else if(name.compare("NTh13") == 0)
        NTh13 = value;
    else if(name.compare("NTh14") == 0)
        NTh14 = value;
    else if(name.compare("NTh15") == 0)
        NTh15 = value;
    else if(name.compare("NTh16") == 0)
        NTh16 = value;
    else if(name.compare("NTh17") == 0)
        NTh17 = value;
    else if(name.compare("NTh18") == 0)
        NTh18 = value;
    else if(name.compare("NTh19") == 0)
        NTh19 = value;
    else if(name.compare("NTh20") == 0)
        NTh20 = value;
        
    else if(name.compare("NTh21") == 0)
        NTh21 = value;
    else if(name.compare("NTh22") == 0)
        NTh22 = value;
    else if(name.compare("NTh23") == 0)
        NTh23 = value;
    else if(name.compare("NTh24") == 0)
        NTh24 = value;
    else if(name.compare("NTh25") == 0)
        NTh25 = value;
    else if(name.compare("NTh26") == 0)
        NTh26 = value;
    else if(name.compare("NTh27") == 0)
        NTh27 = value;
    else if(name.compare("NTh28") == 0)
        NTh28 = value;
    else if(name.compare("NTh29") == 0)
        NTh29 = value;
    else if(name.compare("NTh30") == 0)
        NTh30 = value;
        
    else if(name.compare("NTh31") == 0)
        NTh31 = value;
    else if(name.compare("NTh32") == 0)
        NTh32 = value;
    else if(name.compare("NTh33") == 0)
        NTh33 = value;
    else if(name.compare("NTh34") == 0)
        NTh34 = value;
    else if(name.compare("NTh35") == 0)
        NTh35 = value;
    else if(name.compare("NTh36") == 0)
        NTh36 = value;
    else if(name.compare("NTh37") == 0)
        NTh37 = value;
    else if(name.compare("NTh38") == 0)
        NTh38 = value;
    else if(name.compare("NTh39") == 0)
        NTh39 = value;
    else if(name.compare("NTh40") == 0)
        NTh40 = value;
        
    else if(name.compare("NBB") == 0)
        NBB = value;
    else if(name.compare("f00") == 0)
        f00 = value;
    else if(name.compare("BRDst") == 0)
        BRDst = value;
    else if(name.compare("BRD") == 0)
        BRD = value;
    else if(name.compare("tauB0") == 0)
        tauB0 = value;
        
    else if(name.compare("eps_el1") == 0)
        eps_el1 = value;
    else if(name.compare("eps_el2") == 0)
        eps_el2 = value;
    else if(name.compare("eps_el3") == 0)
        eps_el3 = value;
    else if(name.compare("eps_el4") == 0)
        eps_el4 = value;
    else if(name.compare("eps_el5") == 0)
        eps_el5 = value;
    else if(name.compare("eps_el6") == 0)
        eps_el6 = value;
    else if(name.compare("eps_el7") == 0)
        eps_el7 = value;
    else if(name.compare("eps_el8") == 0)
        eps_el8 = value;
    else if(name.compare("eps_el9") == 0)
        eps_el9 = value;
    else if(name.compare("eps_el10") == 0)
        eps_el10 = value;
        
    else if(name.compare("eps_el11") == 0)
        eps_el11 = value;
    else if(name.compare("eps_el12") == 0)
        eps_el12 = value;
    else if(name.compare("eps_el13") == 0)
        eps_el13 = value;
    else if(name.compare("eps_el14") == 0)
        eps_el14 = value;
    else if(name.compare("eps_el15") == 0)
        eps_el15 = value;
    else if(name.compare("eps_el16") == 0)
        eps_el16 = value;
    else if(name.compare("eps_el17") == 0)
        eps_el17 = value;
    else if(name.compare("eps_el18") == 0)
        eps_el18 = value;
    else if(name.compare("eps_el19") == 0)
        eps_el19 = value;
    else if(name.compare("eps_el20") == 0)
        eps_el20 = value;
        
    else if(name.compare("eps_el21") == 0)
        eps_el21 = value;
    else if(name.compare("eps_el22") == 0)
        eps_el22 = value;
    else if(name.compare("eps_el23") == 0)
        eps_el23 = value;
    else if(name.compare("eps_el24") == 0)
        eps_el24 = value;
    else if(name.compare("eps_el25") == 0)
        eps_el25 = value;
    else if(name.compare("eps_el26") == 0)
        eps_el26 = value;
    else if(name.compare("eps_el27") == 0)
        eps_el27 = value;
    else if(name.compare("eps_el28") == 0)
        eps_el28 = value;
    else if(name.compare("eps_el29") == 0)
        eps_el29 = value;
    else if(name.compare("eps_el30") == 0)
        eps_el30 = value;
        
    else if(name.compare("eps_el31") == 0)
        eps_el31 = value;
    else if(name.compare("eps_el32") == 0)
        eps_el32 = value;
    else if(name.compare("eps_el33") == 0)
        eps_el33 = value;
    else if(name.compare("eps_el34") == 0)
        eps_el34 = value;
    else if(name.compare("eps_el35") == 0)
        eps_el35 = value;
    else if(name.compare("eps_el36") == 0)
        eps_el36 = value;
    else if(name.compare("eps_el37") == 0)
        eps_el37 = value;
    else if(name.compare("eps_el38") == 0)
        eps_el38 = value;
    else if(name.compare("eps_el39") == 0)
        eps_el39 = value;
    else if(name.compare("eps_el40") == 0)
        eps_el40 = value;
        
    else if(name.compare("eps_mu1") == 0)
        eps_mu1 = value;
    else if(name.compare("eps_mu2") == 0)
        eps_mu2 = value;
    else if(name.compare("eps_mu3") == 0)
        eps_mu3 = value;
    else if(name.compare("eps_mu4") == 0)
        eps_mu4 = value;
    else if(name.compare("eps_mu5") == 0)
        eps_mu5 = value;
    else if(name.compare("eps_mu6") == 0)
        eps_mu6 = value;
    else if(name.compare("eps_mu7") == 0)
        eps_mu7 = value;
    else if(name.compare("eps_mu8") == 0)
        eps_mu8 = value;
    else if(name.compare("eps_mu9") == 0)
        eps_mu9 = value;
    else if(name.compare("eps_mu10") == 0)
        eps_mu10 = value;
        
    else if(name.compare("eps_mu11") == 0)
        eps_mu11 = value;
    else if(name.compare("eps_mu12") == 0)
        eps_mu12 = value;
    else if(name.compare("eps_mu13") == 0)
        eps_mu13 = value;
    else if(name.compare("eps_mu14") == 0)
        eps_mu14 = value;
    else if(name.compare("eps_mu15") == 0)
        eps_mu15 = value;
    else if(name.compare("eps_mu16") == 0)
        eps_mu16 = value;
    else if(name.compare("eps_mu17") == 0)
        eps_mu17 = value;
    else if(name.compare("eps_mu18") == 0)
        eps_mu18 = value;
    else if(name.compare("eps_mu19") == 0)
        eps_mu19 = value;
    else if(name.compare("eps_mu20") == 0)
        eps_mu20 = value;
        
    else if(name.compare("eps_mu21") == 0)
        eps_mu21 = value;
    else if(name.compare("eps_mu22") == 0)
        eps_mu22 = value;
    else if(name.compare("eps_mu23") == 0)
        eps_mu23 = value;
    else if(name.compare("eps_mu24") == 0)
        eps_mu24 = value;
    else if(name.compare("eps_mu25") == 0)
        eps_mu25 = value;
    else if(name.compare("eps_mu26") == 0)
        eps_mu26 = value;
    else if(name.compare("eps_mu27") == 0)
        eps_mu27 = value;
    else if(name.compare("eps_mu28") == 0)
        eps_mu28 = value;
    else if(name.compare("eps_mu29") == 0)
        eps_mu29 = value;
    else if(name.compare("eps_mu30") == 0)
        eps_mu30 = value;
        
    else if(name.compare("eps_mu31") == 0)
        eps_mu31 = value;
    else if(name.compare("eps_mu32") == 0)
        eps_mu32 = value;
    else if(name.compare("eps_mu33") == 0)
        eps_mu33 = value;
    else if(name.compare("eps_mu34") == 0)
        eps_mu34 = value;
    else if(name.compare("eps_mu35") == 0)
        eps_mu35 = value;
    else if(name.compare("eps_mu36") == 0)
        eps_mu36 = value;
    else if(name.compare("eps_mu37") == 0)
        eps_mu37 = value;
    else if(name.compare("eps_mu38") == 0)
        eps_mu38 = value;
    else if(name.compare("eps_mu39") == 0)
        eps_mu39 = value;
    else if(name.compare("eps_mu40") == 0)
        eps_mu40 = value;
        
    else
        StandardModel::setParameter(name,value);
}

bool myModel::CheckParameters(const std::map<std::string, double>& DPars)
{
    for (int i = 0; i < NmyModelvars; i++) {
        if (DPars.find(myModelvars[i]) == DPars.end()) {
            std::cout << "missing mandatory myModel parameter " << myModelvars[i] << std::endl;
            return false;
        }
    }
    return(StandardModel::CheckParameters(DPars));
}


/* Model Flags can be set here. */
bool myModel::setFlag(const std::string name, const bool value)
{
    bool res = false;
    
    if(name.compare("condition") == 0){
        condition = value;
        res = true;
    } else {
        res = StandardModel::setFlag(name,value);
    }

    return(res);
}