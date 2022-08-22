#pragma once
#include "CoreMinimal.h"
#include "BuildingGridKey.h"
#include "BuildingGridLocation.generated.h"

class UBuildingGridComponent;

USTRUCT(BlueprintType)
struct MAINE_API FBuildingGridLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UBuildingGridComponent> Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBuildingGridKey Key;
    
    FBuildingGridLocation();
};

