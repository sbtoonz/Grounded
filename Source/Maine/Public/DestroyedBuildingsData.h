#pragma once
#include "CoreMinimal.h"
#include "DestroyedBuildingsData.generated.h"

USTRUCT(BlueprintType)
struct FDestroyedBuildingsData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool DestroyedByWave;
    
    UPROPERTY()
    float BuildingScore;
    
    MAINE_API FDestroyedBuildingsData();
};

