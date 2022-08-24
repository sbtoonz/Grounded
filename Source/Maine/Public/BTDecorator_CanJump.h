#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CanJump.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_CanJump : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanJump();
};

