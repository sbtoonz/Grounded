#include "ItemSpawnData.h"

class AActor;

TArray<TSoftClassPtr<AActor>> UItemSpawnData::GetPossibleActors_Implementation() {
    return TArray<TSoftClassPtr<AActor>>();
}

UItemSpawnData::UItemSpawnData() {
    this->SpawnVFX = NULL;
    this->SimulatePhysicsOnSpawn = true;
    this->CanProxyOnSpawn = true;
}

