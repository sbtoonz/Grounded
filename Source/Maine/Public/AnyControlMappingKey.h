#pragma once
#include "CoreMinimal.h"
#include "EControlMappingKeyType.h"
#include "AnyControlMappingKey.generated.h"

USTRUCT(BlueprintType)
struct FAnyControlMappingKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EControlMappingKeyType Type;
    
    UPROPERTY(BlueprintReadWrite)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAxisPositive;
    
    MAINE_API FAnyControlMappingKey();
};

