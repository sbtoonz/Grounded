#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuidIntPair.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FGuidIntPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Item1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Item2;
    
    FGuidIntPair();
};

