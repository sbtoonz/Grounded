#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DestroyedBuildingsData.h"
#include "SpawnedWave.generated.h"

UCLASS(Blueprintable)
class MAINE_API USpawnedWave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FDestroyedBuildingsData> DestroyedBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetBaseInitialBuildingCount;
    
    USpawnedWave();
};

