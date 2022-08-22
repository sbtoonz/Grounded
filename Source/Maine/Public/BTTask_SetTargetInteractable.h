#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTTask_SetTargetInteractable.generated.h"

UCLASS()
class MAINE_API UBTTask_SetTargetInteractable : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetActor;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetComponent;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetRotation;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FaceTargetType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MustLand;
    
public:
    UBTTask_SetTargetInteractable();
};

