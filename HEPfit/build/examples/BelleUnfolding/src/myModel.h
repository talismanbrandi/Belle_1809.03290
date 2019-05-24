/* 
 * Copyright (C) 2015 HEPfit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#ifndef MYMODEL_H
#define	MYMODEL_H

#include <HEPfit.h>

/**
 * @class myModel
 * @brief My own Model.
 */
class myModel: public StandardModel {
public:

    static const int NmyModelvars = 125; /* Define number of mandatory parameters in the model. */
    static const std::string myModelvars[NmyModelvars]; /* Vector of model variable names. */
    
    /**
     * @brief myModel constructor
     */
    myModel();
    
    /**
     * @brief myModel destructor
     */
    ~myModel();
    
    virtual bool InitializeModel();
    
    virtual bool Init(const std::map<std::string, double>& DPars);
    
    virtual bool PreUpdate();
    
    virtual bool Update(const std::map<std::string, double>& DPars);
    
    virtual bool PostUpdate();
    
    virtual bool CheckParameters(const std::map<std::string, double>& DPars);
    
    virtual bool setFlag(const std::string name, const bool value);
    
    
    /**
     * 
     * @return NTh1
     */
    double getNTh1() const
    {
        return NTh1;
    };

    /**
     *
     * @return NTh2
     */
    double getNTh2() const
    {
        return NTh2;
    };
    
    /**
     *
     * @return NTh3
     */
    double getNTh3() const
    {
        return NTh3;
    };
    
    /**
     *
     * @return NTh4
     */
    double getNTh4() const
    {
        return NTh4;
    };
    
    /**
     * 
     * @return NTh5
     */
    double getNTh5() const
    {
        return NTh5;
    };

    /**
     *
     * @return NTh6
     */
    double getNTh6() const
    {
        return NTh6;
    };
    
    /**
     *
     * @return NTh7
     */
    double getNTh7() const
    {
        return NTh7;
    };
    
    /**
     *
     * @return NTh8
     */
    double getNTh8() const
    {
        return NTh8;
    };
    
    /**
     *
     * @return NTh9
     */
    double getNTh9() const
    {
        return NTh9;
    };
    
    /**
     *
     * @return NTh10
     */
    double getNTh10() const
    {
        return NTh10;
    };
    
    /**
     * 
     * @return NTh11
     */
    double getNTh11() const
    {
        return NTh11;
    };

    /**
     *
     * @return NTh12
     */
    double getNTh12() const
    {
        return NTh12;
    };
    
    /**
     *
     * @return NTh13
     */
    double getNTh13() const
    {
        return NTh13;
    };
    
    /**
     *
     * @return NTh14
     */
    double getNTh14() const
    {
        return NTh14;
    };
    
    /**
     * 
     * @return NTh15
     */
    double getNTh15() const
    {
        return NTh15;
    };

    /**
     *
     * @return NTh16
     */
    double getNTh16() const
    {
        return NTh16;
    };
    
    /**
     *
     * @return NTh17
     */
    double getNTh17() const
    {
        return NTh17;
    };
    
    /**
     *
     * @return NTh18
     */
    double getNTh18() const
    {
        return NTh18;
    };
    
    /**
     *
     * @return NTh19
     */
    double getNTh19() const
    {
        return NTh19;
    };
    
    /**
     *
     * @return NTh20
     */
    double getNTh20() const
    {
        return NTh20;
    };
    
    /**
     * 
     * @return NTh21
     */
    double getNTh21() const
    {
        return NTh21;
    };

    /**
     *
     * @return NTh22
     */
    double getNTh22() const
    {
        return NTh22;
    };
    
    /**
     *
     * @return NTh23
     */
    double getNTh23() const
    {
        return NTh23;
    };
    
    /**
     *
     * @return NTh24
     */
    double getNTh24() const
    {
        return NTh24;
    };
    
    /**
     * 
     * @return NTh25
     */
    double getNTh25() const
    {
        return NTh25;
    };

    /**
     *
     * @return NTh26
     */
    double getNTh26() const
    {
        return NTh26;
    };
    
    /**
     *
     * @return NTh27
     */
    double getNTh27() const
    {
        return NTh27;
    };
    
    /**
     *
     * @return NTh28
     */
    double getNTh28() const
    {
        return NTh28;
    };
    
    /**
     *
     * @return NTh29
     */
    double getNTh29() const
    {
        return NTh29;
    };
    
    /**
     *
     * @return NTh30
     */
    double getNTh30() const
    {
        return NTh30;
    };
    
    /**
     * 
     * @return NTh31
     */
    double getNTh31() const
    {
        return NTh31;
    };

    /**
     *
     * @return NTh32
     */
    double getNTh32() const
    {
        return NTh32;
    };
    
    /**
     *
     * @return NTh33
     */
    double getNTh33() const
    {
        return NTh33;
    };
    
    /**
     *
     * @return NTh34
     */
    double getNTh34() const
    {
        return NTh34;
    };
    
    /**
     * 
     * @return NTh35
     */
    double getNTh35() const
    {
        return NTh35;
    };

    /**
     *
     * @return NTh36
     */
    double getNTh36() const
    {
        return NTh36;
    };
    
    /**
     *
     * @return NTh37
     */
    double getNTh37() const
    {
        return NTh37;
    };
    
    /**
     *
     * @return NTh38
     */
    double getNTh38() const
    {
        return NTh38;
    };
    
    /**
     *
     * @return NTh39
     */
    double getNTh39() const
    {
        return NTh39;
    };
    
    /**
     *
     * @return NTh40
     */
    double getNTh40() const
    {
        return NTh40;
    };
    
    /**
     *
     * @return NBB
     */
    double getNBB() const
    {
        return NBB;
    };
    
    /**
     *
     * @return f00
     */
    double getf00() const
    {
        return f00;
    };
    
    /**
     *
     * @return BRDst
     */
    double getBRDst() const
    {
        return BRDst;
    };
    
    /**
     *
     * @return BRD
     */
    double getBRD() const
    {
        return BRD;
    };

    /**
     *
     * @return tauB0
     */
    double gettauB0() const
    {
        return tauB0;
    };
    
    /**
     * 
     * @return eps_el1
     */
    double geteps_el1() const
    {
        return eps_el1;
    };

    /**
     *
     * @return eps_el2
     */
    double geteps_el2() const
    {
        return eps_el2;
    };
    
    /**
     *
     * @return eps_el3
     */
    double geteps_el3() const
    {
        return eps_el3;
    };
    
    /**
     *
     * @return eps_el4
     */
    double geteps_el4() const
    {
        return eps_el4;
    };
    
    /**
     * 
     * @return eps_el5
     */
    double geteps_el5() const
    {
        return eps_el5;
    };

    /**
     *
     * @return eps_el6
     */
    double geteps_el6() const
    {
        return eps_el6;
    };
    
    /**
     *
     * @return eps_el7
     */
    double geteps_el7() const
    {
        return eps_el7;
    };
    
    /**
     *
     * @return eps_el8
     */
    double geteps_el8() const
    {
        return eps_el8;
    };
    
    /**
     *
     * @return eps_el9
     */
    double geteps_el9() const
    {
        return eps_el9;
    };
    
    /**
     *
     * @return eps_el10
     */
    double geteps_el10() const
    {
        return eps_el10;
    };
    
    /**
     * 
     * @return eps_el11
     */
    double geteps_el11() const
    {
        return eps_el11;
    };

    /**
     *
     * @return eps_el12
     */
    double geteps_el12() const
    {
        return eps_el12;
    };
    
    /**
     *
     * @return eps_el13
     */
    double geteps_el13() const
    {
        return eps_el13;
    };
    
    /**
     *
     * @return eps_el14
     */
    double geteps_el14() const
    {
        return eps_el14;
    };
    
    /**
     * 
     * @return eps_el15
     */
    double geteps_el15() const
    {
        return eps_el15;
    };

    /**
     *
     * @return eps_el16
     */
    double geteps_el16() const
    {
        return eps_el16;
    };
    
    /**
     *
     * @return eps_el17
     */
    double geteps_el17() const
    {
        return eps_el17;
    };
    
    /**
     *
     * @return eps_el18
     */
    double geteps_el18() const
    {
        return eps_el18;
    };
    
    /**
     *
     * @return eps_el19
     */
    double geteps_el19() const
    {
        return eps_el19;
    };
    
    /**
     *
     * @return eps_el20
     */
    double geteps_el20() const
    {
        return eps_el20;
    };
    
    /**
     * 
     * @return eps_el21
     */
    double geteps_el21() const
    {
        return eps_el21;
    };

    /**
     *
     * @return eps_el22
     */
    double geteps_el22() const
    {
        return eps_el22;
    };
    
    /**
     *
     * @return eps_el23
     */
    double geteps_el23() const
    {
        return eps_el23;
    };
    
    /**
     *
     * @return eps_el24
     */
    double geteps_el24() const
    {
        return eps_el24;
    };
    
    /**
     * 
     * @return eps_el25
     */
    double geteps_el25() const
    {
        return eps_el25;
    };

    /**
     *
     * @return eps_el26
     */
    double geteps_el26() const
    {
        return eps_el26;
    };
    
    /**
     *
     * @return eps_el27
     */
    double geteps_el27() const
    {
        return eps_el27;
    };
    
    /**
     *
     * @return eps_el28
     */
    double geteps_el28() const
    {
        return eps_el28;
    };
    
    /**
     *
     * @return eps_el29
     */
    double geteps_el29() const
    {
        return eps_el29;
    };
    
    /**
     *
     * @return eps_el30
     */
    double geteps_el30() const
    {
        return eps_el30;
    };
    
    /**
     * 
     * @return eps_el31
     */
    double geteps_el31() const
    {
        return eps_el31;
    };

    /**
     *
     * @return eps_el32
     */
    double geteps_el32() const
    {
        return eps_el32;
    };
    
    /**
     *
     * @return eps_el33
     */
    double geteps_el33() const
    {
        return eps_el33;
    };
    
    /**
     *
     * @return eps_el34
     */
    double geteps_el34() const
    {
        return eps_el34;
    };
    
    /**
     * 
     * @return eps_el35
     */
    double geteps_el35() const
    {
        return eps_el35;
    };

    /**
     *
     * @return eps_el36
     */
    double geteps_el36() const
    {
        return eps_el36;
    };
    
    /**
     *
     * @return eps_el37
     */
    double geteps_el37() const
    {
        return eps_el37;
    };
    
    /**
     *
     * @return eps_el38
     */
    double geteps_el38() const
    {
        return eps_el38;
    };
    
    /**
     *
     * @return eps_el39
     */
    double geteps_el39() const
    {
        return eps_el39;
    };
    
    /**
     *
     * @return eps_el40
     */
    double geteps_el40() const
    {
        return eps_el40;
    };
    
    /**
     * 
     * @return eps_mu1
     */
    double geteps_mu1() const
    {
        return eps_mu1;
    };

    /**
     *
     * @return eps_mu2
     */
    double geteps_mu2() const
    {
        return eps_mu2;
    };
    
    /**
     *
     * @return eps_mu3
     */
    double geteps_mu3() const
    {
        return eps_mu3;
    };
    
    /**
     *
     * @return eps_mu4
     */
    double geteps_mu4() const
    {
        return eps_mu4;
    };
    
    /**
     * 
     * @return eps_mu5
     */
    double geteps_mu5() const
    {
        return eps_mu5;
    };

    /**
     *
     * @return eps_mu6
     */
    double geteps_mu6() const
    {
        return eps_mu6;
    };
    
    /**
     *
     * @return eps_mu7
     */
    double geteps_mu7() const
    {
        return eps_mu7;
    };
    
    /**
     *
     * @return eps_mu8
     */
    double geteps_mu8() const
    {
        return eps_mu8;
    };
    
    /**
     *
     * @return eps_mu9
     */
    double geteps_mu9() const
    {
        return eps_mu9;
    };
    
    /**
     *
     * @return eps_mu10
     */
    double geteps_mu10() const
    {
        return eps_mu10;
    };
    
    /**
     * 
     * @return eps_mu11
     */
    double geteps_mu11() const
    {
        return eps_mu11;
    };

    /**
     *
     * @return eps_mu12
     */
    double geteps_mu12() const
    {
        return eps_mu12;
    };
    
    /**
     *
     * @return eps_mu13
     */
    double geteps_mu13() const
    {
        return eps_mu13;
    };
    
    /**
     *
     * @return eps_mu14
     */
    double geteps_mu14() const
    {
        return eps_mu14;
    };
    
    /**
     * 
     * @return eps_mu15
     */
    double geteps_mu15() const
    {
        return eps_mu15;
    };

    /**
     *
     * @return eps_mu16
     */
    double geteps_mu16() const
    {
        return eps_mu16;
    };
    
    /**
     *
     * @return eps_mu17
     */
    double geteps_mu17() const
    {
        return eps_mu17;
    };
    
    /**
     *
     * @return eps_mu18
     */
    double geteps_mu18() const
    {
        return eps_mu18;
    };
    
    /**
     *
     * @return eps_mu19
     */
    double geteps_mu19() const
    {
        return eps_mu19;
    };
    
    /**
     *
     * @return eps_mu20
     */
    double geteps_mu20() const
    {
        return eps_mu20;
    };
    
    /**
     * 
     * @return eps_mu21
     */
    double geteps_mu21() const
    {
        return eps_mu21;
    };

    /**
     *
     * @return eps_mu22
     */
    double geteps_mu22() const
    {
        return eps_mu22;
    };
    
    /**
     *
     * @return eps_mu23
     */
    double geteps_mu23() const
    {
        return eps_mu23;
    };
    
    /**
     *
     * @return eps_mu24
     */
    double geteps_mu24() const
    {
        return eps_mu24;
    };
    
    /**
     * 
     * @return eps_mu25
     */
    double geteps_mu25() const
    {
        return eps_mu25;
    };

    /**
     *
     * @return eps_mu26
     */
    double geteps_mu26() const
    {
        return eps_mu26;
    };
    
    /**
     *
     * @return eps_mu27
     */
    double geteps_mu27() const
    {
        return eps_mu27;
    };
    
    /**
     *
     * @return eps_mu28
     */
    double geteps_mu28() const
    {
        return eps_mu28;
    };
    
    /**
     *
     * @return eps_mu29
     */
    double geteps_mu29() const
    {
        return eps_mu29;
    };
    
    /**
     *
     * @return eps_mu30
     */
    double geteps_mu30() const
    {
        return eps_mu30;
    };
    
    /**
     * 
     * @return eps_mu31
     */
    double geteps_mu31() const
    {
        return eps_mu31;
    };

    /**
     *
     * @return eps_mu32
     */
    double geteps_mu32() const
    {
        return eps_mu32;
    };
    
    /**
     *
     * @return eps_mu33
     */
    double geteps_mu33() const
    {
        return eps_mu33;
    };
    
    /**
     *
     * @return eps_mu34
     */
    double geteps_mu34() const
    {
        return eps_mu34;
    };
    
    /**
     * 
     * @return eps_mu35
     */
    double geteps_mu35() const
    {
        return eps_mu35;
    };

    /**
     *
     * @return eps_mu36
     */
    double geteps_mu36() const
    {
        return eps_mu36;
    };
    
    /**
     *
     * @return eps_mu37
     */
    double geteps_mu37() const
    {
        return eps_mu37;
    };
    
    /**
     *
     * @return eps_mu38
     */
    double geteps_mu38() const
    {
        return eps_mu38;
    };
    
    /**
     *
     * @return eps_mu39
     */
    double geteps_mu39() const
    {
        return eps_mu39;
    };
    
    /**
     *
     * @return eps_mu40
     */
    double geteps_mu40() const
    {
        return eps_mu40;
    };

protected:
    
    virtual void setParameter(const std::string, const double&);

private:
    
    double NTh1, NTh2, NTh3, NTh4, NTh5, NTh6, NTh7, NTh8, NTh9, NTh10; /* Model Parameters */
    double NTh11, NTh12, NTh13, NTh14, NTh15, NTh16, NTh17, NTh18, NTh19, NTh20; /* Model Parameters */
    double NTh21, NTh22, NTh23, NTh24, NTh25, NTh26, NTh27, NTh28, NTh29, NTh30; /* Model Parameters */
    double NTh31, NTh32, NTh33, NTh34, NTh35, NTh36, NTh37, NTh38, NTh39, NTh40; /* Model Parameters */
    double NBB, f00, BRDst, BRD, tauB0; /* Model Parameters */
    double eps_el1, eps_el2, eps_el3, eps_el4, eps_el5, eps_el6, eps_el7, eps_el8, eps_el9, eps_el10; /* Model Parameters */
    double eps_el11, eps_el12, eps_el13, eps_el14, eps_el15, eps_el16, eps_el17, eps_el18, eps_el19, eps_el20; /* Model Parameters */
    double eps_el21, eps_el22, eps_el23, eps_el24, eps_el25, eps_el26, eps_el27, eps_el28, eps_el29, eps_el30; /* Model Parameters */
    double eps_el31, eps_el32, eps_el33, eps_el34, eps_el35, eps_el36, eps_el37, eps_el38, eps_el39, eps_el40; /* Model Parameters */
    double eps_mu1, eps_mu2, eps_mu3, eps_mu4, eps_mu5, eps_mu6, eps_mu7, eps_mu8, eps_mu9, eps_mu10; /* Model Parameters */
    double eps_mu11, eps_mu12, eps_mu13, eps_mu14, eps_mu15, eps_mu16, eps_mu17, eps_mu18, eps_mu19, eps_mu20; /* Model Parameters */
    double eps_mu21, eps_mu22, eps_mu23, eps_mu24, eps_mu25, eps_mu26, eps_mu27, eps_mu28, eps_mu29, eps_mu30; /* Model Parameters */
    double eps_mu31, eps_mu32, eps_mu33, eps_mu34, eps_mu35, eps_mu36, eps_mu37, eps_mu38, eps_mu39, eps_mu40; /* Model Parameters */
    bool condition;
    
};

#endif	/* MYMODEL_H */

