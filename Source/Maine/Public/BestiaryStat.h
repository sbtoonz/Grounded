#pragma once
#include "CoreMinimal.h"
#include "BestiaryStat.generated.h"

class UPlayerStatConfig;

USTRUCT(BlueprintType)
struct FBestiaryStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPlayerStatConfig* Stat;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Value;
    
    MAINE_API FBestiaryStat();
};

