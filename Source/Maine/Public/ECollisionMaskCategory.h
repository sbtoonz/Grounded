#pragma once
#include "CoreMinimal.h"
#include "ECollisionMaskCategory.generated.h"

UENUM(BlueprintType)
enum class ECollisionMaskCategory : uint8 {
    None,
    CreaturePassThrough,
};

