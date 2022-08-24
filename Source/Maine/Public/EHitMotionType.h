#pragma once
#include "CoreMinimal.h"
#include "EHitMotionType.generated.h"

UENUM()
enum class EHitMotionType : uint8 {
    None,
    RightToLeft,
    LeftToRight,
    FrontToBack,
    BackToFront,
};

