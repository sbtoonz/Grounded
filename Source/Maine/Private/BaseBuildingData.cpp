#include "BaseBuildingData.h"

FBaseBuildingData::FBaseBuildingData() {
    this->Icon = NULL;
    this->Heat = 0;
    this->bBaseBuilding = false;
    this->WaveDamageScore = 0.00f;
    this->SlotType = EBuildingSlotType::None;
    this->bUseAlternateSlotType = false;
    this->AlternateSlotType = EBuildingSlotType::None;
    this->EmbedMode = EBuildingGroundEmbedMode::None;
    this->bPlaceAtPlayerRotation = false;
    this->bRotateRandom = false;
    this->bAllowPlaceInWater = false;
    this->BuoyantPlacement = EBuildingBuoyantPlacementMode::None;
    this->FreeBuildingPlacementDistance = 0.00f;
    this->BuildingWallMountPlacementDistance = 0.00f;
    this->BuildingCeilingMountPlacementDistance = 0.00f;
    this->bDoOverrideAllowedWallNormal = false;
    this->CozinessContribution = 0;
    this->CozinessAdditionalContribution = 0.00f;
    this->bCozinessStructural = false;
    this->bModelViewerAddOverheadSpotlight = false;
}

