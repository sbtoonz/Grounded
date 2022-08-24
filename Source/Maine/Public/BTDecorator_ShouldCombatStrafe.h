#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ShouldCombatStrafe.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_ShouldCombatStrafe : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_ShouldCombatStrafe();
};

