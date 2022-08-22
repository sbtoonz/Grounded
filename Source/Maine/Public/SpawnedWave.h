#pragma once
#include "CoreMinimal.h"
#include "DestroyedBuildingsData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpawnedWave.generated.h"

UCLASS()
class MAINE_API USpawnedWave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<int32, FDestroyedBuildingsData> DestroyedBuildings;
    
    UPROPERTY(Transient)
    int32 TargetBaseInitialBuildingCount;
    
    USpawnedWave();
};

