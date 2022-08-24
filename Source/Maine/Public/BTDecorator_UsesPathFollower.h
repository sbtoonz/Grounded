#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_UsesPathFollower.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_UsesPathFollower : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_UsesPathFollower();
};

