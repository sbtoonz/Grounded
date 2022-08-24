#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsSwimmingCharacter.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsSwimmingCharacter : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsSwimmingCharacter();
};

