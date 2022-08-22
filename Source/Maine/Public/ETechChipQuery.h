#pragma once
#include "CoreMinimal.h"
#include "ETechChipQuery.generated.h"

UENUM()
enum class ETechChipQuery : uint8 {
    UnlockedOnly,
    ReadyForUnlockOnly,
    All,
};

