#include "OEISplineEmitterActor.h"
#include "Components/SplineComponent.h"

void AOEISplineEmitterActor::StopSound() {
}

void AOEISplineEmitterActor::StartSound() {
}

AOEISplineEmitterActor::AOEISplineEmitterActor() {
    this->AudioEvent = NULL;
    this->VelocityRTPC = NULL;
    this->EmitterComponent = NULL;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->MinimumAttenuationRadius = 0.00f;
    this->bAutoPost = true;
}

