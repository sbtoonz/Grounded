#pragma once
#include "CoreMinimal.h"
#include "ValueAdjustment.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FValueAdjustment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Value;
    
    UPROPERTY(BlueprintReadWrite)
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite)
    float MaximumValue;
    
    FValueAdjustment();
};

