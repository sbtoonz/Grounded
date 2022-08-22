#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GoapActionVitalAdjustment.h"
#include "GoapActionAdjustVitals.generated.h"

UCLASS()
class MAINE_API UGoapActionAdjustVitals : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, FGoapActionVitalAdjustment> ValueAdjustments;
    
    UPROPERTY(EditAnywhere)
    TArray<FGoapActionVitalAdjustment> Adjustments;
    
    UGoapActionAdjustVitals();
};

