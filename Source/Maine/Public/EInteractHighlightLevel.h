#pragma once
#include "CoreMinimal.h"
#include "EInteractHighlightLevel.generated.h"

UENUM()
enum class EInteractHighlightLevel : uint8 {
    None,
    ItemsOnly,
    RealInteractableOnly,
    All,
};

