#pragma once
#include "CoreMinimal.h"
#include "CVarBase.h"
#include "CVarFloat.generated.h"

USTRUCT(BlueprintType)
struct FCVarFloat : public FCVarBase {
    GENERATED_BODY()
public:
    MAINE_API FCVarFloat();
};

