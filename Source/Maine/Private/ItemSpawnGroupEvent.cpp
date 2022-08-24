#include "ItemSpawnGroupEvent.h"

FItemSpawnGroupEvent::FItemSpawnGroupEvent() {
    this->EventType = EItemSpawnEventType::Spawn;
    this->When = ESpawnIntervalBehavior::None;
    this->WhenValue = 0.00f;
    this->bAllowQueueing = false;
    this->EventPercentageChance = 0.00f;
}

