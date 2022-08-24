#include "Encounter.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

class UBaseLODActor;
class AActor;

void AEncounter::Spawn(bool bForceSpawn) {
}

void AEncounter::OnSpawnKilled(const FDamageInfo& DamageInfo) {
}

void AEncounter::OnSpawnDestroyed(UBaseLODActor* LODActor) {
}

void AEncounter::OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActionInstigator) {
}

bool AEncounter::IsComplete() const {
    return false;
}

void AEncounter::Despawn(bool bImmediate) {
}

AEncounter::AEncounter() {
    this->MinimumDifficulty = EGameDifficulty::Relaxed;
    this->MinimumPlayers = 0;
    this->StartActivated = true;
    this->SpawnRandomlyInRadius = false;
    this->bSpawnOnNavMesh = true;
    this->Radius = 0.00f;
    this->RespawnTime = 0.00f;
    this->PlayerSpawnDistance = 15000.00f;
    this->PlayerDistanceCheckInterval = 10.00f;
    this->bResetSpawnLocationsOnLoad = false;
    this->bQuestCriticalEncounter = false;
    this->SpriteComponent = NULL;
    this->SphereComponent = NULL;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

