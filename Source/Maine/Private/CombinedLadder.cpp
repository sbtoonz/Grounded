#include "CombinedLadder.h"
#include "Net/UnrealNetwork.h"
#include "ClimbableSplineComponent.h"

void ACombinedLadder::OnRep_SplinePoints() {
}

void ACombinedLadder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACombinedLadder, SplinePoints);
}

ACombinedLadder::ACombinedLadder() {
    this->SplineComponent = CreateDefaultSubobject<UClimbableSplineComponent>(TEXT("ClimbableSpline"));
}

