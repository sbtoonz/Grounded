#pragma once
#include "CoreMinimal.h"
#include "VitalStatValue.generated.h"

USTRUCT(BlueprintType)
struct FVitalStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float VitalValue;
    
    MAINE_API FVitalStatValue();
};

