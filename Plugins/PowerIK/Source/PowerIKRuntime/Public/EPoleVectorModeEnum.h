#pragma once
#include "CoreMinimal.h"
#include "EPoleVectorModeEnum.generated.h"

UENUM(BlueprintType)
enum EPoleVectorModeEnum {
    PV_None,
    PV_Position,
    PV_Bone,
    PV_AngleOffset,
    PV_MAX UMETA(Hidden),
};

