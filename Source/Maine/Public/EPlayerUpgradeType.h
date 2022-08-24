#pragma once
#include "CoreMinimal.h"
#include "EPlayerUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EPlayerUpgradeType : uint8 {
    None,
    StatusEffect,
    Perk,
};

