#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuildingId.h"
#include "BaseWaveRegionData.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FBaseWaveRegionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ABuilding>> AnchoredBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridBuildingId> AnchoredInstancedBuildings;
    
    MAINE_API FBaseWaveRegionData();
};

