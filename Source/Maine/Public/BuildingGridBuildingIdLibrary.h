#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BuildingGridBuildingId.h"
#include "BuildingGridBuildingIdLibrary.generated.h"

class UBuildingGridComponent;

UCLASS(BlueprintType)
class MAINE_API UBuildingGridBuildingIdLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingGridBuildingIdLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsBuildingIdValid(const FBuildingGridBuildingId& ID);
    
    UFUNCTION(BlueprintPure)
    static FBuildingGridBuildingId GetInvalidBuildingId();
    
    UFUNCTION(BlueprintPure)
    static UBuildingGridComponent* GetGridForBuildingGridBuildingId(const FBuildingGridBuildingId& BuildingGridBuildingId);
    
    UFUNCTION(BlueprintPure)
    static UBuildingGridComponent* GetBuildingGridFromId(const FBuildingGridBuildingId& ID);
    
};

