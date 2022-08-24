#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVitalAdjustmentVisibility.h"
#include "GoapActionVitalAdjustment.generated.h"

USTRUCT(BlueprintType)
struct FGoapActionVitalAdjustment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Vital;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVitalAdjustmentVisibility Visibility;
    
    MAINE_API FGoapActionVitalAdjustment();
};

