#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardLocation.h"
#include "BTDecorator_IsInJumpRange.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsInJumpRange : public UBTDecorator_BlackboardLocation {
    GENERATED_BODY()
public:
    UBTDecorator_IsInJumpRange();
};

