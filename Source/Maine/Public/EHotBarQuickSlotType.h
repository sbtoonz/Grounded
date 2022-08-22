#pragma once
#include "CoreMinimal.h"
#include "EHotBarQuickSlotType.generated.h"

UENUM(BlueprintType)
enum class EHotBarQuickSlotType : uint8 {
    NONE,
    SPECIFIC_ITEM,
    ANY_MELEE_WEAPON,
    ANY_RANGED_WEAPON,
    ANY_CONSUMABLE,
    ANY_HEALING,
    ANY_THROWABLE,
    ANY_LIGHT,
    ANY_BOMB,
    ANY_WEAPON,
    ANY,
};

