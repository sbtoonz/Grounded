#include "DamageData.h"

FDamageData::FDamageData() {
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->DamageEventType = EDamageEventType::Invalid;
    this->ForcedHitReaction = EHitReactionType::None;
    this->HitStun = 0;
    this->Pushback = 0.00f;
}

