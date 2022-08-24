#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBuildingState.h"
#include "LODableActorInterface.h"
#include "HUDMarkerTargetInterface.h"
#include "OnLitWithFireStateChangedDelegate.h"
#include "GameFramework/Actor.h"
#include "DamageInfo.h"
#include "GameplayTagContainer.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "PoweredBuilding.h"
#include "EInteractAnimType.h"
#include "Perception/AISightTargetInterface.h"
#include "OnBuildingStateChangedDelegate.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "BuildingReplicatedData.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "BuildingRelocatedDelegateDelegate.h"
#include "MaterialToIngredientMapping.h"
#include "EBuildingTerrainConformMode.h"
#include "AllowableBuildingPenetration.h"
#include "EGetCellFlags.h"
#include "Chaos/ChaosEngineInterface.h"
#include "BuildingGridKey.h"
#include "BuildingGridLocation.h"
#include "RecipeRequirements.h"
#include "EWaveAttackState.h"
#include "BuildingPowerId.h"
#include "OnPendingBuildingMovedDelegate.h"
#include "EHUDMarkerType.h"
#include "EInteractionType.h"
#include "EBuildingFireType.h"
#include "GameplayTagContainer.h"
#include "EBuildingGridSurfaceType.h"
#include "EInteractionChannel.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGridBuildingId.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EInteractionState.h"
#include "Building.generated.h"

class UBuildingGridComponent;
class UMaterialSwapComponent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UBuildingShape;
class UBuildingLiteData;
class AWaveSpawnRegionVolume;
class UVisualEffect;
class UProceduralAnimationComponent;
class AController;
class UMeshComponent;
class UPersistenceComponent;
class UAIPerceptionStimuliSourceComponent;
class USceneComponent;
class ABuilding;
class UNavArea;
class UCustomPropertyComponent;
class UMaterialInterface;
class UHealthComponent;
class UObsidianIDComponent;
class UTeamComponent;
class UNavModifierComponent;
class UOCLComponent;
class UPrimitiveComponent;
class UBaseLODActor;
class UItem;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABuilding : public AActor, public IInteractableInterface, public IPersistentInterface, public IHUDMarkerTargetInterface, public INavAgentInterface, public IAISightTargetInterface, public IPoweredBuilding, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BuildingData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingShape* Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingLiteData* LiteData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ActualWorldRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingRelocatedDelegate OnBuildingRelocated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialToIngredientMapping> MaterialToIngredientMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingTerrainConformMode TerrainConform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoPlacementLocations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ManualPlacementLocations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PlacementSocketLocations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlacementSocketCenterOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 RequiredPointsOfContact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlope;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAllowableBuildingPenetration> GeneralPenetrationAllowance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAllowableBuildingPenetration> EnvironmentPenetrationAllowance;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> OverrideValidSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRelocatable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanCancel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanDemolish: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceMinorActorType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWaveSpawnRegionVolume* WaveRegion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPowerSource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPowerReceiver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPowerSwitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSwitchActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetworkPower, meta=(AllowPrivateAccess=true))
    float NetworkPower;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BaseIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildingStateChanged, meta=(AllowPrivateAccess=true))
    EBuildingState BuildingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedData, meta=(AllowPrivateAccess=true))
    FBuildingReplicatedData ReplicatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingGridLocation RegisteredGridLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBuildingPowerId RegisteredBuildingPowerId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingStateChanged OnBuildingStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPendingBuildingMoved OnPendingBuildingMovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLitWithFireStateChanged OnLitWithFireStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> RecipeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualEffect* DeconstructionVFX;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 HUDMarkerVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HUDMarkerColorVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDMarkerType BuiltHUDMakerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType UseInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingFireType FireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ShowDistanceOnHudMarker: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsLitWithFireChanged, meta=(AllowPrivateAccess=true))
    uint8 IsLitWithFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProvidesSupport: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFoundation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBaseBuilding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bThreatBuilding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeInstanced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAutoComplete: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWiggleOnDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDropToInventory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDropIngredientsWhenDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSightStimulus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysSightStimulus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString SourceCreatureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropIngredientsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedByCreatureDropIngredientsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BuildingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StructureWeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StructureSturdinessClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EBuildingGridSurfaceType AnchoredSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsValidWaveAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralAnimationComponent* ProceduralAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOCLComponent* BuildingPowerOCLComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* PerceptionSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FacingHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaterialSwapComponent* MaterialSwapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCustomPropertyComponent* CustomProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DissolveMaterials;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FBuildingGridBuildingId AttachedGridBuilding;
    
public:
    ABuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesCrenellation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Use(EInteractionChannel Channel, AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCollisionStateChange();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllMaterials();
    
private:
    UFUNCTION(BlueprintCallable)
    void UnsetPlacedThisFrame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridKey TransformSlot(const UBuildingGridComponent* Grid, FBuildingGridKey Slot) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void TickDebugDraw(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickCancelled(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartPlacementMode();
    
    UFUNCTION(BlueprintCallable)
    void SetUnderConstruction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStencilOnBuildingStateChanged(AActor* InInstigator, EBuildingState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHUDMarkerVariant(int32 Variant);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDMarkerColorVariant(int32 Variant);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartPlacementMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void SelfComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelfComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterBuildingChangedCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBuildingChangedCallback(FBuildingGridKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostRestoredFromInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostRegisteredToGrid();
    
    UFUNCTION(BlueprintCallable)
    void OnWaveAttackStateChanged(EWaveAttackState AttackState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetworkPower();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLitWithFireChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingStateChanged(EBuildingState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPowerSwitchOpenCloseStateChanged(bool bIsOpen, AActor* InInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessed();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEquipmentChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNetworkPowerChangedEvent(float Power);
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkPowerChanged(int32 NetworkId, float Power);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFragilityLevelChanged(int32 CurrentFragilityLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDefensePointActiveChanged(bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBuildingIsFragileChanged(UHealthComponent* Sender, bool bIsFragile);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBuildingDestroyed(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBuildingDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyPendingBuildingMoved(FBuildingGridLocation NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyBuildingChanged(FBuildingGridLocation Location);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleDestroyed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleDemolish();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleDeconstruction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleDamaged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleBuildingPlacement();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleBuildingCompletedSFX(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBuildingMoved(USceneComponent* AttachParent, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_DrawDebugCells() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplacementBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuilt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingReplaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingPlacedLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridKey InverseTransformSlot(const UBuildingGridComponent* Grid, FBuildingGridKey Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasParentGrid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTag(FGameplayTagContainer InTags) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFinishCollapseDestroy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EInteractionType GetUseInteractionType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseFacingHelper() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EInteractAnimType GetUseAnimType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalBurnTimeHours() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetSupportedByCells(const FBuildingGridLocation& At) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSturdiness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetSoftCells() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetShouldShowHUDMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuilding* GetReplacementBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRecipeRequirements> GetRemainingRequirements() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EInteractionState> GetRelocationEnabledState(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRecipeIngredientCountRequired(FDataTableRowHandle Ingredient);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRecipeIngredientCountRemaining(FDataTableRowHandle Ingredient);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRecipeIngredientCountAdded(FDataTableRowHandle Ingredient);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProvidesSupport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlacementValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBuildingGridComponent* GetParentGrid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIntVector> GetOverrideSnaps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObsidianIDComponent* GetObsidianIDComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFoundation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAnchoredCompleteTransitive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAnchor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHUDMarkerVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHUDMarkerType GetHUDMarkerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHUDMarkerDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHUDMarkerColorVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBuildingShape* GetGridShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetGridOriginTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGridOriginOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridLocation GetGridLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridKey GetGridKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBuildingGridBuildingId GetGridBuildingId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGeometricOriginOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetFlatFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetFlatFootprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetComboFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetComboFootprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollapseCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetCells(float AngleZ, EGetCellFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetCeilingFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetCeilingFootprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetBaseFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetBaseFootprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBuildingGridSurfaceType GetAnchoredSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetAdjacentCells() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActualWorldRotation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropNewItem(const FDataTableRowHandle& ItemData, FTransform AtTransform, UBaseLODActor* ThisActor, UBaseLODActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(UItem* Item, FTransform AtTransform, UBaseLODActor* ThisActor, UBaseLODActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCompletionCauseOverload() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateLightsAndParticles();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckAdditionalPlacementRequirements(FBuildingGridLocation At) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TEnumAsByte<EInteractionState> CanUse(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelBuild(AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddIngredients() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateRequiredItemCount(const FRecipeRequirements& Requirement) const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* BuildingCreateDynamicMaterialInstance(UMeshComponent* Target, int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintDropItems(UBaseLODActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateLightsAndParticles();
    
    
    // Fix for true pure virtual functions not being implemented
};

