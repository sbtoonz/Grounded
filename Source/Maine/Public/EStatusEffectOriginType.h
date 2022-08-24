#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectOriginType.generated.h"

UENUM()
enum class EStatusEffectOriginType : uint8 {
    Gear,
    Consumable,
    Creature,
    Environment,
    Perk,
    Upgrade,
    Thirst,
    Hunger,
    Other,
};

