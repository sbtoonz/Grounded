#pragma once
#include "CoreMinimal.h"
#include "InstancedMeshKey.h"
#include "BuildingGridBuilding.generated.h"

class AWaveSpawnRegionVolume;

USTRUCT(BlueprintType)
struct FBuildingGridBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaveSpawnRegionVolume* WaveRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaveRegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BuildingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedMeshKey InstancedMesh;
    
    MAINE_API FBuildingGridBuilding();
};

