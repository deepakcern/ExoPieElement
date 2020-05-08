#ifndef __JETSELECTOR_H__
#define __JETSELECTOR_H__

/*
jetSelector
Optimal Usage: patJets

Shin-Shan Eiko Yu,
National Central University

*/
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "DataFormats/Math/interface/LorentzVector.h"
#include "FWCore/Framework/interface/ESHandle.h"

// for making histograms
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"



class jetSelector{

 public:
  //jetSelector(const edm::ParameterSet& cfg);
  jetSelector();
  //std::map<std::string, bool> MergedJetCut(const pat::Jet& jet);
  std::map<std::string, bool> LooseJetCut_2016(const pat::Jet& jet);
  std::map<std::string, bool> TightJetCut_2016(const pat::Jet& jet);
  std::map<std::string, bool> TightJetCut_2017(const pat::Jet& jet);
  std::map<std::string, bool> TightJetCut_2018(const pat::Jet& jet);
  ~jetSelector(){}

};

#endif
