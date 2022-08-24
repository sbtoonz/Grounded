#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsClimbingFoliage.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsClimbingFoliage : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsClimbingFoliage();
};

