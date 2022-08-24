#pragma once
#include "CoreMinimal.h"
#include "ESignUnlockType.generated.h"

UENUM(BlueprintType)
enum class ESignUnlockType : uint8 {
    Default,
    RequiresUnlock,
};

