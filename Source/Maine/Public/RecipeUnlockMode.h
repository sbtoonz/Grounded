#pragma once
#include "CoreMinimal.h"
#include "RecipeUnlockMode.generated.h"

UENUM()
enum class RecipeUnlockMode : uint8 {
    Default,
    IncludeHidden,
};

