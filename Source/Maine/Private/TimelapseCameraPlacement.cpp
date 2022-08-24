#include "TimelapseCameraPlacement.h"
#include "Components/SplineComponent.h"

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

