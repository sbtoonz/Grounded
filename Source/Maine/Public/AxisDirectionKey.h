#pragma once
#include "CoreMinimal.h"
#include "AxisDirectionKey.generated.h"

USTRUCT(BlueprintType)
struct FAxisDirectionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPositive;
    
    MAINE_API FAxisDirectionKey();
};

