#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_NonPlayerAttractor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_NonPlayerAttractor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_NonPlayerAttractor();
};

