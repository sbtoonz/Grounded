#include "AITargettingComponent.h"

class AActor;

void UAITargettingComponent::ValidateTargets() {
}

void UAITargettingComponent::OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus) {
}

AActor* UAITargettingComponent::GetTargetActor() const {
    return NULL;
}

void UAITargettingComponent::CacheRandomOverrideTarget() {
}

void UAITargettingComponent::CacheCurrentTarget() {
}

UAITargettingComponent::UAITargettingComponent() {
    this->SuspiciousThreshold = 25.00f;
    this->DangerThreshold = 75.00f;
    this->TargetExpirationTime = 3.00f;
    this->ThreatDecayTime = 5.00f;
    this->DamageThreatModifier = 1.00f;
    this->HearingThreatModifier = 1.00f;
    this->TargetDistanceModifier = 1.00f;
    this->BuildingTargetType = EBuildingTargettingType::Ignore;
    this->TargetPriorityType = ETargetPriorityType::PartyMembers;
    this->bTargetsCanExpire = true;
    this->UseRandomTarget = false;
    this->RandomTargetModeSelectInterval = 5.00f;
    this->ProbabilitySelectedRandomModeTarget = 0.30f;
}

