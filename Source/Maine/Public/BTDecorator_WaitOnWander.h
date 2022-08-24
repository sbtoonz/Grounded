#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_WaitOnWander.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_WaitOnWander : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_WaitOnWander();
};

