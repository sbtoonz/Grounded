#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MarkInterestUnreachable.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_MarkInterestUnreachable : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_MarkInterestUnreachable();
};

