#pragma once
#include "CoreMinimal.h"
#include "IDSet.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FIDSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> IDs;
    
    FIDSet();
};

