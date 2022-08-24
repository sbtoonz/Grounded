#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildingGridLocation.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGridLocationLibrary.generated.h"

class ABuilding;

UCLASS(Blueprintable)
class MAINE_API UBuildingGridLocationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingGridLocationLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuildingGridLocation Subtract_BuildingGridLocationIntVector(const FBuildingGridLocation& A, FIntVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEaveBlockedAt(const ABuilding* Building, const FBuildingGridLocation& Location, const FGameplayTag& ByTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCrenellationBlockedAt(const ABuilding* Building, const FBuildingGridLocation& Location, float ActualWorldRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildingGridLocationValid(const FBuildingGridLocation& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuildingGridLocation Add_BuildingGridLocationIntVector(const FBuildingGridLocation& A, FIntVector B);
    
};

