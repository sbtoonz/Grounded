#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "GoapWorldStateEvaluator.generated.h"

UCLASS(Abstract)
class MAINE_API UGoapWorldStateEvaluator : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FFloatRange MemberWeightVariance;
    
    UGoapWorldStateEvaluator();
};

