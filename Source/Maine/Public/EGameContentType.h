#pragma once
#include "CoreMinimal.h"
#include "EGameContentType.generated.h"

UENUM(BlueprintType)
enum class EGameContentType : uint8 {
    Development,
    Release,
};

