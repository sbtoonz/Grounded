#include "SurvivalDamageType.h"

bool USurvivalDamageType::HasDamageTypeFlag(ESurvivalDamageTypeFlags flag) const {
    return false;
}

bool USurvivalDamageType::HasAnyDamageTypeFlag(int32 flag) const {
    return false;
}

USurvivalDamageType::USurvivalDamageType() {
    this->Icon = NULL;
    this->DamageTypeFlags = 0;
    this->bCanBlock = true;
    this->bCanBlockWithWeapon = true;
    this->bCanApplyDamageReduction = true;
    this->bCanPlayHitReaction = true;
    this->bDamageDurability = true;
    this->bCanKill = true;
    this->bCanRepair = false;
}

