/* 
 * Copyright (C) 2015 HEPfit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

/**
 * @example myModel_MCMC.cpp
 * @example myModel.h
 * @example myModel.cpp
 * @example myObservables.h
 * @example myObservables.cpp
 * This is an example of how to add user-defined model and observables
 * and to perform a Bayesian analysis with the Markov Chain Monte Carlo.
 *
 */

#include <iostream>
#include <HEPfit.h>
#include <boost/bind.hpp>
#include "myModel.h"
#include "myObservables.h"

/* Necessary if MPI support is enabled during compilation. */
#ifdef _MPI
#include <mpi.h>
#endif

int main(int argc, char** argv) 
{

/* Necessary if MPI support is enabled during compilation. */
#ifdef _MPI
    MPI_Init(&argc, &argv);
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
#else
    /* In our MPI implementation the process with rank 0 is the master. */
    int rank = 0;
#endif
    
    try {
        
        if(argc != 3){
            /* Print usage and exit. */
            if (rank == 0) std::cout << "\nusage: " << argv[0] << " ModelConf.conf MonteCarlo.conf\n" << std::endl;
            return EXIT_SUCCESS;
        }

        /* Define the model configuration file.                                */
        /* Here it is passed as the first argument to the executable. The      */
        /* model configuration file provides the values with errors for the    */
        /* mandatory model parameters, as well as the list of observables,     */
        /* observables2D, correlated Gaussian observables.                     */
        /* See documentation for details.                                      */
        std::string ModelConf = argv[1];
        
        /* Define the Monte Carlo configuration file.                         */
        /* Here it is passed as the second argument to the executable. The    */
        /* Monte Carlo configuration file provides the parameters used in the */
        /* Monte Carlo run. See documentation for details.                    */
        std::string MCMCConf = argv[2];
        
        /* Define the ROOT output file (w/o extension, empty string will set it to MCout) */
        std::string FileOut = "";        
        
        /* Define the optional job tag. */
        std::string JobTag = "";
        
        /* Create objects of the classes ModelFactory and ThObsFactory */
        ThObsFactory ThObsF;
        ModelFactory ModelF;
        myModel my_model;

        /* register user-defined model named ModelName defined in class ModelClass using the following syntax: */
        ModelF.addModelToFactory("myModel", boost::factory<myModel*>() );
        
        /* register user-defined ThObservable named ThObsName defined in class ThObsClass using the following syntax: */
        
        /* Electrons */
        ThObsF.addObsToFactory("BIN_el1", boost::bind(boost::factory<yield*>(), _1, 1, 0) );
        ThObsF.addObsToFactory("BIN_el2", boost::bind(boost::factory<yield*>(), _1, 2, 0) );
        ThObsF.addObsToFactory("BIN_el3", boost::bind(boost::factory<yield*>(), _1, 3, 0) );
        ThObsF.addObsToFactory("BIN_el4", boost::bind(boost::factory<yield*>(), _1, 4, 0) );
        ThObsF.addObsToFactory("BIN_el5", boost::bind(boost::factory<yield*>(), _1, 5, 0) );
        ThObsF.addObsToFactory("BIN_el6", boost::bind(boost::factory<yield*>(), _1, 6, 0) );
        ThObsF.addObsToFactory("BIN_el7", boost::bind(boost::factory<yield*>(), _1, 7, 0) );
        ThObsF.addObsToFactory("BIN_el8", boost::bind(boost::factory<yield*>(), _1, 8, 0) );
        ThObsF.addObsToFactory("BIN_el9", boost::bind(boost::factory<yield*>(), _1, 9, 0) );
        ThObsF.addObsToFactory("BIN_el10", boost::bind(boost::factory<yield*>(), _1, 10, 0) );
        
        ThObsF.addObsToFactory("BIN_el11", boost::bind(boost::factory<yield*>(), _1, 11, 0) );
        ThObsF.addObsToFactory("BIN_el12", boost::bind(boost::factory<yield*>(), _1, 12, 0) );
        ThObsF.addObsToFactory("BIN_el13", boost::bind(boost::factory<yield*>(), _1, 13, 0) );
        ThObsF.addObsToFactory("BIN_el14", boost::bind(boost::factory<yield*>(), _1, 14, 0) );
        ThObsF.addObsToFactory("BIN_el15", boost::bind(boost::factory<yield*>(), _1, 15, 0) );
        ThObsF.addObsToFactory("BIN_el16", boost::bind(boost::factory<yield*>(), _1, 16, 0) );
        ThObsF.addObsToFactory("BIN_el17", boost::bind(boost::factory<yield*>(), _1, 17, 0) );
        ThObsF.addObsToFactory("BIN_el18", boost::bind(boost::factory<yield*>(), _1, 18, 0) );
        ThObsF.addObsToFactory("BIN_el19", boost::bind(boost::factory<yield*>(), _1, 19, 0) );
        ThObsF.addObsToFactory("BIN_el20", boost::bind(boost::factory<yield*>(), _1, 20, 0) );
        
        ThObsF.addObsToFactory("BIN_el21", boost::bind(boost::factory<yield*>(), _1, 21, 0) );
        ThObsF.addObsToFactory("BIN_el22", boost::bind(boost::factory<yield*>(), _1, 22, 0) );
        ThObsF.addObsToFactory("BIN_el23", boost::bind(boost::factory<yield*>(), _1, 23, 0) );
        ThObsF.addObsToFactory("BIN_el24", boost::bind(boost::factory<yield*>(), _1, 24, 0) );
        ThObsF.addObsToFactory("BIN_el25", boost::bind(boost::factory<yield*>(), _1, 25, 0) );
        ThObsF.addObsToFactory("BIN_el26", boost::bind(boost::factory<yield*>(), _1, 26, 0) );
        ThObsF.addObsToFactory("BIN_el27", boost::bind(boost::factory<yield*>(), _1, 27, 0) );
        ThObsF.addObsToFactory("BIN_el28", boost::bind(boost::factory<yield*>(), _1, 28, 0) );
        ThObsF.addObsToFactory("BIN_el29", boost::bind(boost::factory<yield*>(), _1, 29, 0) );
        ThObsF.addObsToFactory("BIN_el30", boost::bind(boost::factory<yield*>(), _1, 30, 0) );
        
        ThObsF.addObsToFactory("BIN_el31", boost::bind(boost::factory<yield*>(), _1, 31, 0) );
        ThObsF.addObsToFactory("BIN_el32", boost::bind(boost::factory<yield*>(), _1, 32, 0) );
        ThObsF.addObsToFactory("BIN_el33", boost::bind(boost::factory<yield*>(), _1, 33, 0) );
        ThObsF.addObsToFactory("BIN_el34", boost::bind(boost::factory<yield*>(), _1, 34, 0) );
        ThObsF.addObsToFactory("BIN_el35", boost::bind(boost::factory<yield*>(), _1, 35, 0) );
        ThObsF.addObsToFactory("BIN_el36", boost::bind(boost::factory<yield*>(), _1, 36, 0) );
        ThObsF.addObsToFactory("BIN_el37", boost::bind(boost::factory<yield*>(), _1, 37, 0) );
        ThObsF.addObsToFactory("BIN_el38", boost::bind(boost::factory<yield*>(), _1, 38, 0) );
        ThObsF.addObsToFactory("BIN_el39", boost::bind(boost::factory<yield*>(), _1, 39, 0) );
        ThObsF.addObsToFactory("BIN_el40", boost::bind(boost::factory<yield*>(), _1, 40, 0) );
        
        /* Muons */
        
        ThObsF.addObsToFactory("BIN_mu1", boost::bind(boost::factory<yield*>(), _1, 1, 1) );
        ThObsF.addObsToFactory("BIN_mu2", boost::bind(boost::factory<yield*>(), _1, 2, 1) );
        ThObsF.addObsToFactory("BIN_mu3", boost::bind(boost::factory<yield*>(), _1, 3, 1) );
        ThObsF.addObsToFactory("BIN_mu4", boost::bind(boost::factory<yield*>(), _1, 4, 1) );
        ThObsF.addObsToFactory("BIN_mu5", boost::bind(boost::factory<yield*>(), _1, 5, 1) );
        ThObsF.addObsToFactory("BIN_mu6", boost::bind(boost::factory<yield*>(), _1, 6, 1) );
        ThObsF.addObsToFactory("BIN_mu7", boost::bind(boost::factory<yield*>(), _1, 7, 1) );
        ThObsF.addObsToFactory("BIN_mu8", boost::bind(boost::factory<yield*>(), _1, 8, 1) );
        ThObsF.addObsToFactory("BIN_mu9", boost::bind(boost::factory<yield*>(), _1, 9, 1) );
        ThObsF.addObsToFactory("BIN_mu10", boost::bind(boost::factory<yield*>(), _1, 10, 1) );
        
        ThObsF.addObsToFactory("BIN_mu11", boost::bind(boost::factory<yield*>(), _1, 11, 1) );
        ThObsF.addObsToFactory("BIN_mu12", boost::bind(boost::factory<yield*>(), _1, 12, 1) );
        ThObsF.addObsToFactory("BIN_mu13", boost::bind(boost::factory<yield*>(), _1, 13, 1) );
        ThObsF.addObsToFactory("BIN_mu14", boost::bind(boost::factory<yield*>(), _1, 14, 1) );
        ThObsF.addObsToFactory("BIN_mu15", boost::bind(boost::factory<yield*>(), _1, 15, 1) );
        ThObsF.addObsToFactory("BIN_mu16", boost::bind(boost::factory<yield*>(), _1, 16, 1) );
        ThObsF.addObsToFactory("BIN_mu17", boost::bind(boost::factory<yield*>(), _1, 17, 1) );
        ThObsF.addObsToFactory("BIN_mu18", boost::bind(boost::factory<yield*>(), _1, 18, 1) );
        ThObsF.addObsToFactory("BIN_mu19", boost::bind(boost::factory<yield*>(), _1, 19, 1) );
        ThObsF.addObsToFactory("BIN_mu20", boost::bind(boost::factory<yield*>(), _1, 20, 1) );
        
        ThObsF.addObsToFactory("BIN_mu21", boost::bind(boost::factory<yield*>(), _1, 21, 1) );
        ThObsF.addObsToFactory("BIN_mu22", boost::bind(boost::factory<yield*>(), _1, 22, 1) );
        ThObsF.addObsToFactory("BIN_mu23", boost::bind(boost::factory<yield*>(), _1, 23, 1) );
        ThObsF.addObsToFactory("BIN_mu24", boost::bind(boost::factory<yield*>(), _1, 24, 1) );
        ThObsF.addObsToFactory("BIN_mu25", boost::bind(boost::factory<yield*>(), _1, 25, 1) );
        ThObsF.addObsToFactory("BIN_mu26", boost::bind(boost::factory<yield*>(), _1, 26, 1) );
        ThObsF.addObsToFactory("BIN_mu27", boost::bind(boost::factory<yield*>(), _1, 27, 1) );
        ThObsF.addObsToFactory("BIN_mu28", boost::bind(boost::factory<yield*>(), _1, 28, 1) );
        ThObsF.addObsToFactory("BIN_mu29", boost::bind(boost::factory<yield*>(), _1, 29, 1) );
        ThObsF.addObsToFactory("BIN_mu30", boost::bind(boost::factory<yield*>(), _1, 30, 1) );
        
        ThObsF.addObsToFactory("BIN_mu31", boost::bind(boost::factory<yield*>(), _1, 31, 1) );
        ThObsF.addObsToFactory("BIN_mu32", boost::bind(boost::factory<yield*>(), _1, 32, 1) );
        ThObsF.addObsToFactory("BIN_mu33", boost::bind(boost::factory<yield*>(), _1, 33, 1) );
        ThObsF.addObsToFactory("BIN_mu34", boost::bind(boost::factory<yield*>(), _1, 34, 1) );
        ThObsF.addObsToFactory("BIN_mu35", boost::bind(boost::factory<yield*>(), _1, 35, 1) );
        ThObsF.addObsToFactory("BIN_mu36", boost::bind(boost::factory<yield*>(), _1, 36, 1) );
        ThObsF.addObsToFactory("BIN_mu37", boost::bind(boost::factory<yield*>(), _1, 37, 1) );
        ThObsF.addObsToFactory("BIN_mu38", boost::bind(boost::factory<yield*>(), _1, 38, 1) );
        ThObsF.addObsToFactory("BIN_mu39", boost::bind(boost::factory<yield*>(), _1, 39, 1) );
        ThObsF.addObsToFactory("BIN_mu40", boost::bind(boost::factory<yield*>(), _1, 40, 1) );
        
        /* Create an object of the class MonteCarlo. */        
        MonteCarlo MC(ModelF, ThObsF, ModelConf, MCMCConf, FileOut, JobTag);
        
        /* Do a test run if you wish to see the values of the observables      */
        /* and the correlated Gaussian observables defined in the model        */
        /* configuration file computed with the central value of the mandatory */
        /* parameters defined in the same file.                                */
        if (MCMCConf.compare("--noMC") == 0) MC.TestRun(rank);
        
        /* Initiate the Mote Carlo run. */
        else MC.Run(rank);

/* Necessary if MPI support is enabled during compilation. */
#ifdef _MPI
        MPI_Finalize();
#endif
        
        return EXIT_SUCCESS;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
