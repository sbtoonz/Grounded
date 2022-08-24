#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuildingId.h"
#include "BuildingGridLocation.h"
#include "BuildingReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBuildingReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingGridBuildingId BuildingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingGridLocation GridLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingGridBuildingId ReplacingBuilding;
    
    FBuildingReplicatedData();
};

