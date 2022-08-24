#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_UseInteractable.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_UseInteractable : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetInteractableKey;
    
public:
    UBTTask_UseInteractable();
};

