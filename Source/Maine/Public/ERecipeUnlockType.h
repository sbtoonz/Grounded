#pragma once
#include "CoreMinimal.h"
#include "ERecipeUnlockType.generated.h"

UENUM()
enum class ERecipeUnlockType : uint8 {
    Discovery,
    Research,
    All,
};

