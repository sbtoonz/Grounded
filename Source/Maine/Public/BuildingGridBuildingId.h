#pragma once
#include "CoreMinimal.h"
#include "BuildingGridBuildingId.generated.h"

class UBuildingGridComponent;

USTRUCT(BlueprintType)
struct MAINE_API FBuildingGridBuildingId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UBuildingGridComponent* Grid;
    
    UPROPERTY()
    uint32 ID;
    
    FBuildingGridBuildingId();
};

