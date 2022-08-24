#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComboScalingData.generated.h"

USTRUCT(BlueprintType)
struct FComboScalingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ScalingValue;
    
    MAINE_API FComboScalingData();
};

