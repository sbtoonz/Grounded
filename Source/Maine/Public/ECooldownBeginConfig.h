#pragma once
#include "CoreMinimal.h"
#include "ECooldownBeginConfig.generated.h"

UENUM()
enum class ECooldownBeginConfig : uint8 {
    AvailableBeginCooldown,
    RandomBeginCooldown,
    MaxBeginCooldown,
    SetBeginCooldown,
};

