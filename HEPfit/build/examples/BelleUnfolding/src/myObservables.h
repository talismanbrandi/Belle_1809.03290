/* 
 * Copyright (C) 2015 HEPfit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#ifndef MYOBSERVABLES_H
#define	MYOBSERVABLES_H

#include <HEPfit.h>
#include "myModel.h"

#define LEPTON 1


/**
 * @class myObservables
 * @brief A class for the gg -> 4l.
 */
class myObservables : public ThObservable {
public:
    myObservables(const StandardModel& SM_i);
    virtual ~myObservables();
    void updateParameters();
    
protected:
    
    /* Define the parameters here. */
    double NTh_el1, NTh_el2, NTh_el3, NTh_el4, NTh_el5, NTh_el6, NTh_el7, NTh_el8, NTh_el9, NTh_el10; /* Model Parameters */
    double NTh_el11, NTh_el12, NTh_el13, NTh_el14, NTh_el15, NTh_el16, NTh_el17, NTh_el18, NTh_el19, NTh_el20; /* Model Parameters */
    double NTh_el21, NTh_el22, NTh_el23, NTh_el24, NTh_el25, NTh_el26, NTh_el27, NTh_el28, NTh_el29, NTh_el30; /* Model Parameters */
    double NTh_el31, NTh_el32, NTh_el33, NTh_el34, NTh_el35, NTh_el36, NTh_el37, NTh_el38, NTh_el39, NTh_el40; /* Model Parameters */
    double NB0;
    double NTh_mu1, NTh_mu2, NTh_mu3, NTh_mu4, NTh_mu5, NTh_mu6, NTh_mu7, NTh_mu8, NTh_mu9, NTh_mu10; /* Model Parameters */
    double NTh_mu11, NTh_mu12, NTh_mu13, NTh_mu14, NTh_mu15, NTh_mu16, NTh_mu17, NTh_mu18, NTh_mu19, NTh_mu20; /* Model Parameters */
    double NTh_mu21, NTh_mu22, NTh_mu23, NTh_mu24, NTh_mu25, NTh_mu26, NTh_mu27, NTh_mu28, NTh_mu29, NTh_mu30; /* Model Parameters */
    double NTh_mu31, NTh_mu32, NTh_mu33, NTh_mu34, NTh_mu35, NTh_mu36, NTh_mu37, NTh_mu38, NTh_mu39, NTh_mu40; /* Model Parameters */

private:
    const myModel * my_model;

};

class yield : public myObservables {
public:
    
    /**
     * @brief Constructor.
     */
    yield(const StandardModel& SM_i, unsigned int bin_i, unsigned int lep_i);
    
    /**
     * @return yield
     */
    double computeThValue ();
    
private:
    unsigned int bin;
    unsigned int lep;

};

#endif	/* MYOBSERVABLES_H */

