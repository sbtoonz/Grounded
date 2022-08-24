#pragma once
#include "CoreMinimal.h"
#include "ENodeDisplayType.generated.h"

UENUM(BlueprintType)
enum class ENodeDisplayType : uint8 {
    Hidden,
    Conversation,
    Bark,
    Overlay,
};

