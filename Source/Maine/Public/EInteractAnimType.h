#pragma once
#include "CoreMinimal.h"
#include "EInteractAnimType.generated.h"

UENUM(BlueprintType)
enum class EInteractAnimType : uint8 {
    None,
    Use,
    Pickup,
    Eat,
    Drink,
    Sleep,
    Charge,
    Steal,
    Custom,
    Scoop,
    Deposit,
    Revive,
    Craft,
    DrinkItem,
    DrinkItemProp,
    Throw,
    Scan,
    DepositTechChip,
    DepositSuperTechChip,
    ScanUnderwater,
};

