#pragma once
#include "CoreMinimal.h"
#include "EGetCellFlags.h"
#include "BuildingGridKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "BuildingShape.generated.h"

class UBuildingShape;

UCLASS(BlueprintType)
class MAINE_API UBuildingShape : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBuildingShape* OverrideSupportedBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> AppendSupportedBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> RemoveSupportedBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> SoftCells;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FIntVector> OverrideSnaps;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FVector> ManualPlacementLocations;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> OverrideFullCells;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> OverrideCells;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> OverrideCellsAdvanced;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> BlockFullCells;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> BlockCells;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBuildingGridKey> BlockCellsAdvanced;
    
public:
    UBuildingShape();
    UFUNCTION(BlueprintPure)
    bool IsCell(FBuildingGridKey Key, EGetCellFlags Flags) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetSupportsOrSupportedByCells(float AngleZ) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetSupportsCells(float AngleZ) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetSupportedByCells(float AngleZ) const;
    
    UFUNCTION(BlueprintPure)
    FIntVector GetSizeCellsGeometric() const;
    
    UFUNCTION(BlueprintPure)
    FIntVector GetSizeCells() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetCells(float AngleZ, EGetCellFlags Flags) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetAdjacentCells() const;
    
};

