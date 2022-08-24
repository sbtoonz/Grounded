#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
#include "GoapActionVitalAdjustment.h"
#include "GameplayTagContainer.h"
#include "GoapActionAdjustVitals.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionAdjustVitals : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGoapActionVitalAdjustment> ValueAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoapActionVitalAdjustment> Adjustments;
    
    UGoapActionAdjustVitals();
};

