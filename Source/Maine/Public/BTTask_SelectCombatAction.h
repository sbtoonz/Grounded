#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTTask_SelectCombatAction.generated.h"

UCLASS()
class MAINE_API UBTTask_SelectCombatAction : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetActorKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DesiredAttackKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FaceTargetType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AnimKey;
    
public:
    UBTTask_SelectCombatAction();
};

