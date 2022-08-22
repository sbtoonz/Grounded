#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BuildingGridLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BuildingGridLocationLibrary.generated.h"

class ABuilding;

UCLASS(BlueprintType)
class MAINE_API UBuildingGridLocationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingGridLocationLibrary();
    UFUNCTION(BlueprintPure)
    static FBuildingGridLocation Subtract_BuildingGridLocationIntVector(const FBuildingGridLocation& A, FIntVector B);
    
    UFUNCTION(BlueprintPure)
    static bool IsEaveBlockedAt(const ABuilding* Building, const FBuildingGridLocation& Location, const FGameplayTag& ByTag);
    
    UFUNCTION(BlueprintPure)
    static bool IsCrenellationBlockedAt(const ABuilding* Building, const FBuildingGridLocation& Location, float ActualWorldRotation);
    
    UFUNCTION(BlueprintPure)
    static bool IsBuildingGridLocationValid(const FBuildingGridLocation& Location);
    
    UFUNCTION(BlueprintPure)
    static FBuildingGridLocation Add_BuildingGridLocationIntVector(const FBuildingGridLocation& A, FIntVector B);
    
};

