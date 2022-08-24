#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_StuckInLocalMinimum.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_StuckInLocalMinimum : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_StuckInLocalMinimum();
};

