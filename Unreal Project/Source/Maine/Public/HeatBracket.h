#pragma once
#include "CoreMinimal.h"
#include "HeatBracket.generated.h"

USTRUCT(BlueprintType)
struct FHeatBracket {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 HeatMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HeatMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TotalSpawnWeight;
    
    MAINE_API FHeatBracket();
};

