#pragma once
#include "CoreMinimal.h"
#include "EBurrowState.generated.h"

UENUM(BlueprintType)
enum class EBurrowState : uint8 {
    None,
    Unburrowed,
    Unburrowing,
    Burrowed,
    Burrowing,
};

