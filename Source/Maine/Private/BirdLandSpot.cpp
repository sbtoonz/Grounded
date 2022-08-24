#include "BirdLandSpot.h"
#include "Components/SplineComponent.h"
#include "ObsidianIDComponent.h"

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

