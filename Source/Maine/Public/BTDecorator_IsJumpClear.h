#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardLocation.h"
#include "BTDecorator_IsJumpClear.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsJumpClear : public UBTDecorator_BlackboardLocation {
    GENERATED_BODY()
public:
    UBTDecorator_IsJumpClear();
};

