#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildingGridBuildingId.h"
#include "BuildingGridBuildingIdLibrary.generated.h"

class UBuildingGridComponent;

UCLASS(Blueprintable)
class MAINE_API UBuildingGridBuildingIdLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingGridBuildingIdLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildingIdValid(const FBuildingGridBuildingId& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuildingGridBuildingId GetInvalidBuildingId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBuildingGridComponent* GetGridForBuildingGridBuildingId(const FBuildingGridBuildingId& BuildingGridBuildingId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBuildingGridComponent* GetBuildingGridFromId(const FBuildingGridBuildingId& ID);
    
};

