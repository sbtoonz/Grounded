#include "SpawnedItemLiteData.h"

USpawnedItemLiteData::USpawnedItemLiteData() {
    this->GameLifetimeHours = 0.00f;
    this->OverrideGameHourLifetime = 0.00f;
    this->bUseOverrideGameHourLifetime = false;
    this->bLifetimeDespawnWhenProxiedOnly = false;
}

