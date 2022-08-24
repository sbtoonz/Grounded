#pragma once
#include "CoreMinimal.h"
#include "IntIntPair.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FIntIntPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Item1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Item2;
    
    FIntIntPair();
};

