#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_StopPhysMovement.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_StopPhysMovement : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_StopPhysMovement();
};

