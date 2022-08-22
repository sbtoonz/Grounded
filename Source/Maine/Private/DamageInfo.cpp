#include "DamageInfo.h"

FDamageInfo::FDamageInfo() {
    this->InflictStyle = EInflictDamageStyle::Chunk;
    this->DamageType = NULL;
    this->Tier = 0;
    this->HitStun = 0;
    this->ForcedHitReaction = EHitReactionType::None;
    this->BlockType = EBlockType::None;
    this->DamageSourceType = EDamageSourceType::None;
    this->Pushback = 0.00f;
    this->DamageFlags = 0;
}

