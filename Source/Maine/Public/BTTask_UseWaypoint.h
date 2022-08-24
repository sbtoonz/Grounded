#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_UseWaypoint.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_UseWaypoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_UseWaypoint();
};

