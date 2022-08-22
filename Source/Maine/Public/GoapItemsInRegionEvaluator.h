#pragma once
#include "CoreMinimal.h"
#include "GoapWorldStateEvaluator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GoapItemsInRegionEvaluator.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class MAINE_API UGoapItemsInRegionEvaluator : public UGoapWorldStateEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag RegionTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ValueCurve;
    
    UGoapItemsInRegionEvaluator();
};

