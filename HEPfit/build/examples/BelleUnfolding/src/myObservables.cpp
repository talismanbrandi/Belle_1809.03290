/* 
 * Copyright (C) 2015 HEPfit Collaboration
 * All rights reserved.
 *
 * For the licensing terms see doc/COPYING.
 */

#include "myObservables.h"


myObservables::myObservables(const StandardModel& SM_i)
: ThObservable(SM_i), my_model(static_cast<const myModel*> (&SM_i))
{}

myObservables::~myObservables()
{}

void myObservables::updateParameters()
{
    NB0 = 2.*my_model->getf00()*my_model->getNBB()*my_model->getBRDst()*my_model->getBRD()*my_model->gettauB0()/HCUT;
    
    NTh_el1 = my_model->geteps_el1() * my_model->getNTh1() * NB0;
    NTh_el2 = my_model->geteps_el2() * my_model->getNTh2() * NB0;
    NTh_el3 = my_model->geteps_el3() * my_model->getNTh3() * NB0;
    NTh_el4 = my_model->geteps_el4() * my_model->getNTh4() * NB0;
    NTh_el5 = my_model->geteps_el5() * my_model->getNTh5() * NB0;
    NTh_el6 = my_model->geteps_el6() * my_model->getNTh6() * NB0;
    NTh_el7 = my_model->geteps_el7() * my_model->getNTh7() * NB0;
    NTh_el8 = my_model->geteps_el8() * my_model->getNTh8() * NB0;
    NTh_el9 = my_model->geteps_el9() * my_model->getNTh9() * NB0;
    NTh_el10 = my_model->geteps_el10() * my_model->getNTh10() * NB0;
    
    NTh_el11 = my_model->geteps_el11() * my_model->getNTh11() * NB0;
    NTh_el12 = my_model->geteps_el12() * my_model->getNTh12() * NB0;
    NTh_el13 = my_model->geteps_el13() * my_model->getNTh13() * NB0;
    NTh_el14 = my_model->geteps_el14() * my_model->getNTh14() * NB0;
    NTh_el15 = my_model->geteps_el15() * my_model->getNTh15() * NB0;
    NTh_el16 = my_model->geteps_el16() * my_model->getNTh16() * NB0;
    NTh_el17 = my_model->geteps_el17() * my_model->getNTh17() * NB0;
    NTh_el18 = my_model->geteps_el18() * my_model->getNTh18() * NB0;
    NTh_el19 = my_model->geteps_el19() * my_model->getNTh19() * NB0;
    NTh_el20 = my_model->geteps_el20() * my_model->getNTh20() * NB0;
    
    NTh_el21 = my_model->geteps_el21() * my_model->getNTh21() * NB0;
    NTh_el22 = my_model->geteps_el22() * my_model->getNTh22() * NB0;
    NTh_el23 = my_model->geteps_el23() * my_model->getNTh23() * NB0;
    NTh_el24 = my_model->geteps_el24() * my_model->getNTh24() * NB0;
    NTh_el25 = my_model->geteps_el25() * my_model->getNTh25() * NB0;
    NTh_el26 = my_model->geteps_el26() * my_model->getNTh26() * NB0;
    NTh_el27 = my_model->geteps_el27() * my_model->getNTh27() * NB0;
    NTh_el28 = my_model->geteps_el28() * my_model->getNTh28() * NB0;
    NTh_el29 = my_model->geteps_el29() * my_model->getNTh29() * NB0;
    NTh_el30 = my_model->geteps_el30() * my_model->getNTh30() * NB0;
    
    NTh_el31 = my_model->geteps_el31() * my_model->getNTh31() * NB0;
    NTh_el32 = my_model->geteps_el32() * my_model->getNTh32() * NB0;
    NTh_el33 = my_model->geteps_el33() * my_model->getNTh33() * NB0;
    NTh_el34 = my_model->geteps_el34() * my_model->getNTh34() * NB0;
    NTh_el35 = my_model->geteps_el35() * my_model->getNTh35() * NB0;
    NTh_el36 = my_model->geteps_el36() * my_model->getNTh36() * NB0;
    NTh_el37 = my_model->geteps_el37() * my_model->getNTh37() * NB0;
    NTh_el38 = my_model->geteps_el38() * my_model->getNTh38() * NB0;
    NTh_el39 = my_model->geteps_el39() * my_model->getNTh39() * NB0;
    NTh_el40 = my_model->geteps_el40() * my_model->getNTh40() * NB0;
    
    
    
    NTh_mu1 = my_model->geteps_mu1() * my_model->getNTh1() * NB0;
    NTh_mu2 = my_model->geteps_mu2() * my_model->getNTh2() * NB0;
    NTh_mu3 = my_model->geteps_mu3() * my_model->getNTh3() * NB0;
    NTh_mu4 = my_model->geteps_mu4() * my_model->getNTh4() * NB0;
    NTh_mu5 = my_model->geteps_mu5() * my_model->getNTh5() * NB0;
    NTh_mu6 = my_model->geteps_mu6() * my_model->getNTh6() * NB0;
    NTh_mu7 = my_model->geteps_mu7() * my_model->getNTh7() * NB0;
    NTh_mu8 = my_model->geteps_mu8() * my_model->getNTh8() * NB0;
    NTh_mu9 = my_model->geteps_mu9() * my_model->getNTh9() * NB0;
    NTh_mu10 = my_model->geteps_mu10() * my_model->getNTh10() * NB0;
    
    NTh_mu11 = my_model->geteps_mu11() * my_model->getNTh11() * NB0;
    NTh_mu12 = my_model->geteps_mu12() * my_model->getNTh12() * NB0;
    NTh_mu13 = my_model->geteps_mu13() * my_model->getNTh13() * NB0;
    NTh_mu14 = my_model->geteps_mu14() * my_model->getNTh14() * NB0;
    NTh_mu15 = my_model->geteps_mu15() * my_model->getNTh15() * NB0;
    NTh_mu16 = my_model->geteps_mu16() * my_model->getNTh16() * NB0;
    NTh_mu17 = my_model->geteps_mu17() * my_model->getNTh17() * NB0;
    NTh_mu18 = my_model->geteps_mu18() * my_model->getNTh18() * NB0;
    NTh_mu19 = my_model->geteps_mu19() * my_model->getNTh19() * NB0;
    NTh_mu20 = my_model->geteps_mu20() * my_model->getNTh20() * NB0;
    
    NTh_mu21 = my_model->geteps_mu21() * my_model->getNTh21() * NB0;
    NTh_mu22 = my_model->geteps_mu22() * my_model->getNTh22() * NB0;
    NTh_mu23 = my_model->geteps_mu23() * my_model->getNTh23() * NB0;
    NTh_mu24 = my_model->geteps_mu24() * my_model->getNTh24() * NB0;
    NTh_mu25 = my_model->geteps_mu25() * my_model->getNTh25() * NB0;
    NTh_mu26 = my_model->geteps_mu26() * my_model->getNTh26() * NB0;
    NTh_mu27 = my_model->geteps_mu27() * my_model->getNTh27() * NB0;
    NTh_mu28 = my_model->geteps_mu28() * my_model->getNTh28() * NB0;
    NTh_mu29 = my_model->geteps_mu29() * my_model->getNTh29() * NB0;
    NTh_mu30 = my_model->geteps_mu30() * my_model->getNTh30() * NB0;
    
    NTh_mu31 = my_model->geteps_mu31() * my_model->getNTh31() * NB0;
    NTh_mu32 = my_model->geteps_mu32() * my_model->getNTh32() * NB0;
    NTh_mu33 = my_model->geteps_mu33() * my_model->getNTh33() * NB0;
    NTh_mu34 = my_model->geteps_mu34() * my_model->getNTh34() * NB0;
    NTh_mu35 = my_model->geteps_mu35() * my_model->getNTh35() * NB0;
    NTh_mu36 = my_model->geteps_mu36() * my_model->getNTh36() * NB0;
    NTh_mu37 = my_model->geteps_mu37() * my_model->getNTh37() * NB0;
    NTh_mu38 = my_model->geteps_mu38() * my_model->getNTh38() * NB0;
    NTh_mu39 = my_model->geteps_mu39() * my_model->getNTh39() * NB0;
    NTh_mu40 = my_model->geteps_mu40() * my_model->getNTh40() * NB0;
    
}

/*******************************************************************************
 * Observables                                                                 *
 * ****************************************************************************/

yield::yield(const StandardModel& SM_i, unsigned int bin_i, unsigned int lep_i)
: myObservables(SM_i)
{
    bin = bin_i;
    lep = lep_i;
}

double yield::computeThValue()
{
    updateParameters();
    
    if (lep == 0) {
        /* Electrons */
        if( bin == 	1	 ) return 	0.802991*NTh_el1 + 0.0532621*NTh_el2	;
        if( bin == 	2	 ) return 	0.19701*NTh_el1 + 0.778229*NTh_el2 + 0.0975031*NTh_el3 + 0.000306211*NTh_el4	;
        if( bin == 	3	 ) return 	0.167802*NTh_el2 + 0.716528*NTh_el3 + 0.125572*NTh_el4 + 0.00208173*NTh_el5	;
        if( bin == 	4	 ) return 	0.000709131*NTh_el2 + 0.181824*NTh_el3 + 0.666615*NTh_el4 + 0.149194*NTh_el5 + 0.0056233*NTh_el6	;
        if( bin == 	5	 ) return 	0.00414774*NTh_el3 + 0.198664*NTh_el4 + 0.625661*NTh_el5 + 0.166503*NTh_el6 + 0.0110777*NTh_el7	;
        if( bin == 	6	 ) return 	0.00884944*NTh_el4 + 0.207298*NTh_el5 + 0.592433*NTh_el6 + 0.176813*NTh_el7 + 0.0147825*NTh_el8 + 0.000055254*NTh_el9	;
        if( bin == 	7	 ) return 	0.000180917*NTh_el10 + 0.015773*NTh_el5 + 0.214638*NTh_el6 + 0.575274*NTh_el7 + 0.182743*NTh_el8 + 0.0183472*NTh_el9	;
        if( bin == 	8	 ) return 	0.0168032*NTh_el10 + 0.0206764*NTh_el6 + 0.213028*NTh_el7 + 0.566818*NTh_el8 + 0.185538*NTh_el9	;
        if( bin == 	9	 ) return 	0.186051*NTh_el10 + 0.00012877*NTh_el6 + 0.0235467*NTh_el7 + 0.213985*NTh_el8 + 0.59785*NTh_el9	;
        if( bin == 	10	 ) return 	0.796965*NTh_el10 + 0.000258615*NTh_el7 + 0.0216693*NTh_el8 + 0.198212*NTh_el9	;
        if( bin == 	11	 ) return 	0.961003*NTh_el11 + 0.0240834*NTh_el12 + 0.0000913377*NTh_el13 + 0.0000204712*NTh_el14	;
        if( bin == 	12	 ) return 	0.0377086*NTh_el11 + 0.952367*NTh_el12 + 0.0270755*NTh_el13 + 0.000227174*NTh_el14 + 0.0000444719*NTh_el15	;
        if( bin == 	13	 ) return 	0.000203033*NTh_el11 + 0.0209382*NTh_el12 + 0.948174*NTh_el13 + 0.0410493*NTh_el14 + 0.00142362*NTh_el15 + 0.00029416*NTh_el16 + 0.000244018*NTh_el17 
                                    + 0.000268287*NTh_el18 + 0.0000807101*NTh_el19 + 0.000059061*NTh_el20	;
        if( bin == 	14	 ) return 	0.000329677*NTh_el11 + 0.00113667*NTh_el12 + 0.0232668*NTh_el13 + 0.917762*NTh_el14 + 0.0669207*NTh_el15 + 0.003241*NTh_el16 + 0.000766708*NTh_el17 
                                    + 0.000718644*NTh_el18 + 0.00062037*NTh_el19 + 0.000251983*NTh_el20	;
        if( bin == 	15	 ) return 	0.000206481*NTh_el11 + 0.000778835*NTh_el12 + 0.000825244*NTh_el13 + 0.0398343*NTh_el14 + 0.871278*NTh_el15 + 0.0970173*NTh_el16 + 0.00486292*NTh_el17 
                                    + 0.00119092*NTh_el18 + 0.00086832*NTh_el19 + 0.000498345*NTh_el20	;
        if( bin == 	16	 ) return 	0.000267774*NTh_el11 + 0.000364102*NTh_el12 + 0.00036074*NTh_el13 + 0.000865864*NTh_el14 + 0.0595155*NTh_el15 + 0.816855*NTh_el16 + 0.128864*NTh_el17 
                                    + 0.00603517*NTh_el18 + 0.00106264*NTh_el19 + 0.000484535*NTh_el20	;
        if( bin == 	17	 ) return 	0.0000733931*NTh_el11 + 0.000201131*NTh_el12 + 0.000102942*NTh_el13 + 0.000201603*NTh_el14 + 0.000680179*NTh_el15 + 0.081791*NTh_el16 + 0.757915*NTh_el17 
                                    + 0.163744*NTh_el18 + 0.00712579*NTh_el19 + 0.000868245*NTh_el20	;
        if( bin == 	18	 ) return 	0.000139084*NTh_el11 + 0.0000975769*NTh_el12 + 0.0000697023*NTh_el13 + 0.0000288368*NTh_el14 + 0.000116107*NTh_el15 + 0.000711233*NTh_el16 + 0.106257*NTh_el17 
                                    + 0.697991*NTh_el18 + 0.195863*NTh_el19 + 0.00822443*NTh_el20	;
        if( bin == 	19	 ) return 	0.0000691141*NTh_el11 + 0.0000335693*NTh_el12 + 0.00003327*NTh_el13 + 9.98159e-6*NTh_el14 + 0.0000234014*NTh_el15 + 0.0000827013*NTh_el16 + 0.0010469*NTh_el17 
                                    + 0.128374*NTh_el18 + 0.656978*NTh_el19 + 0.212159*NTh_el20	;
        if( bin == 	20	 ) return 	7.3892e-6*NTh_el16 + 0.0000457812*NTh_el17 + 0.00167462*NTh_el18 + 0.137399*NTh_el19 + 0.777459*NTh_el20	;
        if( bin == 	21	 ) return 	0.91759*NTh_el21 + 0.0767432*NTh_el22 + 0.000424463*NTh_el23 + 0.0000492475*NTh_el24 + 0.0000107476*NTh_el25	;
        if( bin == 	22	 ) return 	0.081953*NTh_el21 + 0.806392*NTh_el22 + 0.0954983*NTh_el23 + 0.00114966*NTh_el24 + 0.000116596*NTh_el25 + 0.0000285115*NTh_el26 + 0.0000314474*NTh_el27	;
        if( bin == 	23	 ) return 	0.000418333*NTh_el21 + 0.11541*NTh_el22 + 0.760686*NTh_el23 + 0.100532*NTh_el24 + 0.00179467*NTh_el25 + 0.0001291*NTh_el26 + 0.0000261677*NTh_el27 
                                    + 0.0000117588*NTh_el28	;
        if( bin == 	24	 ) return 	0.0000314719*NTh_el21 + 0.00132309*NTh_el22 + 0.140818*NTh_el23 + 0.73472*NTh_el24 + 0.105448*NTh_el25 + 0.00183491*NTh_el26 + 0.0000783773*NTh_el27 
                                    + 0.0000252645*NTh_el28	;
        if( bin == 	25	 ) return 	9.09882e-6*NTh_el21 + 0.000093313*NTh_el22 + 0.00244013*NTh_el23 + 0.160134*NTh_el24 + 0.718927*NTh_el25 + 0.100356*NTh_el26 + 0.00149884*NTh_el27 
                                    + 0.000100269*NTh_el28 + 0.0000135146*NTh_el30	;
        if( bin == 	26	 ) return 	0.000018753*NTh_el22 + 0.000117918*NTh_el23 + 0.00324661*NTh_el24 + 0.170236*NTh_el25 + 0.721984*NTh_el26 + 0.0929875*NTh_el27 + 0.00114381*NTh_el28 
                                    + 0.0000501037*NTh_el29 + 0.0000135374*NTh_el30	;
        if( bin == 	27	 ) return 	0.0000133146*NTh_el22 + 0.0000175262*NTh_el23 + 0.00017076*NTh_el24 + 0.00336244*NTh_el25 + 0.173274*NTh_el26 + 0.738422*NTh_el27 + 0.0798772*NTh_el28 
                                    + 0.000576527*NTh_el29 + 0.0000245413*NTh_el30	;
        if( bin == 	28	 ) return 	0.000094821*NTh_el25 + 0.002244*NTh_el26 + 0.165511*NTh_el27 + 0.771047*NTh_el28 + 0.0723962*NTh_el29 + 0.000251953*NTh_el30	;
        if( bin == 	29	 ) return 	5.16936e-6*NTh_el22 + 9.91283e-6*NTh_el25 + 0.000126646*NTh_el26 + 0.0014056*NTh_el27 + 0.147291*NTh_el28 + 0.818519*NTh_el29 + 0.0638037*NTh_el30	;
        if( bin == 	30	 ) return 	0.0000236557*NTh_el26 + 0.0000391345*NTh_el27 + 0.000502842*NTh_el28 + 0.108456*NTh_el29 + 0.935892*NTh_el30	;
        if( bin == 	31	 ) return 	0.659284*NTh_el31 + 0.128762*NTh_el32 + 0.0112591*NTh_el33 + 0.00346653*NTh_el34 + 0.00212133*NTh_el35 + 0.00202133*NTh_el36 + 0.00180472*NTh_el37 
                                    + 0.00380483*NTh_el38 + 0.0128713*NTh_el39 + 0.143543*NTh_el40	;
        if( bin == 	32	 ) return 	0.150595*NTh_el31 + 0.690543*NTh_el32 + 0.131953*NTh_el33 + 0.0122789*NTh_el34 + 0.00438426*NTh_el35 + 0.00237985*NTh_el36 + 0.00195711*NTh_el37 + 0.00209865*NTh_el38 
                                    + 0.00400873*NTh_el39 + 0.0156466*NTh_el40	;
        if( bin == 	33	 ) return 	0.0151716*NTh_el31 + 0.141295*NTh_el32 + 0.697204*NTh_el33 + 0.1475*NTh_el34 + 0.0156349*NTh_el35 + 0.00471751*NTh_el36 + 0.00224275*NTh_el37 + 0.00169807*NTh_el38 
                                    + 0.00222423*NTh_el39 + 0.00469336*NTh_el40	;
        if( bin == 	34	 ) return 	0.00456477*NTh_el31 + 0.0119882*NTh_el32 + 0.133802*NTh_el33 + 0.671478*NTh_el34 + 0.161832*NTh_el35 + 0.017978*NTh_el36 + 0.00480714*NTh_el37 + 0.00211815*NTh_el38 
                                    + 0.00169875*NTh_el39 + 0.00238015*NTh_el40	;
        if( bin == 	35	 ) return 	0.00236109*NTh_el31 + 0.00385243*NTh_el32 + 0.0125053*NTh_el33 + 0.139761*NTh_el34 + 0.633835*NTh_el35 + 0.155097*NTh_el36 + 0.0155227*NTh_el37 + 0.00388762*NTh_el38 
                                    + 0.00234252*NTh_el39 + 0.00237432*NTh_el40	;
        if( bin == 	36	 ) return 	0.0021427*NTh_el31 + 0.00201282*NTh_el32 + 0.00390397*NTh_el33 + 0.015214*NTh_el34 + 0.155081*NTh_el35 + 0.632902*NTh_el36 + 0.141172*NTh_el37 + 0.0126291*NTh_el38 
                                    + 0.00362882*NTh_el39 + 0.00252922*NTh_el40	;
        if( bin == 	37	 ) return 	0.00232449*NTh_el31 + 0.00179819*NTh_el32 + 0.00194114*NTh_el33 + 0.00442856*NTh_el34 + 0.0180315*NTh_el35 + 0.162569*NTh_el36 + 0.669582*NTh_el37 + 0.13556*NTh_el38 
                                    + 0.0121144*NTh_el39 + 0.00442663*NTh_el40	;
        if( bin == 	38	 ) return 	0.00506067*NTh_el31 + 0.00231602*NTh_el32 + 0.00175052*NTh_el33 + 0.00235895*NTh_el34 + 0.00484714*NTh_el35 + 0.0154792*NTh_el36 + 0.146872*NTh_el37 
                                    + 0.694777*NTh_el38 + 0.139761*NTh_el39 + 0.0147465*NTh_el40	;
        if( bin == 	39	 ) return 	0.0161025*NTh_el31 + 0.0042545*NTh_el32 + 0.00219493*NTh_el33 + 0.00161283*NTh_el34 + 0.00230355*NTh_el35 + 0.00441921*NTh_el36 + 0.0126253*NTh_el37 
                                    + 0.131758*NTh_el38 + 0.69109*NTh_el39 + 0.150449*NTh_el40	;
        if( bin == 	40	 ) return 	0.142394*NTh_el31 + 0.0131796*NTh_el32 + 0.00348883*NTh_el33 + 0.00190328*NTh_el34 + 0.00193066*NTh_el35 + 0.00243861*NTh_el36 + 0.00341538*NTh_el37 
                                    + 0.0116714*NTh_el38 + 0.130262*NTh_el39 + 0.659211*NTh_el40	;
                                
    } else if (lep == 1) {
        /* Muons */                            
        if( bin ==	1	 ) return 	0.812294*NTh_mu1 + 0.051097*NTh_mu2	;
        if( bin ==	2	 ) return 	0.187706*NTh_mu1 + 0.784487*NTh_mu2 + 0.09579*NTh_mu3 + 0.000380275*NTh_mu4	;
        if( bin ==	3	 ) return 	0.163544*NTh_mu2 + 0.728413*NTh_mu3 + 0.125627*NTh_mu4 + 0.00211218*NTh_mu5	;
        if( bin ==	4	 ) return 	0.000871361*NTh_mu2 + 0.172069*NTh_mu3 + 0.676101*NTh_mu4 + 0.149053*NTh_mu5 + 0.00552913*NTh_mu6	;
        if( bin ==	5	 ) return 	0.00372656*NTh_mu3 + 0.189575*NTh_mu4 + 0.631316*NTh_mu5 + 0.165254*NTh_mu6 + 0.0103867*NTh_mu7	;
        if( bin ==	6	 ) return 	0.00831545*NTh_mu4 + 0.203062*NTh_mu5 + 0.599692*NTh_mu6 + 0.180545*NTh_mu7 + 0.0157807*NTh_mu8 + 0.000134423*NTh_mu9	;
        if( bin ==	7	 ) return 	0.00023294*NTh_mu10 + 0.0144418*NTh_mu5 + 0.209272*NTh_mu6 + 0.578007*NTh_mu7 + 0.187363*NTh_mu8 + 0.0189991*NTh_mu9	;
        if( bin ==	8	 ) return 	0.0173943*NTh_mu10 + 0.0000154696*NTh_mu5 + 0.020154*NTh_mu6 + 0.208588*NTh_mu7 + 0.572523*NTh_mu8 + 0.194663*NTh_mu9	;
        if( bin ==	9	 ) return 	0.194702*NTh_mu10 + 0.000100772*NTh_mu6 + 0.0222215*NTh_mu7 + 0.205406*NTh_mu8 + 0.59996*NTh_mu9	;
        if( bin ==	10	 ) return 	0.787672*NTh_mu10 + 0.000257482*NTh_mu7 + 0.0189325*NTh_mu8 + 0.186245*NTh_mu9	;
        if( bin ==	11	 ) return 	0.959368*NTh_mu11 + 0.0218653*NTh_mu12 + 0.0000909629*NTh_mu13 + 0.000042606*NTh_mu14 + 0.0000230231*NTh_mu15 + 0.0000136888*NTh_mu16 + 6.25321e-6*NTh_mu17 
                                    + 6.28088e-6*NTh_mu18	;
        if( bin ==	12	 ) return 	0.0386762*NTh_mu11 + 0.955413*NTh_mu12 + 0.0124162*NTh_mu13 + 0.00028072*NTh_mu14 + 0.0000769526*NTh_mu15 + 0.0000671443*NTh_mu16 + 0.0000127949*NTh_mu17 
                                    + 6.59171e-6*NTh_mu18 + 6.66824e-6*NTh_mu19 + 0.0000129876*NTh_mu20	;
        if( bin ==	13	 ) return 	0.000451486*NTh_mu11 + 0.021081*NTh_mu12 + 0.960377*NTh_mu13 + 0.0215424*NTh_mu14 + 0.000641634*NTh_mu15 + 0.000159624*NTh_mu16 + 0.0000822327*NTh_mu17 
                                    + 0.0000641656*NTh_mu18 + 0.0000256898*NTh_mu19 + 7.02485e-6*NTh_mu20	;
        if( bin ==	14	 ) return 	0.000946561*NTh_mu11 + 0.000530597*NTh_mu12 + 0.0260152*NTh_mu13 + 0.930952*NTh_mu14 + 0.0428051*NTh_mu15 + 0.00114896*NTh_mu16 + 0.000338395*NTh_mu17 
                                    + 0.000157136*NTh_mu18 + 0.0000660587*NTh_mu19 + 0.0000438818*NTh_mu20	;
        if( bin ==	15	 ) return 	0.000275365*NTh_mu11 + 0.000419757*NTh_mu12 + 0.000587181*NTh_mu13 + 0.0466513*NTh_mu14 + 0.888892*NTh_mu15 + 0.0704603*NTh_mu16 + 0.00168775*NTh_mu17 
                                    + 0.000499719*NTh_mu18 + 0.000198589*NTh_mu19 + 0.000117994*NTh_mu20	;
        if( bin ==	16	 ) return 	0.000068381*NTh_mu11 + 0.000535734*NTh_mu12 + 0.000327435*NTh_mu13 + 0.000378237*NTh_mu14 + 0.0672379*NTh_mu15 + 0.83655*NTh_mu16 + 0.102907*NTh_mu17 
                                    + 0.0018941*NTh_mu18 + 0.000545021*NTh_mu19 + 0.000206701*NTh_mu20	;
        if( bin ==	17	 ) return 	0.000214193*NTh_mu11 + 0.000114941*NTh_mu12 + 0.000151322*NTh_mu13 + 0.0000636441*NTh_mu14 + 0.000216835*NTh_mu15 + 0.0913982*NTh_mu16 + 0.777583*NTh_mu17 
                                    + 0.13831*NTh_mu18 + 0.00254872*NTh_mu19 + 0.000392724*NTh_mu20	;
        if( bin ==	18	 ) return 	0.0000399717*NTh_mu12 + 0.0000352542*NTh_mu13 + 0.0000452469*NTh_mu14 + 0.0000882906*NTh_mu15 + 0.000143375*NTh_mu16 + 0.116597*NTh_mu17 + 0.714778*NTh_mu18 
                                    + 0.173655*NTh_mu19 + 0.00355823*NTh_mu20	;
        if( bin ==	19	 ) return 	0.0000442285*NTh_mu14 + 0.0000161043*NTh_mu15 + 0.0000476077*NTh_mu16 + 0.000767846*NTh_mu17 + 0.142364*NTh_mu18 + 0.672049*NTh_mu19 + 0.192821*NTh_mu20	;
        if( bin ==	20	 ) return 	0.0000146803*NTh_mu16 + 0.0000199504*NTh_mu17 + 0.00192139*NTh_mu18 + 0.150904*NTh_mu19 + 0.80284*NTh_mu20	;
        if( bin ==	21	 ) return 	0.917647*NTh_mu21 + 0.0765696*NTh_mu22 + 0.000433922*NTh_mu23 + 8.36464e-6*NTh_mu24 + 0.000035106*NTh_mu25 + 0.0000130072*NTh_mu26	;
        if( bin ==	22	 ) return 	0.0819119*NTh_mu21 + 0.80525*NTh_mu22 + 0.0914561*NTh_mu23 + 0.00111294*NTh_mu24 + 0.000104889*NTh_mu25 + 0.0000128173*NTh_mu26 + 0.0000416046*NTh_mu27	;
        if( bin ==	23	 ) return 	0.000408575*NTh_mu21 + 0.117018*NTh_mu22 + 0.763328*NTh_mu23 + 0.100584*NTh_mu24 + 0.00172155*NTh_mu25 + 0.0000961235*NTh_mu26 + 0.0000427242*NTh_mu27	;
        if( bin ==	24	 ) return 	0.0000126049*NTh_mu21 + 0.00105064*NTh_mu22 + 0.142086*NTh_mu23 + 0.735355*NTh_mu24 + 0.102517*NTh_mu25 + 0.00163492*NTh_mu26 + 0.0000539479*NTh_mu27	;
        if( bin ==	25	 ) return 	9.0068e-6*NTh_mu21 + 0.0000753816*NTh_mu22 + 0.00253649*NTh_mu23 + 0.159173*NTh_mu24 + 0.722824*NTh_mu25 + 0.0983917*NTh_mu26 + 0.00140037*NTh_mu27 
                                    + 0.0000609626*NTh_mu28 + 0.000022774*NTh_mu29	;
        if( bin ==	26	 ) return 	5.00284e-6*NTh_mu21 + 0.0000240792*NTh_mu22 + 0.00014166*NTh_mu23 + 0.00356774*NTh_mu24 + 0.168973*NTh_mu25 + 0.72595*NTh_mu26 + 0.0911426*NTh_mu27 
                                    + 0.0010441*NTh_mu28 + 0.0000878141*NTh_mu29 + 0.0000111643*NTh_mu30	;
        if( bin ==	27	 ) return 	0.000164966*NTh_mu24 + 0.00370927*NTh_mu25 + 0.171588*NTh_mu26 + 0.745227*NTh_mu27 + 0.0824643*NTh_mu28 + 0.000552797*NTh_mu29 + 0.0000405869*NTh_mu30	;
        if( bin ==	28	 ) return 	4.71831e-6*NTh_mu21 + 0.0000136297*NTh_mu22 + 9.51954e-6*NTh_mu23 + 0.0000237345*NTh_mu24 + 0.000104003*NTh_mu25 + 0.00223118*NTh_mu26 + 0.160612*NTh_mu27 
                                    + 0.771348*NTh_mu28 + 0.0743902*NTh_mu29 + 0.000272152*NTh_mu30	;
        if( bin ==	29	 ) return 	0.0000110283*NTh_mu24 + 0.0000106745*NTh_mu25 + 0.000054637*NTh_mu26 + 0.00147926*NTh_mu27 + 0.144596*NTh_mu28 + 0.817465*NTh_mu29 + 0.0656276*NTh_mu30	;
        if( bin ==	30	 ) return 	8.32048e-6*NTh_mu23 + 0.0000265477*NTh_mu26 + 0.000486672*NTh_mu28 + 0.107481*NTh_mu29 + 0.934049*NTh_mu30	;
        if( bin ==	31	 ) return 	0.652842*NTh_mu31 + 0.129061*NTh_mu32 + 0.0117906*NTh_mu33 + 0.00367004*NTh_mu34 + 0.00260029*NTh_mu35 + 0.00223658*NTh_mu36 + 0.00212079*NTh_mu37 
                                    + 0.00384164*NTh_mu38 + 0.013946*NTh_mu39 + 0.144058*NTh_mu40	;
        if( bin ==	32	 ) return 	0.152415*NTh_mu31 + 0.686379*NTh_mu32 + 0.130395*NTh_mu33 + 0.0130694*NTh_mu34 + 0.00417151*NTh_mu35 + 0.00268559*NTh_mu36 + 0.00203043*NTh_mu37 + 0.00197033*NTh_mu38 
                                    + 0.00458526*NTh_mu39 + 0.0172384*NTh_mu40	;
        if( bin ==	33	 ) return 	0.0161868*NTh_mu31 + 0.142953*NTh_mu32 + 0.692984*NTh_mu33 + 0.147203*NTh_mu34 + 0.0161388*NTh_mu35 + 0.00554328*NTh_mu36 + 0.00272085*NTh_mu37 + 0.00216166*NTh_mu38 
                                    + 0.00260937*NTh_mu39 + 0.00498027*NTh_mu40	;
        if( bin ==	34	 ) return 	0.00484126*NTh_mu31 + 0.012521*NTh_mu32 + 0.137637*NTh_mu33 + 0.667251*NTh_mu34 + 0.160351*NTh_mu35 + 0.017917*NTh_mu36 + 0.00465027*NTh_mu37 + 0.00221477*NTh_mu38 
                                    + 0.0022906*NTh_mu39 + 0.00293341*NTh_mu40	;
        if( bin ==	35	 ) return 	0.00255707*NTh_mu31 + 0.00393919*NTh_mu32 + 0.0131617*NTh_mu33 + 0.141935*NTh_mu34 + 0.629642*NTh_mu35 + 0.156299*NTh_mu36 + 0.0154749*NTh_mu37 + 0.00430164*NTh_mu38 
                                    + 0.00200062*NTh_mu39 + 0.00227798*NTh_mu40	;
        if( bin ==	36	 ) return 	0.00206208*NTh_mu31 + 0.00237133*NTh_mu32 + 0.00395869*NTh_mu33 + 0.0153803*NTh_mu34 + 0.15829*NTh_mu35 + 0.628708*NTh_mu36 + 0.141961*NTh_mu37 + 0.0132805*NTh_mu38 
                                    + 0.00440095*NTh_mu39 + 0.00263063*NTh_mu40	;
        if( bin ==	37	 ) return 	0.00279412*NTh_mu31 + 0.00189659*NTh_mu32 + 0.00237625*NTh_mu33 + 0.00471752*NTh_mu34 + 0.0184376*NTh_mu35 + 0.163953*NTh_mu36 + 0.666797*NTh_mu37 + 0.137763*NTh_mu38 
                                    + 0.0134056*NTh_mu39 + 0.00466813*NTh_mu40	;
        if( bin ==	38	 ) return 	0.00485483*NTh_mu31 + 0.00250893*NTh_mu32 + 0.0019064*NTh_mu33 + 0.00254938*NTh_mu34 + 0.0056372*NTh_mu35 + 0.0156588*NTh_mu36 + 0.147624*NTh_mu37 + 0.691809*NTh_mu38 
                                    + 0.141293*NTh_mu39 + 0.0155471*NTh_mu40	;
        if( bin ==	39	 ) return 	0.0171573*NTh_mu31 + 0.00441292*NTh_mu32 + 0.00193832*NTh_mu33 + 0.00201422*NTh_mu34 + 0.00251993*NTh_mu35 + 0.00466411*NTh_mu36 + 0.0129616*NTh_mu37 
                                    + 0.130737*NTh_mu38  + 0.685974*NTh_mu39 + 0.151913*NTh_mu40	;
        if( bin ==	40	 ) return 	0.144291*NTh_mu31 + 0.0139561*NTh_mu32 + 0.00385367*NTh_mu33 + 0.00220979*NTh_mu34 + 0.00221164*NTh_mu35 + 0.00233666*NTh_mu36 + 0.00366067*NTh_mu37 
                                    + 0.0119213*NTh_mu38 + 0.129496*NTh_mu39 + 0.653753*NTh_mu40	;
    } else {
        std::cout << "Bin not defined" << std::endl;
        return (EXIT_FAILURE);
    }
    
    return 0;
}
