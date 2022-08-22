#pragma once
#include "CoreMinimal.h"
#include "EStunState.generated.h"

UENUM()
enum class EStunState : uint8 {
    None,
    Stunned,
    StunCooldown,
};

