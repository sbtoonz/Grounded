#include "TrackedItemSpawnGroup.h"

class AActor;

void UTrackedItemSpawnGroup::OnRest(float RestDuration) {
}

void UTrackedItemSpawnGroup::OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

TArray<FItemSpawnPointData> UTrackedItemSpawnGroup::GetSpawnPointsToAffect(const FItemSpawnGroupEvent& Event) const {
    return TArray<FItemSpawnPointData>();
}

TArray<FItemSpawnPointData> UTrackedItemSpawnGroup::GetAllSpawnPoints() const {
    return TArray<FItemSpawnPointData>();
}

UTrackedItemSpawnGroup::UTrackedItemSpawnGroup() {
    this->Owner = NULL;
    this->ItemSpawnGroupData = NULL;
}

