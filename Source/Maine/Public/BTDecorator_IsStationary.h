#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsStationary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsStationary : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsStationary();
};

