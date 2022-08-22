#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTTask_SetTargetTo.generated.h"

UCLASS(Abstract)
class MAINE_API UBTTask_SetTargetTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FaceTargetType;
    
public:
    UBTTask_SetTargetTo();
};

