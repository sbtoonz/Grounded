#pragma once
#include "CoreMinimal.h"
#include "EAuthTokenType.generated.h"

UENUM(BlueprintType)
enum class EAuthTokenType : uint8 {
    pfenum_Email,
    pfenum_MAX UMETA(Hidden),
};

