#pragma once
#include "CoreMinimal.h"
#include "EDetachSplineReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_StopClimbing.generated.h"

UCLASS()
class MAINE_API UBTTask_StopClimbing : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDetachSplineReason DetachReason;
    
    UBTTask_StopClimbing();
};

