#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ClearNewPetState.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_ClearNewPetState : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ClearNewPetState();
};

