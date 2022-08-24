#pragma once
#include "CoreMinimal.h"
#include "BestiaryStat.generated.h"

class UPlayerStatConfig;

USTRUCT(BlueprintType)
struct FBestiaryStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerStatConfig* Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    MAINE_API FBestiaryStat();
};

