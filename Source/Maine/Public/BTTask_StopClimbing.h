#pragma once
#include "CoreMinimal.h"
#include "EDetachSplineReason.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_StopClimbing.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_StopClimbing : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachSplineReason DetachReason;
    
    UBTTask_StopClimbing();
};

