#pragma once
#include "CoreMinimal.h"
#include "ECanRevertToFoliageState.generated.h"

UENUM()
enum class ECanRevertToFoliageState : uint8 {
    No,
    IfNecessary,
    Yes,
};

