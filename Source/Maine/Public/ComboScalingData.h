#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ComboScalingData.generated.h"

USTRUCT(BlueprintType)
struct FComboScalingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> ScalingValue;
    
    MAINE_API FComboScalingData();
};

