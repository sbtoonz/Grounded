#pragma once
#include "CoreMinimal.h"
#include "EControlSet.generated.h"

UENUM(BlueprintType)
enum class EControlSet : uint8 {
    Mouse,
    Gamepad,
};

