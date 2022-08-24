#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ToggleFlying.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_ToggleFlying : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ToggleFlying();
};

