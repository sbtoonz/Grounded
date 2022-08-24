#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_WallCrawl.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_WallCrawl : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetDestinationKey;
    
public:
    UBTTask_WallCrawl();
};

