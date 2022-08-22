#pragma once
#include "CoreMinimal.h"
#include "AxisDirectionKey.generated.h"

USTRUCT(BlueprintType)
struct FAxisDirectionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPositive;
    
    MAINE_API FAxisDirectionKey();
};

