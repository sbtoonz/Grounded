#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetAttachmentPoint.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SetAttachmentPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetDestinationKey;
    
public:
    UBTTask_SetAttachmentPoint();
};

