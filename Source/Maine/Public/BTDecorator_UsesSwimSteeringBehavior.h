#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_UsesSwimSteeringBehavior.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_UsesSwimSteeringBehavior : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_UsesSwimSteeringBehavior();
};

