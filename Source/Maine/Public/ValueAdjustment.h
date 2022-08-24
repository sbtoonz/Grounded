#pragma once
#include "CoreMinimal.h"
#include "ValueAdjustment.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FValueAdjustment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumValue;
    
    FValueAdjustment();
};

