#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SurvivalCharacter.h"
#include "OnPetTamedDelegateDelegate.h"
#include "EInteractHoldHandleType.h"
#include "PersistentInterface.h"
#include "CombatTrackerInterface.h"
#include "OnSpyGlassStateChangedDelegate.h"
#include "OnScanTargetChangedDelegate.h"
#include "CharacterPetChangedDelegateDelegate.h"
#include "ThirdPersonShadowVisuals.h"
#include "OnRestDelegate.h"
#include "OnInteractableChangedDelegateDelegate.h"
#include "OnEnemyChangedDelegateDelegate.h"
#include "OnInteractDelegateDelegate.h"
#include "FoliageKey.h"
#include "BuildingGridBuildingId.h"
#include "OnPlayerColorChangedDelegateDelegate.h"
#include "ChatDelegateDelegate.h"
#include "OnUseItemDelegateDelegate.h"
#include "AttackResolutionDelegateDelegate.h"
#include "OnPlayerBusyInMenuChangedDelegateDelegate.h"
#include "BuildingCanceledByCombatDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ESizzleState.h"
#include "EEquipmentSlot.h"
#include "EPlayerCharacterIdentity.h"
#include "EInteractionChannel.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCombatTracker.h"
#include "Engine/DataTable.h"
#include "EAttackResolutionType.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DamageInfo.h"
#include "SurvivalPlayerCharacter.generated.h"

class UMaterialInterface;
class UMainePhotoModeComponent;
class ABuilding;
class UBuildingPlacementComponent;
class UCozinessEvaluatorComponent;
class UInteractableInterface;
class IInteractableInterface;
class ALootBag;
class UBaseAppearanceData;
class USkeletalMeshComponent;
class UCustomizeInteractionComponent;
class UFPCOverlayComponent;
class UHeatHazardComponent;
class AActor;
class UAnimMontage;
class UPersistenceComponent;
class UInventoryComponent;
class UStaminaComponent;
class UEquipmentComponent;
class USurvivalComponent;
class UProximityInventoryComponent;
class UHaulingComponent;
class UWirePlacementComponent;
class UScreenEffectComponent;
class UObject;
class UTransmissionReceiverComponent;
class UTelemetryComponent;
class USoundSubmix;
class AItemProcessingBuilding;
class ASurvivalCreature;
class UItem;
class APetHomeBuilding;
class APawn;
class UBaseLODActor;
class UCreatureLODActor;
class AController;

UCLASS(Blueprintable)
class MAINE_API ASurvivalPlayerCharacter : public ASurvivalCharacter, public ICombatTrackerInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpyGlassStateChanged OnSpyGlassStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScanTargetChanged OnScanTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpyGlassModeInputRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpyGlassModeStickInputRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsInSpyGlassMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSpyGlassDOFRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSpyGlassDOFAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpyGlassDOFBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpyGlassDOFBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpyGlassFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BestiaryTargetScanRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPetChangedDelegate OnActivePetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPetTamedDelegate OnPetTamed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRest OnRest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableChangedDelegate OnInteractableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyChangedDelegate OnEnemyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IInteractableInterface> InteractableInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFoliageKey InteractableFoliageKeyInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingGridBuildingId InteractableBuildingKeyInRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableChangedDelegate OnAttackTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IInteractableInterface> AttackTargetInRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerColorChangedDelegate OnPlayerColorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatDelegate OnChat;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUseItemDelegate OnUseItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackResolutionDelegate OnAttackResolutionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBusyInMenuChangedDelegate OnPlayerBusyInMenuChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingCanceledByCombatDelegate OnBuildingCanceledByCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainePhotoModeComponent* PhotoModeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFPCOverlayComponent* FPCOverlayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHeatHazardComponent* HeatHazardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCustomizeInteractionComponent* CustomizeInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpyGlassMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerTakesDamageUnpossessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerBusyInMenu, meta=(AllowPrivateAccess=true))
    bool bPlayerBusyInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DropItemMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USurvivalComponent* SurvivalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaulingComponent* HaulingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildingPlacementComponent* BuildingPlacementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWirePlacementComponent* WirePlacementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HeadArmorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ChestArmorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ArmsArmorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LegsArmorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThirdPersonShadowCharacterMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThirdPersonShadowBackpackMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThirdPersonShadowSCABMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThirdPersonShadowHeadMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThirdPersonShadowHairMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScreenEffectComponent* ScreenEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCozinessEvaluatorComponent* CozinessEvaluatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProximityInventoryComponent* ProximityInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTransmissionReceiverComponent* TransmissionReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerCharacterIdentity CharacterIdentity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInteracting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInteractHoldAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractTimerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelInteractTimerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EInteractionChannel CurrentInteractionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonZeroDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonBufferDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunFOVAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunFOVAdjustmentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerColor, meta=(AllowPrivateAccess=true))
    FColor PlayerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerGuid, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool RequestingRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALootBag> Backpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Interior, meta=(AllowPrivateAccess=true))
    bool bInterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireLightAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAppearanceData* HairAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* GasMaskSubMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerCombatTracker> CombatTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPetFull, meta=(AllowPrivateAccess=true))
    ASurvivalCreature* CurrentPetFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SpyGlassBlurMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WaveBlockingBlendTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlot, FThirdPersonShadowVisuals> ThirdPersonShadowEquipment;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTelemetryComponent* TelemetryComponent;
    
    ASurvivalPlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryPickupItemRow(FDataTableRowHandle ItemRow, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    bool TryPickupItem(UItem* Item, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    EAttackResolutionType TestCurrentAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowTargetInteractionInterface(EInteractionChannel Channel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpyGlassOverlay(bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerThrowItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportPartyNear();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStoreOrSwapPet(APetHomeBuilding* WithBuilding);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartThrow();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseThrow();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPowerSwitchPressed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlaceResourceWaypoint(FVector WorldLocation);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOpenPetInventory();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKill();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInteractWirePlacement();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInteractRelocate();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInputPlaceMapMarkerPressed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHotDrop(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHoldAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleInteractCancel();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleInteract();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHoldInteractFoliage(UObject* InteractableObject, FFoliageKey MatchingFoliageKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHoldInteractCancelFoliage(UObject* InteractableObject, FFoliageKey MatchingFoliageKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHoldInteractCancelBuilding(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHoldInteractCancelActor(UObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHoldInteractBuilding(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHoldInteractActor(UObject* InteractableObject);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleFireInteract();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleDrop(UObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFullRestore();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitSpyGlassMode();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitSplineClimbing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitMotionEater();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnterSpyGlassMode();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndHoldInteractFoliage(UObject* InteractableObject, FFoliageKey MatchingFoliageKey, EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndHoldInteractBuilding(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey, EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndHoldInteractActor(UObject* InteractableObject, EInteractHoldHandleType HoldInteractType);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearWaveSpawnerInventory(UInventoryComponent* SpawnerInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheatWalk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
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
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginHoldInteract(UObject* InteractableObject);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddWaypoint(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    ASurvivalCharacter* ScanForBestiaryTarget(bool bGiveBestiaryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequestedRest() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetStackChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnViewControlBlendCompleteEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerGuid();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerColor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerBusyInMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Interior();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPetFull();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGliderMovementModeChanged(bool IsGliding);
    
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerDisconnected();
    
    UFUNCTION(BlueprintCallable)
    void NotifyInteractError(UObject* Interactable, FText WarningText);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastStopWeaponMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastSetWeaponMontageNextSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastPlayWeaponMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFixupPoseableClone(APawn* OriginalPawn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillMe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetInteractionEnabled(EInteractionChannel Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestedInventory(const UInventoryComponent* Inventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematicMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeapon(bool bCheckVisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOffhand(bool bCheckVisible) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasLitFire();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSizzleStateChanged(ESizzleState PreviousState, ESizzleState CurrentState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentVisualsChanged(UEquipmentComponent* Sender, UItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentChanged(UItem* CurrentItem, EEquipmentSlot Slot);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentPetLODActorConvertedToProxyActor(UBaseLODActor* LODActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentPetLODActorConvertedToFullActor(UBaseLODActor* LODActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCozinessLevelChanged(UCozinessEvaluatorComponent* Sender, int32 OldLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetWaveBlockingBlendTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetSCABMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuilding* GetPendingBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlacingBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCancellingInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractTimerMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHeadMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDropItemDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalCreature* GetCurrentPetFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCreatureLODActor* GetCurrentPet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerCharacterIdentity GetCharacterIdentity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCancelInteractTimerMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCancelInteractTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetBackPackMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimPitch() const;
    
    UFUNCTION(BlueprintCallable, Exec)
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
    UFUNCTION(BlueprintCallable)
    void DamagedServerOnlyCallback(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateThirdPersonShadowEquipment();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetEnemy(ASurvivalCharacter* Enemy);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyStorageFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyScanTarget(ASurvivalCharacter* ScanTarget);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyPetTamed(ASurvivalCreature* Pet);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyInventoryFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyHaulingFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyDropStorageFull();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInitBaseShadowMeshes();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExitSpyGlassMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterSpyGlassMode();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndHoldInteraction(EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearInteractableInRange();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClientCheatSetBonusEnhancementLevel(FGameplayTag Type, int32 Level);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBeginHoldInteract(UObject* InteractableObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheatTryKill();
    
    UFUNCTION(BlueprintCallable)
    void CheatBuildingDebugLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanThrowItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLightFire() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteractWith(UObject* Interactable, EInteractionChannel InteractionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDropItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastBuildingCanceledByCombat();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCameraForInteraction(UObject* InteractableActor, bool IsEnteringInteraction, float BlendTime, float BlendExp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AchievementDebug(bool bShow);
    
    
    // Fix for true pure virtual functions not being implemented
};

