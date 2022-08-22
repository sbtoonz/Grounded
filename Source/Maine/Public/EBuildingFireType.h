#pragma once
#include "CoreMinimal.h"
#include "EBuildingFireType.generated.h"

UENUM(BlueprintType)
enum class EBuildingFireType : uint8 {
    None,
    RequiredForUse,
    Toggle,
};

