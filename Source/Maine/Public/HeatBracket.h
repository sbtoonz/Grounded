#pragma once
#include "CoreMinimal.h"
#include "HeatBracket.generated.h"

USTRUCT(BlueprintType)
struct FHeatBracket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalSpawnWeight;
    
    MAINE_API FHeatBracket();
};

