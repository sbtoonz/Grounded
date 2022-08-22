#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BuildingPowerNodeList.h"
#include "BuildingPowerVertex.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FBuildingPowerVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NodeId;
    
    UPROPERTY()
    ABuilding* Building;
    
    UPROPERTY()
    FGuid BuildingGuid;
    
    UPROPERTY()
    TMap<int32, FBuildingPowerNodeList> Neighbors;
    
    MAINE_API FBuildingPowerVertex();
};

