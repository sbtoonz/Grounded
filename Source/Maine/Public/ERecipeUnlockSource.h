#pragma once
#include "CoreMinimal.h"
#include "ERecipeUnlockSource.generated.h"

UENUM()
enum class ERecipeUnlockSource : uint8 {
    None,
    Resource,
    Research,
    ResearchLevel,
    Purchase,
    CozinessLevel,
};

