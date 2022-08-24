#pragma once
#include "CoreMinimal.h"
#include "EInteractionVisibility.generated.h"

UENUM()
enum class EInteractionVisibility : uint8 {
    Default,
    Always,
    Never,
};

