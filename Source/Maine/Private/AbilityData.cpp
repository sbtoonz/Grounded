#include "AbilityData.h"

FAbilityData::FAbilityData() {
    this->Cooldown = 0.00f;
    this->BeginCooldownConfig = ECooldownBeginConfig::AvailableBeginCooldown;
    this->SetBeginCooldown = 0.00f;
    this->Priority = 0;
    this->AbilityTargetType = EAbiltyTargetType::Enemy;
    this->UseNearestScriptedTarget = false;
    this->IgnoreCooldownInPreferedAbility = false;
    this->AnimPreAttack = NULL;
}

