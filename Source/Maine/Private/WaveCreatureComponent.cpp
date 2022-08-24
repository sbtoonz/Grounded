#include "WaveCreatureComponent.h"

class AWaveSpawnRegionVolume;

void UWaveCreatureComponent::SetIsUnderWater(bool UnderWater) {
}

void UWaveCreatureComponent::OnWaveRegionRemovedFromBase(int32 BaseIndex, AWaveSpawnRegionVolume* Region) {
}

void UWaveCreatureComponent::OnWaveAttackStateChanged(EWaveAttackState AttackState) {
}

UWaveCreatureComponent::UWaveCreatureComponent() {
    this->DeinstanceRadius = 1000.00f;
    this->DistanceMovedToDeinstance = 500.00f;
    this->TimeBetweenDeinstances = 5.00f;
    this->LastDeinstanceTime = 0.00f;
    this->MaxTimeWithoutContact = 10.00f;
    this->TimeWithoutContact = 0.00f;
    this->MinDistanceToTravelForNotStuck = 100.00f;
    this->MinTravelDistanceForProgress = 500.00f;
    this->LastDistToBase = 339999995214436424907732413799364296704.00f;
    this->MinProjectedProgressDistance = 50.00f;
    this->LastProjectedDistance = 339999995214436424907732413799364296704.00f;
    this->bIsUnderwater = false;
    this->RetreatTimeLimit = 17.50f;
    this->RetreatRandRange = 5.00f;
    this->RetreatStartTime = 0.00f;
    this->NewDestinationCheckThreshold = 0.50f;
    this->TimeInBaseRadius = 0.00f;
    this->SpawnTarget = NULL;
}

