#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RunPreActionCombatAnim.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_RunPreActionCombatAnim : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AnimKey;
    
public:
    UBTTask_RunPreActionCombatAnim();
};

