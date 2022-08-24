#include "Ability.h"

float UAbility::GetCooldownTimeRemaining() const {
    return 0.0f;
}

UAbility::UAbility() {
    this->Attack = NULL;
}

