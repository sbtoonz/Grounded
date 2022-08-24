#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_NoOp.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_NoOp : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_NoOp();
};

