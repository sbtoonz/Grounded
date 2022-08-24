#pragma once
#include "CoreMinimal.h"
#include "OEIMiniTimeSpan.generated.h"

USTRUCT(BlueprintType)
struct OEIMOVIEPLAYER_API FOEIMiniTimeSpan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Milliseconds;
    
    FOEIMiniTimeSpan();
};

