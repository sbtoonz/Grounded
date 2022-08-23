#pragma once
#include "CoreMinimal.h"
#include "IntIntPair.generated.h"

USTRUCT()
struct OEICOMMON_API FIntIntPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Item1;
    
    UPROPERTY(EditAnywhere)
    int32 Item2;
    
    FIntIntPair();
};

