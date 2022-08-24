#pragma once
#include "CoreMinimal.h"
#include "EDamageInfoFlags.generated.h"

UENUM()
enum class EDamageInfoFlags {
    None,
    KillingBlow = 0x2,
    CriticalHit = 0x4,
    DamageColliderBonus = 0x8,
    DamageColliderPenalty = 0x10,
};

