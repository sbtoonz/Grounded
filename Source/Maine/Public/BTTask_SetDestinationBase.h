#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTTask_SetDestinationBase.generated.h"

UCLASS(Abstract)
class MAINE_API UBTTask_SetDestinationBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetDestinationKey;
    
public:
    UBTTask_SetDestinationBase();
};

