#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EVitalAdjustmentVisibility.h"
#include "GoapActionVitalAdjustment.generated.h"

USTRUCT(BlueprintType)
struct FGoapActionVitalAdjustment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag Vital;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVitalAdjustmentVisibility Visibility;
    
    MAINE_API FGoapActionVitalAdjustment();
};

