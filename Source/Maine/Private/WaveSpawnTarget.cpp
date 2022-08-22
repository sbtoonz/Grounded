#include "WaveSpawnTarget.h"

AWaveSpawnTarget::AWaveSpawnTarget() {
    this->bIsObstructed = false;
    this->Volume = NULL;
    this->AllowedTypes = ESpawnTargetAllowedTypes::All;
}

