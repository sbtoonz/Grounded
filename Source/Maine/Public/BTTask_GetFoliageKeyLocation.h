#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTTask_GetFoliageKeyLocation.generated.h"

UCLASS()
class MAINE_API UBTTask_GetFoliageKeyLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FoliageBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LocationBlackboardKey;
    
public:
    UBTTask_GetFoliageKeyLocation();
};

