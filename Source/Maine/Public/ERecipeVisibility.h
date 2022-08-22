#pragma once
#include "CoreMinimal.h"
#include "ERecipeVisibility.generated.h"

UENUM(BlueprintType)
enum class ERecipeVisibility : uint8 {
    Visible,
    Hidden,
    RecipeRequired,
};

