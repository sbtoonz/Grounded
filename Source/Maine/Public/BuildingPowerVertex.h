#pragma once
#include "CoreMinimal.h"
#include "BuildingPowerNodeList.h"
#include "UObject/NoExportTypes.h"
#include "BuildingPowerVertex.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FBuildingPowerVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuilding* Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BuildingGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBuildingPowerNodeList> Neighbors;
    
    MAINE_API FBuildingPowerVertex();
};

