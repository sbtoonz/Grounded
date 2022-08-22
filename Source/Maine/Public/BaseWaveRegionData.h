#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuildingId.h"
#include "BaseWaveRegionData.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FBaseWaveRegionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<ABuilding>> AnchoredBuildings;
    
    UPROPERTY()
    TArray<FBuildingGridBuildingId> AnchoredInstancedBuildings;
    
    MAINE_API FBaseWaveRegionData();
};

