#pragma once
#include "CoreMinimal.h"
#include "BTTask_SetTargetTo.h"
#include "BTTask_SetTargetActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SetTargetActor : public UBTTask_SetTargetTo {
    GENERATED_BODY()
public:
    UBTTask_SetTargetActor();
};

