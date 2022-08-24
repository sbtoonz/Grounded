#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_AttackRequiresFacing.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_AttackRequiresFacing : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AttackKey;
    
public:
    UBTDecorator_AttackRequiresFacing();
};

