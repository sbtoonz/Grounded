#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CanFly.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_CanFly : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanFly();
};

