#pragma once
#include "CoreMinimal.h"
#include "EPlayerDeathBehavior.generated.h"

UENUM(BlueprintType)
enum class EPlayerDeathBehavior : uint8 {
    DropItemsOnDeath,
    KeepItemsOnDeath,
    DestroyItemsOnDeath,
};

