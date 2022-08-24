#pragma once
#include "CoreMinimal.h"
#include "EInteractionChannel.generated.h"

UENUM(BlueprintType)
enum class EInteractionChannel : uint8 {
    Primary,
    Primary_Hold,
    Cancel,
    Cancel_Hold,
    LightFire,
    Drop,
    Relocate,
    Customize,
    Pick,
    Count,
};

