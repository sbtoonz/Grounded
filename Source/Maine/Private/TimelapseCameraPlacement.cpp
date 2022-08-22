#include "TimelapseCameraPlacement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

class AActor;

void ATimelapseCameraPlacement::Start(AActor* InCameraActor) {
}

void ATimelapseCameraPlacement::OnTimelapseChange(bool Active) {
}

void ATimelapseCameraPlacement::End() {
}

ATimelapseCameraPlacement::ATimelapseCameraPlacement() {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
}

