#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SteeringTargeted.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SteeringTargeted : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SteeringTargeted();
};

