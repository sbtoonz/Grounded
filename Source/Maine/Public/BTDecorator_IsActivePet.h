#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsActivePet.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsActivePet : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsActivePet();
};

