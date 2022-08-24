#pragma once
#include "CoreMinimal.h"
#include "EFootstepType.generated.h"

UENUM()
enum class EFootstepType : uint8 {
    None,
    Default,
    Sprint,
    Landed,
    Jump,
};

