#include "ItemSpawnGroupData.h"

bool UItemSpawnGroupData::HasGlobalVariableCondition() const {
    return false;
}

bool UItemSpawnGroupData::HasEventInterval(ESpawnIntervalBehavior Event) const {
    return false;
}

UItemSpawnGroupData::UItemSpawnGroupData() {
    this->BillboardSprite = NULL;
    this->NeverReuseSpawnPoints = false;
    this->PlayerProximityBehavior = ESpawnProximityBehavior::Always;
    this->RaycastSoftSpawns = true;
//    this->GlobalVariableComparisonOperator = EComparisonOperator::Equals;
    this->GlobalVariableCompareValue = 0;
    this->ForceDespawnOnConditionNotMet = true;
    this->PlayerSpawnDistance = 7500.00f;
    this->SpawnEvaluateInterval = 10.00f;
    this->PlayerDistanceCheckInterval = 10.00f;
}

