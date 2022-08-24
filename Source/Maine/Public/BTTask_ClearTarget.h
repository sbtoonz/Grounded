#pragma once
#include "CoreMinimal.h"
#include "BTTask_SetTargetTo.h"
#include "BTTask_ClearTarget.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_ClearTarget : public UBTTask_SetTargetTo {
    GENERATED_BODY()
public:
    UBTTask_ClearTarget();
};

