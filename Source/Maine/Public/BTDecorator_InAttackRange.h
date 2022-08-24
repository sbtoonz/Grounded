#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_InAttackRange.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_InAttackRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AttackKey;
    
public:
    UBTDecorator_InAttackRange();
};

