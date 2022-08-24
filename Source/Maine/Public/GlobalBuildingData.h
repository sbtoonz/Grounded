#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "BuildingGridKey.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TagDataInt.h"
#include "CozinessLevel.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GlobalBuildingData.generated.h"

class UCurveFloat;
class USoundCue;
class UMaterialInterface;
class UStaticMesh;
class AActor;
class ACombinedLadder;
class UBuildingShape;
class AProductionBuilding;
class UObject;

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalBuildingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildingUnderConstructionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildingUnderConstructionInvalidMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> InvisibleMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingDestroySFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingDemolishSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingAddItemSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingPlaceSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingCancelSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingCompleteContructionSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* FacingHelperMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BuildingCompleteVOTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GridBuildingMovedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BuildingGridPrefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACombinedLadder> LadderSplinePrefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageWiggleAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FragileWiggleAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CancelDissolveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingShape* DefaultFullCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingShape* DefaultFullWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingShape* DefaultFullFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildSoundIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildSoundRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange WallMountValidNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange CeilingMountValidNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GridSubdivisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagDataInt> WeightClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagDataInt> SturdinessClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCozinessLevel> CozinessLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StructureCozinessCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CozinessCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmbedInGroundProtrusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CellExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector SubOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SubdivisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AProductionBuilding>> ConvertedProcessingBuildingClasses;
    
    UGlobalBuildingData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector RotateSnapCentered(FIntVector Snap, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector RotateSnap(FIntVector Snap, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridKey RotateSlotCentered(FBuildingGridKey Slot, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridKey RotateSlot(FBuildingGridKey Slot, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GridToLocal(FIntVector Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeight(const FGameplayTag& Class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSturdiness(const FGameplayTag& Class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSnapOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetSlotDebugShape(FBuildingGridKey GridLocation, FQuat& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetSlotBounds(FBuildingGridKey GridLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSturdiness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCozinessValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCozinessLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEffectiveCozinessValue(int32 InCoziness, int32 InStructural) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCozinessLevel(int32 InCoziness, int32 InStructural) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawDebugSnap(const UObject* WorldContextObject, const FTransform& GridTransform, FIntVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawDebugCell(const UObject* WorldContextObject, const FTransform& GridTransform, const FBuildingGridKey& Key, FColor Color) const;
    
};

