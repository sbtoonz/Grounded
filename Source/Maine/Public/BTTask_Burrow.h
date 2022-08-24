#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Burrow.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_Burrow : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_Burrow();
};

