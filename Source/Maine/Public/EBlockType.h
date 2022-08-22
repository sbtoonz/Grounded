#pragma once
#include "CoreMinimal.h"
#include "EBlockType.generated.h"

UENUM(BlueprintType)
enum class EBlockType : uint8 {
    None,
    Blocked,
    PerfectBlock,
};

