#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WanderToTarget.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_WanderToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WanderToTarget();
};

