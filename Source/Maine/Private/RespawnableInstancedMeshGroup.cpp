#include "RespawnableInstancedMeshGroup.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
#include "PersistenceComponent.h"

class UItemSpawnGroupData;
class UBaseLODActor;
class AActor;

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

