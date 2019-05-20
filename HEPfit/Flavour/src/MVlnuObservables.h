/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MVlnuObservables.h
 * Author: mauro_87
 *
 * Created on 19 maggio 2018, 20.51
 */

#ifndef MVLNUOBSERVABLES_H
#define MVLNUOBSERVABLES_H

#include "QCD.h"
#include "ThObservable.h"

class Gammaw_MVlnu : public ThObservable{
public:
    
    /**
     * @brief Constructor.
     * @param[in] SM_i a reference to an object of type StandardModel
     * @param[in] meson_i initial meson of the decay
     * @param[in] vector_i final vector meson of the decay
     * @param[in] lep_i final leptons of the decay
     */
    Gammaw_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_1, QCD::lepton lep_2);
    
    /**
    * @brief The binned observable @f$<\Gamma><w>@f$ in @f$M \to V l \nu@f$.
    * @return @f$<\Gamma><w>@f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep1; /**< Final leptons type. */
    QCD::lepton lep2; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class RDstar_MVlnu : public ThObservable{
public:
    
    /**
     * @brief Constructor.
     * @param[in] SM_i a reference to an object of type StandardModel
     * @param[in] meson_i initial meson of the decay
     * @param[in] vector_i final vector meson of the decay
     * @param[in] lep_i final leptons of the decay
     */
    RDstar_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_1, QCD::lepton lep_2, QCD::lepton lep_3);
    
    /**
    * @brief The binned observable @f$R_{D^{*}}@f$ in @f$M \to V l \nu@f$.
    * @return @f$R_{D^{*}}@f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep1; /**< Final leptons type. */
    QCD::lepton lep2; /**< Final leptons type. */
    QCD::lepton lep3; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class Gammacl_MVlnu : public ThObservable{
public:
    
    /**
     * @brief Constructor.
     * @param[in] SM_i a reference to an object of type StandardModel
     * @param[in] meson_i initial meson of the decay
     * @param[in] vector_i final vector meson of the decay
     * @param[in] lep_i final leptons of the decay
     */
    Gammacl_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_1, QCD::lepton lep_2);
    
    /**
    * @brief The binned observable @f$<\Gamma><cl>@f$ in @f$M \to V l \nu@f$.
    * @return @f$<\Gamma><cl>@f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep1; /**< Final leptons type. */
    QCD::lepton lep2; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class GammacV_MVlnu : public ThObservable{
public:
    
    /**
     * @brief Constructor.
     * @param[in] SM_i a reference to an object of type StandardModel
     * @param[in] meson_i initial meson of the decay
     * @param[in] vector_i final vector meson of the decay
     * @param[in] lep_i final leptons of the decay
     */
    GammacV_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_1, QCD::lepton lep_2);
    
    /**
    * @brief The binned observable @f$<\Gamma><cV>@f$ in @f$M \to V l \nu@f$.
    * @return @f$<\Gamma><cV>@f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep1; /**< Final leptons type. */
    QCD::lepton lep2; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class Gammachi_MVlnu : public ThObservable{
public:
    
    /**
     * @brief Constructor.
     * @param[in] SM_i a reference to an object of type StandardModel
     * @param[in] meson_i initial meson of the decay
     * @param[in] vector_i final vector meson of the decay
     * @param[in] lep_i final leptons of the decay
     */
    Gammachi_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_1, QCD::lepton lep_2);
    
    /**
    * @brief The binned observable @f$<\Gamma><chi>@f$ in @f$M \to V l \nu@f$.
    * @return @f$<\Gamma><chi>@f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep1; /**< Final leptons type. */
    QCD::lepton lep2; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FL_MVlnu : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FL_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
     
    /**
    * @brief FL polarization fraction @f$M \to V l \nu@f$.
    * @return @f$ F_L @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class UnitarityV_MVlnu : public ThObservable{
public:
    
    /**
     * @brief Constructor.
     * @param[in] SM_i a reference to an object of type StandardModel
     * @param[in] meson_i initial meson of the decay
     * @param[in] vector_i final vector meson of the decay
     * @param[in] lep_i final leptons of the decay
     */
    UnitarityV_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief Vectorial unitarity constraint for @f$M \to V l \nu@f$.
    * @return @f$ \Sum_i ag_i^2 @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};
 
class UnitarityA_MVlnu : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    UnitarityA_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief Axial unitarity constraint for @f$M \to V l \nu@f$.
    * @return @f$ \Sum_i (af_i^2 + aF1_i^2) @f$
    */
    double computeThValue ();
     
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */

};

class UnitarityP_MVlnu : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    UnitarityP_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief Axial unitarity constraint for @f$M \to V l \nu@f$.
    * @return @f$ \Sum_i aF2_i^2 @f$
    */
    double computeThValue ();
     
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */

};

class FF_hA1atw1 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_hA1atw1(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief A1 form factor at maximum lepton-neutrino invariant mass.
    * @return @f$ h_{A1}((MM-MV)^2) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_hV : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_hV(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ h_{V}(w) @f$.
    * @return @f$ h_{V}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_hA1 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_hA1(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ h_{A1}(w) @f$.
    * @return @f$ h_{A1}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_hA2 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_hA2(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ h_{A2}(w) @f$.
    * @return @f$ h_{A2}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_hA3 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_hA3(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ h_{A3}(w) @f$.
    * @return @f$ h_{A3}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_R1 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_R1(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ R_{1}(w) @f$.
    * @return @f$ R_{1}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_R2 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_R2(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ R_{2}(w) @f$.
    * @return @f$ R_{2}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class FF_R0 : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    FF_R0(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
    
    /**
    * @brief @f$ R_{0}(w) @f$.
    * @return @f$ R_{0}(w) @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

class UnitarityV_D_Dst : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] pseudoscalar_i final vector meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    UnitarityV_D_Dst(const StandardModel& SM_i, QCD::meson meson_i,  QCD::meson vector_i, QCD::meson pseudoscalar_i, QCD::lepton lep_i);
    
    /**
    * @brief Combined unitarity constraint for @f$M \to V l \nu@f$.
    * @return @f$ \Sum_i aF2_i^2 @f$
    */
    double computeThValue ();
     
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson pseudoscalarM; /**< Final pseudoscalar meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */

};

class Plep_MVlnu : public ThObservable{
public:
     
    /**
    * @brief Constructor.
    * @param[in] SM_i a reference to an object of type StandardModel
    * @param[in] meson_i initial meson of the decay
    * @param[in] vector_i final vector meson of the decay
    * @param[in] lep_i final leptons of the decay
    */
    Plep_MVlnu(const StandardModel& SM_i, QCD::meson meson_i, QCD::meson vector_i, QCD::lepton lep_i);
     
    /**
    * @brief Binned lepton helicity asymmetry \f$ P_{\ell} = (<G_{+}>  - <G_{-}>) / (<G_{+}> + <G_{-}>) \f$ 
    * @return @f$ P_{\ell} @f$
    */
    double computeThValue ();
    
private:
    QCD::lepton lep; /**< Final leptons type. */
    QCD::meson meson; /**< Initial meson type. */
    QCD::meson vectorM; /**< Final vector meson type. */
    
};

#endif /* MVLNUOBSERVABLES_H */

