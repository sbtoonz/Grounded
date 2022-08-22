#pragma once
#include "CoreMinimal.h"
#include "EHealthState.generated.h"

UENUM()
enum class EHealthState : uint8 {
    Alive,
    Incapacitated,
    Dead,
};

