#pragma once
#include "CoreMinimal.h"
#include "EInflictDamageStyle.generated.h"

UENUM(BlueprintType)
enum class EInflictDamageStyle : uint8 {
    Chunk,
    OverTime,
    Reflected,
};

