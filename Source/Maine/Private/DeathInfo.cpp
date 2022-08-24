#include "DeathInfo.h"

FDeathInfo::FDeathInfo() {
    this->DamageType = NULL;
    this->DamageInstigator = NULL;
    this->DamageSourceType = EDamageSourceType::None;
    this->bIsIncapacitate = false;
}

