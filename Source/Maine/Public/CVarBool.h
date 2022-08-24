#pragma once
#include "CoreMinimal.h"
#include "CVarBase.h"
#include "CVarBool.generated.h"

USTRUCT(BlueprintType)
struct FCVarBool : public FCVarBase {
    GENERATED_BODY()
public:
    MAINE_API FCVarBool();
};

