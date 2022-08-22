#include "FaucetSpawnerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UItemSpawnGroupData;
class UBaseLODActor;
class UTrackedItemSpawnGroup;

UBaseLODActor* UFaucetSpawnerComponent::Spawn_Implementation(FItemSpawnPointData SpawnPoint) {
    return NULL;
}

void UFaucetSpawnerComponent::HandleTrackedSpawnsChanged(UTrackedItemSpawnGroup* Sender) {
}

void UFaucetSpawnerComponent::GetSpawnPoints_Implementation(TArray<FItemSpawnPointData>& SpawnPoints) const {
}

TSubclassOf<UItemSpawnGroupData> UFaucetSpawnerComponent::GetItemSpawnGroupData_Implementation() const {
    return NULL;
}

bool UFaucetSpawnerComponent::DoesSpawnActors_Implementation() const {
    return false;
}

void UFaucetSpawnerComponent::Despawn_Implementation(FItemSpawnPointData SpawnPoint) {
}

void UFaucetSpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFaucetSpawnerComponent, bHasSpawnedItems);
}

UFaucetSpawnerComponent::UFaucetSpawnerComponent() {
    this->TrackedGroup = NULL;
    this->bHasSpawnedItems = false;
}

