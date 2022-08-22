#include "AIDetectionComponent.h"

class AActor;

void UAIDetectionComponent::OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus) {
}

UAIDetectionComponent::UAIDetectionComponent() {
    this->IntensityThreshold = 20.00f;
    this->InvestigateTime = 20.00f;
}

