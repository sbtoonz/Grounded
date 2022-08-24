#pragma once
#include "CoreMinimal.h"
#include "EHitReactionType.generated.h"

UENUM(BlueprintType)
enum class EHitReactionType : uint8 {
    None,
    Flinch,
    Stun,
    Stagger,
    Blocked,
    Capture,
};

