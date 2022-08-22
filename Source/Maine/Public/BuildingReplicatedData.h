#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuildingId.h"
#include "BuildingGridLocation.h"
#include "BuildingReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBuildingReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBuildingGridBuildingId BuildingId;
    
    UPROPERTY()
    FBuildingGridLocation GridLocation;
    
    UPROPERTY()
    FBuildingGridBuildingId ReplacingBuilding;
    
    FBuildingReplicatedData();
};

