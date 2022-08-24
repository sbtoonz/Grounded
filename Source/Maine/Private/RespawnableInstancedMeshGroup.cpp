#include "RespawnableInstancedMeshGroup.h"
#include "Templates/SubclassOf.h"
#include "ObsidianIDComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "PersistenceComponent.h"

class AActor;
class UBaseLODActor;
class UItemSpawnGroupData;

UBaseLODActor* ARespawnableInstancedMeshGroup::Spawn_Implementation(FItemSpawnPointData SpawnPoint) {
    return NULL;
}

void ARespawnableInstancedMeshGroup::OnFoliageDamaged(AActor* Sender, float Damage, const FDamageEvent& DamageEvent, FDamageInfo DamageInfo) {
}

void ARespawnableInstancedMeshGroup::GetSpawnPoints_Implementation(TArray<FItemSpawnPointData>& SpawnPoints) const {
}

TSubclassOf<UItemSpawnGroupData> ARespawnableInstancedMeshGroup::GetItemSpawnGroupData_Implementation() const {
    return NULL;
}

bool ARespawnableInstancedMeshGroup::DoesSpawnActors_Implementation() const {
    return false;
}

void ARespawnableInstancedMeshGroup::Despawn_Implementation(FItemSpawnPointData SpawnPoint) {
}

void ARespawnableInstancedMeshGroup::BuildInstances_Implementation() {
}

ARespawnableInstancedMeshGroup::ARespawnableInstancedMeshGroup() {
    this->ItemSpawnGroupData = NULL;
    this->PlacementType = ERespawnableMeshPlacementType::None;
    this->InstancedMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->DespawnRandomDelay = 0.00f;
}

