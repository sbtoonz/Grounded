#include "LootData.h"

FLootData::FLootData() {
    this->Type = ELootType::Item;
    this->Count = 0;
    this->DropChance = 0.00f;
    this->DropChanceMultiplier = 0.00f;
    this->SpawnType = ELootSpawnType::SpawnOnTrigger;
    this->LocationType = ELootLocationType::WorldDrop;
    this->SpawnPoint = NULL;
    this->IgnoreObjectiveMarkers = false;
    this->bDoUnderFloorCheckDuringLootSpawn = false;
    this->bSpawnOnDecay = false;
    this->bCheckConditionals = false;
}

