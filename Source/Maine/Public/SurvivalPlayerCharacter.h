#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SurvivalCharacter.h"
#include "PersistentInterface.h"
#include "CombatTrackerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "OnSpyGlassStateChangedDelegate.h"
#include "OnScanTargetChangedDelegate.h"
#include "CharacterPetChangedDelegateDelegate.h"
#include "OnPetTamedDelegateDelegate.h"
#include "ThirdPersonShadowVisuals.h"
#include "OnRestDelegate.h"
#include "OnInteractableChangedDelegateDelegate.h"
#include "OnEnemyChangedDelegateDelegate.h"
#include "OnInteractDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BuildingCanceledByCombatDelegateDelegate.h"
#include "FoliageKey.h"
#include "BuildingGridBuildingId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnPlayerColorChangedDelegateDelegate.h"
#include "ChatDelegateDelegate.h"
#include "OnUseItemDelegateDelegate.h"
#include "AttackResolutionDelegateDelegate.h"
#include "OnPlayerBusyInMenuChangedDelegateDelegate.h"
#include "EPlayerCharacterIdentity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EInteractionChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PlayerCombatTracker.h"
#include "EEquipmentSlot.h"
#include "EInteractHoldHandleType.h"
#include "EAttackResolutionType.h"
#include "ESizzleState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "DamageInfo.h"
#include "SurvivalPlayerCharacter.generated.h"

class UHaulingComponent;
class UBaseAppearanceData;
class UEquipmentComponent;
class UHeatHazardComponent;
class UCozinessEvaluatorComponent;
class UInteractableInterface;
class IInteractableInterface;
class UObject;
class AItemProcessingBuilding;
class UMainePhotoModeComponent;
class UBuildingPlacementComponent;
class UFPCOverlayComponent;
class UCustomizeInteractionComponent;
class UAnimMontage;
class UPersistenceComponent;
class UInventoryComponent;
class USurvivalComponent;
class UMaterialInterface;
class USoundSubmix;
class UStaminaComponent;
class UWirePlacementComponent;
class USkeletalMeshComponent;
class APetHomeBuilding;
class UScreenEffectComponent;
class UProximityInventoryComponent;
class UTransmissionReceiverComponent;
class AActor;
class ASurvivalCreature;
class ALootBag;
class UTelemetryComponent;
class UItem;
class AController;
class ABuilding;
class APawn;
class UBaseLODActor;
class UCreatureLODActor;

UCLASS()
class MAINE_API ASurvivalPlayerCharacter : public ASurvivalCharacter, public ICombatTrackerInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSpyGlassStateChanged OnSpyGlassStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnScanTargetChanged OnScanTargetChanged;
    
    UPROPERTY(EditDefaultsOnly)
    float SpyGlassModeInputRotationScale;
    
    UPROPERTY(EditDefaultsOnly)
    float SpyGlassModeStickInputRotationScale;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool IsInSpyGlassMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bOverrideSpyGlassDOFRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bOverrideSpyGlassDOFAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SpyGlassDOFBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SpyGlassDOFBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SpyGlassFOV;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BestiaryTargetScanRange;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterPetChangedDelegate OnActivePetChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPetTamedDelegate OnPetTamed;
    
    UPROPERTY(BlueprintAssignable)
    FOnRest OnRest;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractableChangedDelegate OnInteractableChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnemyChangedDelegate OnEnemyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractDelegate OnInteract;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TScriptInterface<IInteractableInterface> InteractableInRange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FFoliageKey InteractableFoliageKeyInRange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FBuildingGridBuildingId InteractableBuildingKeyInRange;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractableChangedDelegate OnAttackTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TScriptInterface<IInteractableInterface> AttackTargetInRange;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerColorChangedDelegate OnPlayerColorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FChatDelegate OnChat;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnUseItemDelegate OnUseItem;
    
    UPROPERTY(BlueprintAssignable)
    FAttackResolutionDelegate OnAttackResolutionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerBusyInMenuChangedDelegate OnPlayerBusyInMenuChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingCanceledByCombatDelegate OnBuildingCanceledByCombat;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMainePhotoModeComponent* PhotoModeComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UFPCOverlayComponent* FPCOverlayComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UHeatHazardComponent* HeatHazardComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCustomizeInteractionComponent* CustomizeInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* SpyGlassMontage;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlayerTakesDamageUnpossessed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_PlayerBusyInMenu)
    bool bPlayerBusyInMenu;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* DropItemMontage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USurvivalComponent* SurvivalComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHaulingComponent* HaulingComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBuildingPlacementComponent* BuildingPlacementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWirePlacementComponent* WirePlacementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* HeadArmorMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ChestArmorMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ArmsArmorMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* LegsArmorMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* HairMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ThirdPersonShadowCharacterMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ThirdPersonShadowBackpackMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ThirdPersonShadowSCABMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ThirdPersonShadowHeadMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ThirdPersonShadowHairMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UScreenEffectComponent* ScreenEffectComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCozinessEvaluatorComponent* CozinessEvaluatorComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProximityInventoryComponent* ProximityInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTransmissionReceiverComponent* TransmissionReceiverComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPlayerCharacterIdentity CharacterIdentity;
    
    UPROPERTY(EditDefaultsOnly)
    float InteractTraceLength;
    
    UPROPERTY(Transient)
    uint8 bIsInteracting: 1;
    
    UPROPERTY(Transient)
    uint8 bIsInteractHoldAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float InteractTimerMax;
    
    UPROPERTY(EditDefaultsOnly)
    float CancelInteractTimerMax;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* CurrentInteractable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInteractionChannel CurrentInteractionChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThirdPersonZeroDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThirdPersonBufferDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RunFOVAdjustment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RunFOVAdjustmentSpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PlayerColor)
    FColor PlayerColor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerGuid)
    FGuid PlayerGuid;
    
    UPROPERTY(Replicated, Transient)
    bool RequestingRest;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ALootBag> Backpack;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Interior)
    bool bInterior;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FireLightAnim;
    
    UPROPERTY(EditAnywhere)
    UBaseAppearanceData* HairAppearance;
    
    UPROPERTY(EditAnywhere)
    USoundSubmix* GasMaskSubMix;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPlayerCombatTracker> CombatTrackers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentPetFull)
    ASurvivalCreature* CurrentPetFull;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* SpyGlassBlurMaterial;
    
private:
    UPROPERTY(Transient)
    AActor* WaveBlockingBlendTrigger;
    
    UPROPERTY()
    TMap<EEquipmentSlot, FThirdPersonShadowVisuals> ThirdPersonShadowEquipment;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTelemetryComponent* TelemetryComponent;
    
    ASurvivalPlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryPickupItemRow(FDataTableRowHandle ItemRow, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    bool TryPickupItem(UItem* Item, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    EAttackResolutionType TestCurrentAttack();
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowTargetInteractionInterface(EInteractionChannel Channel);
    
protected:
    UFUNCTION()
    void SetSpyGlassOverlay(bool bEnabled);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerThrowItem();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTeleportPartyNear();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStoreOrSwapPet(APetHomeBuilding* WithBuilding);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartThrow();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStandup();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerShowPlayerIsBusyInMenu(bool PlayerBusyInMenu);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetWaveBlockingBlendTrigger(AActor* BlendTrigger);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRespawn(AActor* RestActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectAmmoType(UItem* AmmoItem);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRevive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestTechTreeRecipePurchase(FDataTableRowHandle TechTreeRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestSpawnWave(FGameplayTag Tag, int32 Weight, bool Finalize, UInventoryComponent* SpawnerInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestRest(AActor* aRestActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestProcessItem(AItemProcessingBuilding* ProcessingBuilding, UItem* ItemToProcess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestHUDMarkerUpdate(ABuilding* Building, int32 IconVariant, int32 ColorVariant);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestCancelProcessItem(AItemProcessingBuilding* ProcessingBuilding, UItem* ItemToCancel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepairItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRenamePet(ASurvivalCreature* Creature, const FText& NewName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveWaypoint();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveResourceWaypoint();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReleaseThrow();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReleaseAttack();
    
    UFUNCTION(Reliable, Server)
    void ServerPowerSwitchPressed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlaceResourceWaypoint(FVector WorldLocation);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOpenPetInventory();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerKill();
    
    UFUNCTION(Reliable, Server)
    void ServerInteractWirePlacement();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerInteractRelocate();
    
    UFUNCTION(Reliable, Server)
    void ServerInputPlaceMapMarkerPressed();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHotDrop(UItem* Item);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHoldAttack();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleInteractCancel();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleInteract();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleHoldInteractFoliage(UObject* InteractableObject, FFoliageKey MatchingFoliageKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleHoldInteractCancelFoliage(UObject* InteractableObject, FFoliageKey MatchingFoliageKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleHoldInteractCancelBuilding(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleHoldInteractCancelActor(UObject* InteractableObject);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleHoldInteractBuilding(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleHoldInteractActor(UObject* InteractableObject);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleFireInteract();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleDrop(UObject* InteractableObject);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerFullRestore();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitSpyGlassMode();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerExitSplineClimbing();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerExitMotionEater();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnterSpyGlassMode();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndHoldInteractFoliage(UObject* InteractableObject, FFoliageKey MatchingFoliageKey, EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndHoldInteractBuilding(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey, EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndHoldInteractActor(UObject* InteractableObject, EInteractHoldHandleType HoldInteractType);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearWaveSpawnerInventory(UInventoryComponent* SpawnerInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatWalk();
    
    UFUNCTION(Reliable, Server)
    void ServerCheatTryKill(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatTeleport(FVector Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatSetBonusEnhancementLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatGod();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatGhost();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatFullRestore();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatFly();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatFast(float Speed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatBuildAllBuildings();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerBeginHoldInteract(UObject* InteractableObject);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddWaypoint(FVector Location);
    
    UFUNCTION()
    ASurvivalCharacter* ScanForBestiaryTarget(bool bGiveBestiaryItem);
    
    UFUNCTION(BlueprintPure)
    bool RequestedRest() const;
    
protected:
    UFUNCTION()
    void OnWidgetStackChanged();
    
    UFUNCTION()
    void OnViewControlBlendCompleteEvent();
    
public:
    UFUNCTION()
    void OnRep_PlayerGuid();
    
    UFUNCTION()
    void OnRep_PlayerColor();
    
protected:
    UFUNCTION()
    void OnRep_PlayerBusyInMenu();
    
public:
    UFUNCTION()
    void OnRep_Interior();
    
private:
    UFUNCTION()
    void OnRep_CurrentPetFull();
    
protected:
    UFUNCTION()
    void OnGliderMovementModeChanged(bool IsGliding);
    
    UFUNCTION()
    void OnGameModeChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerDisconnected();
    
    UFUNCTION(BlueprintCallable)
    void NotifyInteractError(UObject* Interactable, FText WarningText);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastStopWeaponMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastSetWeaponMontageNextSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastPlayWeaponMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastFixupPoseableClone(APawn* OriginalPawn);
    
    UFUNCTION(Exec)
    void KillMe();
    
    UFUNCTION(BlueprintPure)
    bool IsThrowing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetInteractionEnabled(EInteractionChannel Channel);
    
    UFUNCTION(BlueprintPure)
    bool IsRequestedInventory(const UInventoryComponent* Inventory) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCinematicMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChargingThrow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChargingAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool HasWeapon(bool bCheckVisible) const;
    
    UFUNCTION(BlueprintPure)
    bool HasOffhand(bool bCheckVisible) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasLitFire();
    
protected:
    UFUNCTION()
    void HandleSizzleStateChanged(ESizzleState PreviousState, ESizzleState CurrentState);
    
private:
    UFUNCTION()
    void HandleEquipmentVisualsChanged(UEquipmentComponent* Sender, UItem* Item);
    
protected:
    UFUNCTION()
    void HandleEquipmentChanged(UItem* CurrentItem, EEquipmentSlot Slot);
    
private:
    UFUNCTION()
    void HandleCurrentPetLODActorConvertedToProxyActor(UBaseLODActor* LODActor);
    
    UFUNCTION()
    void HandleCurrentPetLODActorConvertedToFullActor(UBaseLODActor* LODActor);
    
protected:
    UFUNCTION()
    void HandleCozinessLevelChanged(UCozinessEvaluatorComponent* Sender, int32 OldLevel);
    
public:
    UFUNCTION()
    AActor* GetWaveBlockingBlendTrigger() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetSCABMesh() const;
    
    UFUNCTION(BlueprintPure)
    ABuilding* GetPendingBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsPlacingBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInteracting() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsCancellingInteract() const;
    
    UFUNCTION(BlueprintPure)
    float GetInteractTimerMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetInteractTimer() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHeadMesh() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDropItemDirection() const;
    
    UFUNCTION(BlueprintPure)
    ASurvivalCreature* GetCurrentPetFull() const;
    
    UFUNCTION(BlueprintPure)
    UCreatureLODActor* GetCurrentPet() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerCharacterIdentity GetCharacterIdentity() const;
    
    UFUNCTION(BlueprintPure)
    float GetCancelInteractTimerMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetCancelInteractTimer() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetBackPackMesh() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimPitch() const;
    
    UFUNCTION(Exec)
    void Fast(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void ExitSpyGlassMode();
    
    UFUNCTION(BlueprintCallable)
    void ExitPlaceBuildingMode(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void EnterSpyGlassMode();
    
    UFUNCTION(BlueprintCallable)
    void EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable);
    
protected:
    UFUNCTION()
    void DamagedServerOnlyCallback(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientUpdateThirdPersonShadowEquipment();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSetEnemy(ASurvivalCharacter* Enemy);
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyStorageFull();
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyScanTarget(ASurvivalCharacter* ScanTarget);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientNotifyPetTamed(ASurvivalCreature* Pet);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientNotifyInventoryFull();
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyHaulingFull();
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyDropStorageFull();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientInitBaseShadowMeshes();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientExitSpyGlassMode();
    
    UFUNCTION(Client, Reliable)
    void ClientEnterSpyGlassMode();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientEndHoldInteraction(EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(Client, Reliable)
    void ClientClearInteractableInRange();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClientCheatSetBonusEnhancementLevel(FGameplayTag Type, int32 Level);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientBeginHoldInteract(UObject* InteractableObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheatTryKill();
    
    UFUNCTION(BlueprintCallable)
    void CheatBuildingDebugLog();
    
    UFUNCTION(BlueprintPure)
    bool CanThrowItem() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLightFire() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanInteractWith(UObject* Interactable, EInteractionChannel InteractionChannel);
    
    UFUNCTION(BlueprintPure)
    bool CanInteract();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanDropItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastBuildingCanceledByCombat();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCameraForInteraction(UObject* InteractableActor, bool IsEnteringInteraction, float BlendTime, float BlendExp);
    
    UFUNCTION(Exec)
    void AchievementDebug(bool bShow);
    
    
    // Fix for true pure virtual functions not being implemented
};

