#pragma once
#include "CoreMinimal.h"
#include "CVarBase.h"
#include "CVarInt.generated.h"

USTRUCT(BlueprintType)
struct FCVarInt : public FCVarBase {
    GENERATED_BODY()
public:
    MAINE_API FCVarInt();
};

