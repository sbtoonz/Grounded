#pragma once
#include "CoreMinimal.h"
#include "CustomizedValue.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropertyValue;
    
    MAINE_API FCustomizedValue();
};

