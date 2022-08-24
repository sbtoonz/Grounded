#pragma once
#include "CoreMinimal.h"
#include "EBuildingTargettingType.generated.h"

UENUM()
enum class EBuildingTargettingType : uint8 {
    Default,
    AlwaysAttack,
    Ignore,
};

