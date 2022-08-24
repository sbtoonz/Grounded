#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_NotifyJumpFailed.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_NotifyJumpFailed : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_NotifyJumpFailed();
};

