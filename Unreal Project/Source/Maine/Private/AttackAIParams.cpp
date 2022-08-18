#include "AttackAIParams.h"

FAttackAIParams::FAttackAIParams() {
    this->MinDist = 0.00f;
    this->MaxDist = 0.00f;
    this->PreferredMaxDist = 0.00f;
    this->PreferredDistPostLunge = 0.00f;
    this->PreferredHeight = 0.00f;
    this->RequiredSideClearance = 0.00f;
    this->bLockRotation = false;
    this->bRequiresFacing = false;
}

