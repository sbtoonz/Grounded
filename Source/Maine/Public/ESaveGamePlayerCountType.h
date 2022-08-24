#pragma once
#include "CoreMinimal.h"
#include "ESaveGamePlayerCountType.generated.h"

UENUM(BlueprintType)
enum class ESaveGamePlayerCountType : uint8 {
    Unknown,
    SinglePlayer,
    MultiPlayer,
};

