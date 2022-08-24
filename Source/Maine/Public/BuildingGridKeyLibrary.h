#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildingGridKey.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGridKeyLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBuildingGridKeyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingGridKeyLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuildingGridKey Subtract_BuildingGridKeyIntVector(FBuildingGridKey A, FIntVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuildingGridKey Add_BuildingGridKeyIntVector(FBuildingGridKey A, FIntVector B);
    
};

