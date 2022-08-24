#pragma once
#include "CoreMinimal.h"
#include "EMainMenuStateTransitionType.generated.h"

UENUM()
enum class EMainMenuStateTransitionType : uint8 {
    Forwards,
    Backwards,
};

