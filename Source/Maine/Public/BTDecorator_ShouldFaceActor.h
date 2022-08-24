#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_ShouldFaceActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_ShouldFaceActor : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_ShouldFaceActor();
};

