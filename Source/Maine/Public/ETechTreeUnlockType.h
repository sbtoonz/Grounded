#pragma once
#include "CoreMinimal.h"
#include "ETechTreeUnlockType.generated.h"

UENUM(BlueprintType)
enum class ETechTreeUnlockType : uint8 {
    None,
    Recipe,
    StatusEffect,
    TransmitterType,
    Perk,
    Sign,
};

