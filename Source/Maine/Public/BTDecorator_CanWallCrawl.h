#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CanWallCrawl.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_CanWallCrawl : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanWallCrawl();
};

