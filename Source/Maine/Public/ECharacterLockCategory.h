#pragma once
#include "CoreMinimal.h"
#include "ECharacterLockCategory.generated.h"

UENUM()
enum class ECharacterLockCategory : uint8 {
    None,
    Animation,
    Cinematic,
    AI,
    Capture,
};

