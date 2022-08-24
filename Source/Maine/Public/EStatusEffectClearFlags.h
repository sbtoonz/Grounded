#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectClearFlags.generated.h"

UENUM()
enum class EStatusEffectClearFlags {
    DealDamage,
    TakeDamage,
    CombatStart,
    CombatEnd,
    Rest,
};

