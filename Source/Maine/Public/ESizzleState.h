#pragma once
#include "CoreMinimal.h"
#include "ESizzleState.generated.h"

UENUM()
enum class ESizzleState : uint8 {
    NotSizzling,
    Sizzling,
    MaxSizzle,
};

