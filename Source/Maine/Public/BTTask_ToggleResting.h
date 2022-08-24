#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ToggleResting.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_ToggleResting : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ToggleResting();
};

