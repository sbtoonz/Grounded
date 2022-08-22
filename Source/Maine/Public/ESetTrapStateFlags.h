#pragma once
#include "CoreMinimal.h"
#include "ESetTrapStateFlags.generated.h"

UENUM()
enum class ESetTrapStateFlags {
    None,
    SkipFlush,
    Force,
};

