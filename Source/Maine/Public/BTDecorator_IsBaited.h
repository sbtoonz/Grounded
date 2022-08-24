#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsBaited.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsBaited : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsBaited();
};

