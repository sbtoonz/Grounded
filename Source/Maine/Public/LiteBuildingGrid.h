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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FBuildingGridKey, FLiteBuildingGridSlotData> Grid;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<uint32, FLiteBuilding> Buildings;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<uint32> RemovedBuildings;
    
public:
    MAINE_API FLiteBuildingGrid();
};

