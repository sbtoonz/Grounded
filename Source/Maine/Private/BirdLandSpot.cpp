#include "BirdLandSpot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

EBirdSpotType ABirdLandSpot::GetSpotType() const {
    return EBirdSpotType::Ground;
}

USplineComponent* ABirdLandSpot::GetExitSpline() const {
    return NULL;
}

USplineComponent* ABirdLandSpot::GetEnterSpline() const {
    return NULL;
}

ABirdLandSpot::ABirdLandSpot() {
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->SpotType = EBirdSpotType::Ground;
    this->EnterSpline = CreateDefaultSubobject<USplineComponent>(TEXT("EnterSpline"));
    this->ExitSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ExitSpline"));
}

