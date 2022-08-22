#pragma once
#include "CoreMinimal.h"
#include "BuildingGridKey.h"
#include "LiteBuilding.h"
#include "LiteBuildingGridSlotData.h"
#include "LiteBuildingGrid.generated.h"

USTRUCT(BlueprintType)
struct FLiteBuildingGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FBuildingGridKey, FLiteBuildingGridSlotData> Grid;
    
    UPROPERTY(Transient)
    TMap<uint32, FLiteBuilding> Buildings;
    
    UPROPERTY(Transient)
    TSet<uint32> RemovedBuildings;
    
public:
    MAINE_API FLiteBuildingGrid();
};

