#include "AttackAnimEffect.h"

FGameplayTag UAttackAnimEffect::GetAttackSpeedTag() const {
    return FGameplayTag{};
}

UAttackAnimEffect::UAttackAnimEffect() {
    this->AttackMotionType = EHitMotionType::None;
    this->bHasHitStops = false;
    this->bHasReload = false;
    this->AnimPropClass = NULL;
}

