#pragma once
#include "CoreMinimal.h"
#include "CustomizedValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite)
    float PropertyValue;
    
    MAINE_API FCustomizedValue();
};

