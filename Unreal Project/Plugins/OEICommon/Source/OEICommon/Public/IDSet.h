#pragma once
#include "CoreMinimal.h"
#include "IDSet.generated.h"

USTRUCT()
struct OEICOMMON_API FIDSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<int32> IDs;
    
    FIDSet();
};

