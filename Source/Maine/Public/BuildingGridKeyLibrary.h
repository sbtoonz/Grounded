#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BuildingGridKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "BuildingGridKeyLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UBuildingGridKeyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingGridKeyLibrary();
    UFUNCTION(BlueprintPure)
    static FBuildingGridKey Subtract_BuildingGridKeyIntVector(FBuildingGridKey A, FIntVector B);
    
    UFUNCTION(BlueprintPure)
    static FBuildingGridKey Add_BuildingGridKeyIntVector(FBuildingGridKey A, FIntVector B);
    
};

