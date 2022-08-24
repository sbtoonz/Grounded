#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SteeringWander.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SteeringWander : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SteeringWander();
};

