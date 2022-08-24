#pragma once
#include "CoreMinimal.h"
#include "GoapActionInstance.h"
#include "InterestActionNode.generated.h"

USTRUCT(BlueprintType)
struct FInterestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoapActionInstance Action;
    
    MAINE_API FInterestActionNode();
};

