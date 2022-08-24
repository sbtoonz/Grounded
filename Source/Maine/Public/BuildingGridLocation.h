#pragma once
#include "CoreMinimal.h"
#include "BuildingGridKey.h"
#include "BuildingGridLocation.generated.h"

class UBuildingGridComponent;

USTRUCT(BlueprintType)
struct MAINE_API FBuildingGridLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UBuildingGridComponent> Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingGridKey Key;
    
    FBuildingGridLocation();
};

