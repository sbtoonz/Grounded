#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BaseWaveRegionData.h"
#include "BuildingGridBuildingId.h"
#include "Base.generated.h"

class ABuilding;
class AWaveSpawnRegionVolume;

USTRUCT(BlueprintType)
struct FBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    FVector FullLocation;
    
    UPROPERTY()
    float FullRadius;
    
    UPROPERTY(NotReplicated)
    TArray<ABuilding*> Buildings;
    
    UPROPERTY(NotReplicated)
    TArray<FBuildingGridBuildingId> InstancedBuildings;
    
    UPROPERTY(NotReplicated)
    TMap<AWaveSpawnRegionVolume*, FBaseWaveRegionData> WaveRegionData;
    
    UPROPERTY(NotReplicated)
    AWaveSpawnRegionVolume* BaseLocationRegion;
    
    MAINE_API FBase();
};

