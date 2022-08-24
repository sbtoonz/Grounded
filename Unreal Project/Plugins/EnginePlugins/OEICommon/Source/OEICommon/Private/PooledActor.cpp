#include "PooledActor.h"

bool APooledActor::IsSpawned() {
    return false;
}

APooledActor::APooledActor() {
    this->Spawned = false;
}

