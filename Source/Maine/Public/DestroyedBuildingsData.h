#pragma once
#include "CoreMinimal.h"
#include "DestroyedBuildingsData.generated.h"

USTRUCT(BlueprintType)
struct FDestroyedBuildingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyedByWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingScore;
    
    MAINE_API FDestroyedBuildingsData();
};

