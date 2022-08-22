#pragma once
#include "CoreMinimal.h"
#include "EGameInputType.generated.h"

UENUM(BlueprintType)
enum class EGameInputType : uint8 {
    Mouse,
    Keyboard,
    Gamepad,
};

