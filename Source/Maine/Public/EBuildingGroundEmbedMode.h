#pragma once
#include "CoreMinimal.h"
#include "EBuildingGroundEmbedMode.generated.h"

UENUM(BlueprintType)
enum class EBuildingGroundEmbedMode : uint8 {
    None,
    Permitted,
    Encouraged,
};

