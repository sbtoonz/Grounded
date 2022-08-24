#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_BlackboardLocation.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBTDecorator_BlackboardLocation : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_BlackboardLocation();
};

