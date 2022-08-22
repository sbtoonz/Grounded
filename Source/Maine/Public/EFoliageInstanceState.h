#pragma once
#include "CoreMinimal.h"
#include "EFoliageInstanceState.generated.h"

UENUM(BlueprintType)
enum class EFoliageInstanceState : uint8 {
    Added,
    Removed,
};

