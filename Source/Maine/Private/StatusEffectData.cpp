#include "StatusEffectData.h"

FStatusEffectData::FStatusEffectData() {
    this->Type = EStatusEffectType::None;
    this->Value = 0.00f;
    this->DurationType = EStatusEffectDurationType::Duration;
    this->Duration = 0.00f;
    this->Interval = 0.00f;
    this->DamageTypeFlags = 0;
    this->DamageType = NULL;
    this->ApplyType = EStatusEffectApplyType::None;
    this->AttackChargeType = EStatusEffectAttackChargeType::Default;
    this->ClearFlags = 0;
    this->ScreenEffectData = NULL;
    this->VisualEffectData = NULL;
    this->bShowInUI = false;
    this->bIsNegativeEffectInUI = false;
    this->bStackInUI = false;
}

