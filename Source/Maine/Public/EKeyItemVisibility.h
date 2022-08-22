#pragma once
#include "CoreMinimal.h"
#include "EKeyItemVisibility.generated.h"

UENUM(BlueprintType)
enum class EKeyItemVisibility : uint8 {
    AlwaysVisible,
    HideUntilActive,
    HideIndividuals,
    AlwaysHidden,
};

