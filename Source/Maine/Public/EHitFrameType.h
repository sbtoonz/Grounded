#pragma once
#include "CoreMinimal.h"
#include "EHitFrameType.generated.h"

UENUM()
enum class EHitFrameType : uint8 {
    HitAtAllFrames,
    OneHitByTarget,
};

