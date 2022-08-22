#pragma once
#include "CoreMinimal.h"
#include "EFaceTargetType.generated.h"

UENUM()
enum class EFaceTargetType : uint8 {
    None,
    FaceTarget,
    AlignWithTarget,
};

