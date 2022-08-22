#pragma once
#include "CoreMinimal.h"
#include "GoapActionInstance.h"
#include "InterestActionNode.generated.h"

USTRUCT()
struct FInterestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGoapActionInstance Action;
    
    MAINE_API FInterestActionNode();
};

