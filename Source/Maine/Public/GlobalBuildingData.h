#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "TagDataInt.h"
#include "CozinessLevel.h"
#include "BuildingGridKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "GlobalBuildingData.generated.h"

class UObject;
class UMaterialInterface;
class USoundCue;
class UStaticMesh;
class UCurveFloat;
class AActor;
class ACombinedLadder;
class UBuildingShape;
class AProductionBuilding;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalBuildingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* BuildingUnderConstructionMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* BuildingUnderConstructionInvalidMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> InvisibleMaterials;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* BuildingDestroySFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* BuildingDemolishSFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* BuildingAddItemSFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* BuildingPlaceSFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* BuildingCancelSFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* BuildingCompleteContructionSFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* FacingHelperMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag BuildingCompleteVOTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* GridBuildingMovedCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> BuildingGridPrefab;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ACombinedLadder> LadderSplinePrefab;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DamageWiggleAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* FragileWiggleAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* CancelDissolveAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildingDestroyTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBuildingShape* DefaultFullCell;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBuildingShape* DefaultFullWall;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBuildingShape* DefaultFullFloor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector BaseCellSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSoundIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildSoundRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFloatRange WallMountValidNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFloatRange CeilingMountValidNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIntVector GridSubdivisions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTagDataInt> WeightClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTagDataInt> SturdinessClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCozinessLevel> CozinessLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StructureCozinessCap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CozinessCheckRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmbedInGroundProtrusion;
    
    UPROPERTY(Transient)
    FVector CellSize;
    
    UPROPERTY(Transient)
    FVector CellExtents;
    
    UPROPERTY(Transient)
    FIntVector SubOffset;
    
    UPROPERTY(Transient)
    FVector SubdivisionOffset;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AProductionBuilding>> ConvertedProcessingBuildingClasses;
    
    UGlobalBuildingData();
    UFUNCTION(BlueprintPure)
    FIntVector RotateSnapCentered(FIntVector Snap, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintPure)
    FIntVector RotateSnap(FIntVector Snap, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintPure)
    FBuildingGridKey RotateSlotCentered(FBuildingGridKey Slot, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintPure)
    FBuildingGridKey RotateSlot(FBuildingGridKey Slot, FBuildingGridKey Origin, float Angle) const;
    
    UFUNCTION(BlueprintPure)
    FVector GridToLocal(FIntVector Position) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeight(const FGameplayTag& Class) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSturdiness(const FGameplayTag& Class) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSnapOffset() const;
    
    UFUNCTION(BlueprintPure)
    FBox GetSlotDebugShape(FBuildingGridKey GridLocation, FQuat& Rotation) const;
    
    UFUNCTION(BlueprintPure)
    FBox GetSlotBounds(FBuildingGridKey GridLocation) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxWeight() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSturdiness() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxCozinessValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxCozinessLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEffectiveCozinessValue(int32 InCoziness, int32 InStructural) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCozinessLevel(int32 InCoziness, int32 InStructural) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawDebugSnap(const UObject* WorldContextObject, const FTransform& GridTransform, FIntVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawDebugCell(const UObject* WorldContextObject, const FTransform& GridTransform, const FBuildingGridKey& Key, FColor Color) const;
    
};

