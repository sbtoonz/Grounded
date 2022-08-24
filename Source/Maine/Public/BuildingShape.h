#pragma once
#include "CoreMinimal.h"
#include "EGetCellFlags.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "BuildingGridKey.h"
#include "BuildingShape.generated.h"

class UBuildingShape;

UCLASS(Blueprintable)
class MAINE_API UBuildingShape : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingShape* OverrideSupportedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> AppendSupportedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> RemoveSupportedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> SoftCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> OverrideSnaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ManualPlacementLocations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> OverrideFullCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> OverrideCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> OverrideCellsAdvanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> BlockFullCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> BlockCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridKey> BlockCellsAdvanced;
    
public:
    UBuildingShape();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCell(FBuildingGridKey Key, EGetCellFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetSupportsOrSupportedByCells(float AngleZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetSupportsCells(float AngleZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetSupportedByCells(float AngleZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetSizeCellsGeometric() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetSizeCells() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetCells(float AngleZ, EGetCellFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetAdjacentCells() const;
    
};

