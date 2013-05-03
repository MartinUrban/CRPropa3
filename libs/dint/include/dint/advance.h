#ifndef _ADVANCE_H_
#define _ADVANCE_H_

#include <math.h>
#include "dint/spectrum.h"
#include "dint/rate.h"
#include "dint/cvector.h"
#include "dint/const.h"
#include "dint/deriv.h"
#include "dint/error.h"

const double EPSILON = 1.e-18;

void ComputeRedshifts(const int sourceTypeSwitch, const double leftRedshift,
		      double* pDeltaRedshift, double* pRightRedshift,
		      double* pCentralRedshift, int* pLastIndex);
void AdvanceNucleonStep(const int sourceTypeSwitch,
			const int PPPSwitch, const int NPPSwitch,
			const int neutronDecaySwitch,
			const int neutrinoNeutrinoSwitch,
			const double smallDistanceStep,
			const double evolutionFactor,
			const double convergeParameter,
			const double bkgFactor,
			const Spectrum* pQ_0, 
			const DiffRate* elNeutProtonRate,
			const DiffRate* muonNeutProtonRate,
			const DiffRate* tauNeutProtonRate,
			const TotalRate* protonTotalRate,
			const TotalRate* neutronTotalRate,
			const TotalRate* neutronDecayRate,
			const DiffRate* protonScatRate,
			const DiffRate* protonNeutronRate,
			const DiffRate* neutronProtonRate,
			const DiffRate* neutronDecayProtonRate,
			const dCVector* protonContinuousLoss,
			const dCVector* deltaG, const Spectrum* pSpectrum, 
			Spectrum* pSpectrumNew);
void AdvanceNeutrinoStep(const int sourceTypeSwitch,
			 const int neutrinoNeutrinoSwitch,
			 const int PPPSwitch, const int neutronDecaySwitch,
			 const int nucleonToSecondarySwitch,
			 const double smallDistanceStep,
			 const double evolutionFactor,
			 const double convergeParameter,
			 const double bkgFactor,
			 const Spectrum* pQ_0, 
			 const DiffRate* protonMuonNeutrinoRate,
			 const DiffRate* neutronAntiMuonNeutrinoRate,
			 const DiffRate* protonAntiMuonNeutrinoRate,
			 const DiffRate* neutronMuonNeutrinoRate,
			 const DiffRate* protonElectronNeutrinoRate,
			 const DiffRate* neutronAntiElectronNeutrinoRate,
			 const DiffRate* protonAntiElectronNeutrinoRate,
			 const DiffRate* neutronDecayElectronRate,
			 const TotalRate* elNeutTotalRate,
			 const TotalRate* muonNeutTotalRate,
			 const TotalRate* tauNeutTotalRate,
			 const DiffRate* elNeutScatRate,
			 const DiffRate* elNeutMuonNeutRate,
			 const DiffRate* elNeutTauNeutRate,
			 const DiffRate* muonNeutElNeutRate,
			 const DiffRate* muonNeutScatRate,
			 const DiffRate* muonNeutTauNeutRate,
			 const DiffRate* tauNeutElNeutRate,
			 const DiffRate* tauNeutMuonNeutRate,
			 const DiffRate* tauNeutScatRate,
			 const Spectrum* pSpectrum, Spectrum* pSpectrumNew);
void AdvanceNucNeutStep(const int sourceTypeSwitch, 
			const int PPPSwitch, const int NPPSwitch,
			const int neutronDecaySwitch,
			const int nucleonToSecondarySwitch,
			const int neutrinoNeutrinoSwitch,
			const double smallDistanceStep,
			const double evolutionFactor,
			const double convergeParameter,
			const double bkgFactor,
			const Spectrum* pQ_0,
			const DiffRate* elNeutProtonRate,
			const DiffRate* muonNeutProtonRate,
			const DiffRate* tauNeutProtonRate,
			const TotalRate* protonTotalRate,
			const TotalRate* neutronTotalRate,
			const TotalRate* neutronDecayRate,
			const DiffRate* protonScatRate,
			const DiffRate* protonNeutronRate,
			const DiffRate* neutronProtonRate,
			const DiffRate* neutronDecayProtonRate,
			const DiffRate* protonMuonNeutrinoRate,
			const DiffRate* neutronAntiMuonNeutrinoRate,
			const DiffRate* protonAntiMuonNeutrinoRate,
			const DiffRate* neutronMuonNeutrinoRate,
			const DiffRate* protonElectronNeutrinoRate,
			const DiffRate* neutronAntiElectronNeutrinoRate,
			const DiffRate* protonAntiElectronNeutrinoRate,
			const DiffRate* neutronDecayElectronRate,
			const TotalRate* elNeutTotalRate,
			const TotalRate* muonNeutTotalRate,
			const TotalRate* tauNeutTotalRate,
			const DiffRate* elNeutScatRate,
			const DiffRate* elNeutMuonNeutRate,
			const DiffRate* elNeutTauNeutRate,
			const DiffRate* muonNeutElNeutRate,
			const DiffRate* muonNeutScatRate,
			const DiffRate* muonNeutTauNeutRate,
			const DiffRate* tauNeutElNeutRate,
			const DiffRate* tauNeutMuonNeutRate,
			const DiffRate* tauNeutScatRate,
			const dCVector* protonContinuousLoss,
			const dCVector* deltaG, const Spectrum* pSpectrum,
			Spectrum* pSpectrumNew);
void AdvanceEMStep(const int sourceTypeSwitch, const int PPSwitch,
		   const int ICSSwitch, const int TPPSwitch, 
		   const int DPPSwitch, const int synchrotronSwitch,
		   const int PPPSwitch, const int NPPSwitch, 
		   const int neutronDecaySwitch,
		   const int nucleonToSecondarySwitch,
		   const int neutrinoNeutrinoSwitch,
		   const double smallDistanceStep, 
		   const double evolutionFactor, 
		   const double convergeParameter, const double bkgFactor,
		   const Spectrum* pQ_0,
		   const DiffRate* photonLeptonRate, 
		   const DiffRate* protonElectronRate,
		   const DiffRate* neutronPositronRate,
		   const DiffRate* protonPositronRate,
		   const DiffRate* neutronElectronRate,
		   const DiffRate* neutronDecayElectronRate,
		   const DiffRate* elNeutElectronRate,
		   const DiffRate* muonNeutElectronRate,
		   const DiffRate* tauNeutElectronRate,
		   const DiffRate* protonPhotonRate,
		   const DiffRate* elNeutPhotonRate,
		   const DiffRate* muonNeutPhotonRate,
		   const DiffRate* tauNeutPhotonRate,
		   const TotalRate* leptonTotalRate, 
		   const DiffRate* leptonScatRate,
		   const DiffRate* leptonExchRate, 
		   const dCVector* continuousLoss, const dCVector* deltaG,
		   const TotalRate* photonTotalRate,
		   const DiffRate* leptonPhotonRate, 
		   const DiffRate* syncRate, const Spectrum* pSpectrum, 
		   Spectrum* pSpectrumNew);
void RedshiftDown(const int lastIndex, const double redshiftRatio,
                  const dCVector* pEnergy, Spectrum* pSpectrum, 
		  Spectrum* pSpectrumNew);
void RedshiftBinsDown(const int lastIndex, const double evolutionFactor, 
                      const dCVector* pEnergy, double* pSpectrum, 
		      double* pSpectrumNew);
void GetExternalFlux(const int sourceTypeSwitch, const double evolutionFactor,
		     const PARTICLE particle, const Spectrum* pQ_0,
		     Spectrum* pInfluxExt);
void ImplicitEquation(const double smallDistanceStep, 
		      const PARTICLE particle, const Spectrum* pInflux, 
		      const Spectrum* pInflux0, const Spectrum* pInfluxExt, 
		      const Spectrum* pOutflux, const Spectrum* pSpectrum, 
		      Spectrum* pSpectrumNew);
void ExplicitEquation(const double smallDistanceStep, 
		      const PARTICLE particle, const Spectrum* pInflux,
		      const Spectrum* pInflux0, const Spectrum* pInfluxExt,
		      const Spectrum* pOutflux, const Spectrum* pSpectrum,
		      const Spectrum* pSpectrumNew);
void ComputeChange(const Spectrum* pSpectrumTemp, 
		   const Spectrum* pSpectrumNew, 
		   const PARTICLE particle, double* pChangeMax);

#endif