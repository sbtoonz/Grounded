#pragma once
#include "CoreMinimal.h"
#include "InstancedMeshKey.h"
#include "BuildingGridBuilding.generated.h"

class AWaveSpawnRegionVolume;

USTRUCT(BlueprintType)
struct FBuildingGridBuilding {
    GENERATED_BODY()
public:
    UPROPERTY()
    AWaveSpawnRegionVolume* WaveRegion;
    
    UPROPERTY()
    FName WaveRegionName;
    
    UPROPERTY()
    UClass* BuildingClass;
    
    UPROPERTY()
    FInstancedMeshKey InstancedMesh;
    
    MAINE_API FBuildingGridBuilding();
};

