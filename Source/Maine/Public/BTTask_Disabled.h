#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Disabled.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_Disabled : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_Disabled();
};

