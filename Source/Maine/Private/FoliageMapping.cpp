#include "FoliageMapping.h"

FFoliageMapping::FFoliageMapping() {
    this->FoliageBlueprintClass = NULL;
    this->DefaultState = EFoliageInstanceState::Added;
    this->CanAttackToSwap = false;
    this->DisplaceLevel = EFoliageSwapLevel::Always;
    this->PlayerSwapDistance = 0.00f;
    this->DisplaceAudioLoop = NULL;
    this->DisplaceAudioAttenuation = NULL;
    this->SpringStrength = 0.00f;
    this->SpringDecay = 0.00f;
    this->bAnimate = false;
    this->bActiveInDevelopmentContentOnly = false;
    this->bAllowGOAPAdvertisements = false;
    this->HeightAboveOrigin = 0.00f;
}

