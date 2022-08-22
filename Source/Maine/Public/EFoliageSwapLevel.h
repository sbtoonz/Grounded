#pragma once
#include "CoreMinimal.h"
#include "EFoliageSwapLevel.generated.h"

UENUM(BlueprintType)
enum class EFoliageSwapLevel : uint8 {
    Always,
    Small,
    Player,
    Large,
    SuperLarge,
    Never,
};

