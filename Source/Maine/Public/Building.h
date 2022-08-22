#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LODableActorInterface.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "HUDMarkerTargetInterface.h"
#include "EHUDMarkerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISightTargetInterface -FallbackName=AISightTargetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentInterface -FallbackName=NavAgentInterface
#include "EInteractAnimType.h"
#include "PoweredBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BuildingGridBuildingId.h"
#include "BuildingRelocatedDelegateDelegate.h"
#include "BuildingGridKey.h"
#include "BuildingGridLocation.h"
#include "MaterialToIngredientMapping.h"
#include "EBuildingTerrainConformMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AllowableBuildingPenetration.h"
#include "EGetCellFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EBuildingFireType.h"
#include "EBuildingState.h"
#include "BuildingReplicatedData.h"
#include "EWaveAttackState.h"
#include "BuildingPowerId.h"
#include "OnBuildingStateChangedDelegate.h"
#include "OnPendingBuildingMovedDelegate.h"
#include "EBuildingGridSurfaceType.h"
#include "OnLitWithFireStateChangedDelegate.h"
#include "EInteractionType.h"
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EInteractionState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EInteractionChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RecipeRequirements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "Building.generated.h"

class UNavArea;
class UStaticMeshComponent;
class UPrimitiveComponent;
class UBuildingShape;
class AWaveSpawnRegionVolume;
class UBuildingLiteData;
class UMaterialInterface;
class UHealthComponent;
class UPersistenceComponent;
class UVisualEffect;
class UNavModifierComponent;
class UMaterialInstanceDynamic;
class UMeshComponent;
class ABuilding;
class USceneComponent;
class UTeamComponent;
class UProceduralAnimationComponent;
class UObsidianIDComponent;
class UBaseLODActor;
class UOCLComponent;
class UAIPerceptionStimuliSourceComponent;
class UBuildingGridComponent;
class UMaterialSwapComponent;
class UCustomPropertyComponent;
class AController;
class UItem;

UCLASS(Abstract)
class MAINE_API ABuilding : public AActor, public IInteractableInterface, public IPersistentInterface, public IHUDMarkerTargetInterface, public INavAgentInterface, public IAISightTargetInterface, public IPoweredBuilding, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FDataTableRowHandle BuildingData;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UBuildingShape* Shape;
    
    UPROPERTY(VisibleDefaultsOnly)
    UBuildingLiteData* LiteData;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float ActualWorldRotation;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingRelocatedDelegate OnBuildingRelocated;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FMaterialToIngredientMapping> MaterialToIngredientMappings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EBuildingTerrainConformMode TerrainConform;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAutoPlacementLocations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FVector> ManualPlacementLocations;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FVector> PlacementSocketLocations;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FVector PlacementSocketCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 RequiredPointsOfContact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSlope;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FAllowableBuildingPenetration> GeneralPenetrationAllowance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FAllowableBuildingPenetration> EnvironmentPenetrationAllowance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> OverrideValidSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsRelocatable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanCancel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanDemolish: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bForceMinorActorType: 1;
    
    UPROPERTY(Transient)
    AWaveSpawnRegionVolume* WaveRegion;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsPowerSource: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsPowerReceiver: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsPowerSwitch: 1;
    
    UPROPERTY(Transient)
    uint8 bIsSwitchActive: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PowerValue;
    
    UPROPERTY(ReplicatedUsing=OnRep_NetworkPower)
    float NetworkPower;
    
public:
    UPROPERTY(Transient)
    int32 BaseIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, ReplicatedUsing=OnRep_BuildingStateChanged)
    EBuildingState BuildingState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedData)
    FBuildingReplicatedData ReplicatedData;
    
    UPROPERTY(Transient)
    FBuildingGridLocation RegisteredGridLocation;
    
    UPROPERTY(Replicated)
    FBuildingPowerId RegisteredBuildingPowerId;
    
    UPROPERTY(BlueprintAssignable)
    FOnBuildingStateChanged OnBuildingStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPendingBuildingMoved OnPendingBuildingMovedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLitWithFireStateChanged OnLitWithFireStateChangedDelegate;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Items)
    TArray<FDataTableRowHandle> RecipeItems;
    
    UPROPERTY(Export, Transient)
    TArray<UMeshComponent*> MeshList;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UVisualEffect* DeconstructionVFX;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 HUDMarkerVariant;
    
    UPROPERTY(EditAnywhere, Replicated)
    int32 HUDMarkerColorVariant;
    
    UPROPERTY(EditAnywhere)
    EHUDMarkerType BuiltHUDMakerType;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractionType UseInteractionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBuildingFireType FireType;
    
    UPROPERTY(EditAnywhere)
    uint8 ShowDistanceOnHudMarker: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsLitWithFireChanged)
    uint8 IsLitWithFire: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bProvidesSupport: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsFoundation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBaseBuilding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bThreatBuilding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanBeInstanced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bCanAutoComplete: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bWiggleOnDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bDropToInventory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bDropIngredientsWhenDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bSightStimulus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAlwaysSightStimulus: 1;
    
    UPROPERTY(Replicated, Transient)
    FString SourceCreatureName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DropIngredientsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DestroyedByCreatureDropIngredientsPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer BuildingTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag StructureWeightClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag StructureSturdinessClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WeightMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UNavArea> NavAreaClass;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EBuildingGridSurfaceType AnchoredSurface;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsValidWaveAnchor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProceduralAnimationComponent* ProceduralAnimationComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOCLComponent* BuildingPowerOCLComponent;
    
    UPROPERTY(Export)
    UAIPerceptionStimuliSourceComponent* PerceptionSourceComponent;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* FacingHelperComponent;
    
    UPROPERTY(Export)
    UMaterialSwapComponent* MaterialSwapComponent;
    
    UPROPERTY(Export, Transient)
    UCustomPropertyComponent* CustomProperties;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> DissolveMaterials;
    
private:
    UPROPERTY(Replicated, Transient)
    FBuildingGridBuildingId AttachedGridBuilding;
    
public:
    ABuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool UsesCrenellation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Use(EInteractionChannel Channel, AActor* InstigatedBy);
    
    UFUNCTION(BlueprintNativeEvent)
    void UpdateCollisionStateChange();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllMaterials();
    
private:
    UFUNCTION()
    void UnsetPlacedThisFrame();
    
public:
    UFUNCTION(BlueprintPure)
    FBuildingGridKey TransformSlot(const UBuildingGridComponent* Grid, FBuildingGridKey Slot) const;
    
private:
    UFUNCTION()
    void TickDebugDraw(float DeltaTime);
    
    UFUNCTION()
    void TickCancelled(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartPlacementMode();
    
    UFUNCTION(BlueprintCallable)
    void SetUnderConstruction();
    
protected:
    UFUNCTION()
    void SetStencilOnBuildingStateChanged(AActor* InInstigator, EBuildingState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHUDMarkerVariant(int32 Variant);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDMarkerColorVariant(int32 Variant);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartPlacementMode();
    
public:
    UFUNCTION()
    void SelfComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void SelfComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintNativeEvent)
    void RegisterBuildingChangedCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBuildingChangedCallback(FBuildingGridKey Key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostRestoredFromInstance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostRegisteredToGrid();
    
    UFUNCTION()
    void OnWaveAttackStateChanged(EWaveAttackState AttackState);
    
protected:
    UFUNCTION()
    void OnRep_ReplicatedData();
    
    UFUNCTION()
    void OnRep_NetworkPower();
    
    UFUNCTION()
    void OnRep_Items();
    
    UFUNCTION()
    void OnRep_IsLitWithFireChanged();
    
    UFUNCTION()
    void OnRep_BuildingStateChanged(EBuildingState OldState);
    
    UFUNCTION()
    void OnPowerSwitchOpenCloseStateChanged(bool bIsOpen, AActor* InInstigator);
    
public:
    UFUNCTION()
    void OnPlayerPossessed();
    
    UFUNCTION()
    void OnPlayerEquipmentChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNetworkPowerChangedEvent(float Power);
    
    UFUNCTION()
    void OnNetworkPowerChanged(int32 NetworkId, float Power);
    
protected:
    UFUNCTION()
    void OnFragilityLevelChanged(int32 CurrentFragilityLevel);
    
public:
    UFUNCTION()
    void OnDefensePointActiveChanged(bool bActive);
    
protected:
    UFUNCTION()
    void OnBuildingIsFragileChanged(UHealthComponent* Sender, bool bIsFragile);
    
    UFUNCTION()
    void OnBuildingHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBuildingDestroyed(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBuildingDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void NotifyPendingBuildingMoved(FBuildingGridLocation NewLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyBuildingChanged(FBuildingGridLocation Location);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleDestroyed();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleDemolish();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleDeconstruction();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleDamaged();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleBuildingPlacement();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleBuildingCompletedSFX(AActor* InstigatedBy);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastBuildingMoved(USceneComponent* AttachParent, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_DrawDebugCells() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUnderConstruction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReplacementBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaced() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverloaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuilt() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingReplaced() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingPlacedLocal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingPlaced() const;
    
    UFUNCTION(BlueprintPure)
    FBuildingGridKey InverseTransformSlot(const UBuildingGridComponent* Grid, FBuildingGridKey Slot) const;
    
    UFUNCTION(BlueprintPure)
    bool HasTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasParentGrid() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyTag(FGameplayTagContainer InTags) const;
    
protected:
    UFUNCTION()
    void HandleFinishCollapseDestroy();
    
public:
    UFUNCTION(BlueprintPure)
    float GetWeight() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EInteractionType GetUseInteractionType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseFacingHelper() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EInteractAnimType GetUseAnimType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalBurnTimeHours() const;
    
public:
    UFUNCTION(BlueprintPure)
    UTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetSupportedByCells(const FBuildingGridLocation& At) const;
    
    UFUNCTION(BlueprintPure)
    float GetSturdiness() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetSoftCells() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool GetShouldShowHUDMarker() const;
    
    UFUNCTION(BlueprintPure)
    ABuilding* GetReplacementBuilding() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRecipeRequirements> GetRemainingRequirements() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EInteractionState> GetRelocationEnabledState(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRecipeIngredientCountRequired(FDataTableRowHandle Ingredient);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRecipeIngredientCountRemaining(FDataTableRowHandle Ingredient);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRecipeIngredientCountAdded(FDataTableRowHandle Ingredient);
    
    UFUNCTION(BlueprintPure)
    bool GetProvidesSupport() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlacementValid() const;
    
    UFUNCTION(BlueprintPure)
    UBuildingGridComponent* GetParentGrid() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FIntVector> GetOverrideSnaps() const;
    
    UFUNCTION(BlueprintPure)
    UObsidianIDComponent* GetObsidianIDComponent() const;
    
    UFUNCTION(BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsFoundation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsAnchoredCompleteTransitive() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsAnchor() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHUDMarkerVariant() const;
    
    UFUNCTION(BlueprintPure)
    EHUDMarkerType GetHUDMarkerType() const;
    
    UFUNCTION(BlueprintPure)
    FString GetHUDMarkerDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHUDMarkerColorVariant() const;
    
    UFUNCTION(BlueprintPure)
    UHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintPure)
    UBuildingShape* GetGridShape() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGridOriginTransform() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGridOriginOffset() const;
    
    UFUNCTION(BlueprintPure)
    FBuildingGridLocation GetGridLocation() const;
    
    UFUNCTION(BlueprintPure)
    FBuildingGridKey GetGridKey() const;
    
    UFUNCTION(BlueprintPure)
    FBuildingGridBuildingId GetGridBuildingId() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGeometricOriginOffset() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetFlatFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetFlatFootprint() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetComboFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetComboFootprint() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCollapseCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetCells(float AngleZ, EGetCellFlags Flags) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetCeilingFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetCeilingFootprint() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetBaseFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetBaseFootprint() const;
    
    UFUNCTION(BlueprintPure)
    EBuildingGridSurfaceType GetAnchoredSurface() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetAdjacentCells() const;
    
    UFUNCTION(BlueprintPure)
    float GetActualWorldRotation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropNewItem(const FDataTableRowHandle& ItemData, FTransform AtTransform, UBaseLODActor* ThisActor, UBaseLODActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(UItem* Item, FTransform AtTransform, UBaseLODActor* ThisActor, UBaseLODActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintPure)
    bool DoesCompletionCauseOverload() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateLightsAndParticles();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckAdditionalPlacementRequirements(FBuildingGridLocation At) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TEnumAsByte<EInteractionState> CanUse(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelBuild(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    bool CanAddIngredients() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    int32 CalculateRequiredItemCount(const FRecipeRequirements& Requirement) const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* BuildingCreateDynamicMaterialInstance(UMeshComponent* Target, int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintDropItems(UBaseLODActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateLightsAndParticles();
    
    
    // Fix for true pure virtual functions not being implemented
};

