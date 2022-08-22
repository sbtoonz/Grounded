#include "SurvivalPlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "InventoryComponent.h"
#include "ScreenEffectComponent.h"
#include "MainePhotoModeComponent.h"
#include "HaulingComponent.h"
#include "EquipmentComponent.h"
#include "CozinessEvaluatorComponent.h"
#include "CustomizeInteractionComponent.h"
#include "PersistenceComponent.h"
#include "FPCOverlayComponent.h"
#include "HeatHazardComponent.h"
#include "SurvivalComponent.h"
#include "StaminaComponent.h"
#include "BuildingPlacementComponent.h"
#include "WirePlacementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "ProximityInventoryComponent.h"
#include "TelemetryComponent.h"

class AActor;
class APetHomeBuilding;
class UItem;
class AController;
class ASurvivalCreature;
class UObject;
class AItemProcessingBuilding;
class ABuilding;
class ASurvivalCharacter;
class UAnimMontage;
class APawn;
class UBaseLODActor;
class UCreatureLODActor;

bool ASurvivalPlayerCharacter::TryPickupItemRow(FDataTableRowHandle ItemRow, bool bEquip) {
    return false;
}

bool ASurvivalPlayerCharacter::TryPickupItem(UItem* Item, bool bEquip) {
    return false;
}

EAttackResolutionType ASurvivalPlayerCharacter::TestCurrentAttack() {
    return EAttackResolutionType::WontHit;
}

bool ASurvivalPlayerCharacter::ShouldShowTargetInteractionInterface(EInteractionChannel Channel) {
    return false;
}

void ASurvivalPlayerCharacter::SetSpyGlassOverlay(bool bEnabled) {
}

void ASurvivalPlayerCharacter::ServerThrowItem_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerThrowItem_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerTeleportPartyNear_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerTeleportPartyNear_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerStoreOrSwapPet_Implementation(APetHomeBuilding* WithBuilding) {
}
bool ASurvivalPlayerCharacter::ServerStoreOrSwapPet_Validate(APetHomeBuilding* WithBuilding) {
    return true;
}

void ASurvivalPlayerCharacter::ServerStartThrow_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerStartThrow_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerStandup_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerStandup_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerShowPlayerIsBusyInMenu_Implementation(bool PlayerBusyInMenu) {
}
bool ASurvivalPlayerCharacter::ServerShowPlayerIsBusyInMenu_Validate(bool PlayerBusyInMenu) {
    return true;
}

void ASurvivalPlayerCharacter::ServerSetWaveBlockingBlendTrigger_Implementation(AActor* BlendTrigger) {
}

void ASurvivalPlayerCharacter::ServerSetRespawn_Implementation(AActor* RestActor) {
}
bool ASurvivalPlayerCharacter::ServerSetRespawn_Validate(AActor* RestActor) {
    return true;
}

void ASurvivalPlayerCharacter::ServerSelectAmmoType_Implementation(UItem* AmmoItem) {
}
bool ASurvivalPlayerCharacter::ServerSelectAmmoType_Validate(UItem* AmmoItem) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRevive_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerRevive_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerRequestTechTreeRecipePurchase_Implementation(FDataTableRowHandle TechTreeRowHandle) {
}
bool ASurvivalPlayerCharacter::ServerRequestTechTreeRecipePurchase_Validate(FDataTableRowHandle TechTreeRowHandle) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRequestSpawnWave_Implementation(FGameplayTag Tag, int32 Weight, bool Finalize, UInventoryComponent* SpawnerInventory) {
}

void ASurvivalPlayerCharacter::ServerRequestRest_Implementation(AActor* aRestActor) {
}
bool ASurvivalPlayerCharacter::ServerRequestRest_Validate(AActor* aRestActor) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRequestProcessItem_Implementation(AItemProcessingBuilding* ProcessingBuilding, UItem* ItemToProcess) {
}
bool ASurvivalPlayerCharacter::ServerRequestProcessItem_Validate(AItemProcessingBuilding* ProcessingBuilding, UItem* ItemToProcess) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRequestHUDMarkerUpdate_Implementation(ABuilding* Building, int32 IconVariant, int32 ColorVariant) {
}
bool ASurvivalPlayerCharacter::ServerRequestHUDMarkerUpdate_Validate(ABuilding* Building, int32 IconVariant, int32 ColorVariant) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRequestCancelProcessItem_Implementation(AItemProcessingBuilding* ProcessingBuilding, UItem* ItemToCancel) {
}
bool ASurvivalPlayerCharacter::ServerRequestCancelProcessItem_Validate(AItemProcessingBuilding* ProcessingBuilding, UItem* ItemToCancel) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRepairItem_Implementation(UItem* Item) {
}
bool ASurvivalPlayerCharacter::ServerRepairItem_Validate(UItem* Item) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRenamePet_Implementation(ASurvivalCreature* Creature, const FText& NewName) {
}
bool ASurvivalPlayerCharacter::ServerRenamePet_Validate(ASurvivalCreature* Creature, const FText& NewName) {
    return true;
}

void ASurvivalPlayerCharacter::ServerRemoveWaypoint_Implementation() {
}

void ASurvivalPlayerCharacter::ServerRemoveResourceWaypoint_Implementation() {
}

void ASurvivalPlayerCharacter::ServerReleaseThrow_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerReleaseThrow_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerReleaseAttack_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerReleaseAttack_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerPowerSwitchPressed_Implementation() {
}

void ASurvivalPlayerCharacter::ServerPlaceResourceWaypoint_Implementation(FVector WorldLocation) {
}

void ASurvivalPlayerCharacter::ServerOpenPetInventory_Implementation() {
}

void ASurvivalPlayerCharacter::ServerKill_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerKill_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerInteractWirePlacement_Implementation() {
}

void ASurvivalPlayerCharacter::ServerInteractRelocate_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerInteractRelocate_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerInputPlaceMapMarkerPressed_Implementation() {
}

void ASurvivalPlayerCharacter::ServerHotDrop_Implementation(UItem* Item) {
}
bool ASurvivalPlayerCharacter::ServerHotDrop_Validate(UItem* Item) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHoldAttack_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerHoldAttack_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleInteractCancel_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerHandleInteractCancel_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleInteract_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerHandleInteract_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleHoldInteractFoliage_Implementation(UObject* InteractableObject, FFoliageKey MatchingFoliageKey) {
}
bool ASurvivalPlayerCharacter::ServerHandleHoldInteractFoliage_Validate(UObject* InteractableObject, FFoliageKey MatchingFoliageKey) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleHoldInteractCancelFoliage_Implementation(UObject* InteractableObject, FFoliageKey MatchingFoliageKey) {
}
bool ASurvivalPlayerCharacter::ServerHandleHoldInteractCancelFoliage_Validate(UObject* InteractableObject, FFoliageKey MatchingFoliageKey) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleHoldInteractCancelBuilding_Implementation(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey) {
}
bool ASurvivalPlayerCharacter::ServerHandleHoldInteractCancelBuilding_Validate(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleHoldInteractCancelActor_Implementation(UObject* InteractableObject) {
}
bool ASurvivalPlayerCharacter::ServerHandleHoldInteractCancelActor_Validate(UObject* InteractableObject) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleHoldInteractBuilding_Implementation(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey) {
}
bool ASurvivalPlayerCharacter::ServerHandleHoldInteractBuilding_Validate(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleHoldInteractActor_Implementation(UObject* InteractableObject) {
}
bool ASurvivalPlayerCharacter::ServerHandleHoldInteractActor_Validate(UObject* InteractableObject) {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleFireInteract_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerHandleFireInteract_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerHandleDrop_Implementation(UObject* InteractableObject) {
}
bool ASurvivalPlayerCharacter::ServerHandleDrop_Validate(UObject* InteractableObject) {
    return true;
}

void ASurvivalPlayerCharacter::ServerFullRestore_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerFullRestore_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerExitSpyGlassMode_Implementation() {
}

void ASurvivalPlayerCharacter::ServerExitSplineClimbing_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerExitSplineClimbing_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerExitMotionEater_Implementation() {
}
bool ASurvivalPlayerCharacter::ServerExitMotionEater_Validate() {
    return true;
}

void ASurvivalPlayerCharacter::ServerEnterSpyGlassMode_Implementation() {
}

void ASurvivalPlayerCharacter::ServerEndHoldInteractFoliage_Implementation(UObject* InteractableObject, FFoliageKey MatchingFoliageKey, EInteractHoldHandleType HoldInteractType) {
}
bool ASurvivalPlayerCharacter::ServerEndHoldInteractFoliage_Validate(UObject* InteractableObject, FFoliageKey MatchingFoliageKey, EInteractHoldHandleType HoldInteractType) {
    return true;
}

void ASurvivalPlayerCharacter::ServerEndHoldInteractBuilding_Implementation(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey, EInteractHoldHandleType HoldInteractType) {
}
bool ASurvivalPlayerCharacter::ServerEndHoldInteractBuilding_Validate(UObject* InteractableObject, FBuildingGridBuildingId MatchingBuildingKey, EInteractHoldHandleType HoldInteractType) {
    return true;
}

void ASurvivalPlayerCharacter::ServerEndHoldInteractActor_Implementation(UObject* InteractableObject, EInteractHoldHandleType HoldInteractType) {
}
bool ASurvivalPlayerCharacter::ServerEndHoldInteractActor_Validate(UObject* InteractableObject, EInteractHoldHandleType HoldInteractType) {
    return true;
}

void ASurvivalPlayerCharacter::ServerClearWaveSpawnerInventory_Implementation(UInventoryComponent* SpawnerInventory) {
}

void ASurvivalPlayerCharacter::ServerCheatWalk_Implementation() {
}

void ASurvivalPlayerCharacter::ServerCheatTryKill_Implementation(AActor* Actor) {
}

void ASurvivalPlayerCharacter::ServerCheatTeleport_Implementation(FVector Location) {
}

void ASurvivalPlayerCharacter::ServerCheatSetBonusEnhancementLevel_Implementation(int32 Level) {
}

void ASurvivalPlayerCharacter::ServerCheatGod_Implementation() {
}

void ASurvivalPlayerCharacter::ServerCheatGhost_Implementation() {
}

void ASurvivalPlayerCharacter::ServerCheatFullRestore_Implementation() {
}

void ASurvivalPlayerCharacter::ServerCheatFly_Implementation() {
}

void ASurvivalPlayerCharacter::ServerCheatFast_Implementation(float Speed) {
}

void ASurvivalPlayerCharacter::ServerCheatBuildAllBuildings_Implementation() {
}

void ASurvivalPlayerCharacter::ServerBeginHoldInteract_Implementation(UObject* InteractableObject) {
}
bool ASurvivalPlayerCharacter::ServerBeginHoldInteract_Validate(UObject* InteractableObject) {
    return true;
}

void ASurvivalPlayerCharacter::ServerAddWaypoint_Implementation(FVector Location) {
}

ASurvivalCharacter* ASurvivalPlayerCharacter::ScanForBestiaryTarget(bool bGiveBestiaryItem) {
    return NULL;
}

bool ASurvivalPlayerCharacter::RequestedRest() const {
    return false;
}

void ASurvivalPlayerCharacter::OnWidgetStackChanged() {
}

void ASurvivalPlayerCharacter::OnViewControlBlendCompleteEvent() {
}

void ASurvivalPlayerCharacter::OnRep_PlayerGuid() {
}

void ASurvivalPlayerCharacter::OnRep_PlayerColor() {
}

void ASurvivalPlayerCharacter::OnRep_PlayerBusyInMenu() {
}

void ASurvivalPlayerCharacter::OnRep_Interior() {
}

void ASurvivalPlayerCharacter::OnRep_CurrentPetFull() {
}

void ASurvivalPlayerCharacter::OnGliderMovementModeChanged(bool IsGliding) {
}

void ASurvivalPlayerCharacter::OnGameModeChanged() {
}


void ASurvivalPlayerCharacter::NotifyInteractError(UObject* Interactable, FText WarningText) {
}

void ASurvivalPlayerCharacter::MulticastStopWeaponMontage_Implementation(UAnimMontage* AnimMontage) {
}
bool ASurvivalPlayerCharacter::MulticastStopWeaponMontage_Validate(UAnimMontage* AnimMontage) {
    return true;
}

void ASurvivalPlayerCharacter::MulticastSetWeaponMontageNextSection_Implementation(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection) {
}
bool ASurvivalPlayerCharacter::MulticastSetWeaponMontageNextSection_Validate(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection) {
    return true;
}

void ASurvivalPlayerCharacter::MulticastPlayWeaponMontage_Implementation(UAnimMontage* AnimMontage) {
}
bool ASurvivalPlayerCharacter::MulticastPlayWeaponMontage_Validate(UAnimMontage* AnimMontage) {
    return true;
}

void ASurvivalPlayerCharacter::MulticastFixupPoseableClone_Implementation(APawn* OriginalPawn) {
}

void ASurvivalPlayerCharacter::KillMe() {
}

bool ASurvivalPlayerCharacter::IsThrowing() const {
    return false;
}

bool ASurvivalPlayerCharacter::IsTargetInteractionEnabled(EInteractionChannel Channel) {
    return false;
}

bool ASurvivalPlayerCharacter::IsRequestedInventory(const UInventoryComponent* Inventory) const {
    return false;
}

bool ASurvivalPlayerCharacter::IsInCinematicMode() const {
    return false;
}

bool ASurvivalPlayerCharacter::IsChargingThrow() const {
    return false;
}

bool ASurvivalPlayerCharacter::IsChargingAttack() const {
    return false;
}

bool ASurvivalPlayerCharacter::HasWeapon(bool bCheckVisible) const {
    return false;
}

bool ASurvivalPlayerCharacter::HasOffhand(bool bCheckVisible) const {
    return false;
}

bool ASurvivalPlayerCharacter::HasLitFire() {
    return false;
}

void ASurvivalPlayerCharacter::HandleSizzleStateChanged(ESizzleState PreviousState, ESizzleState CurrentState) {
}

void ASurvivalPlayerCharacter::HandleEquipmentVisualsChanged(UEquipmentComponent* Sender, UItem* Item) {
}

void ASurvivalPlayerCharacter::HandleEquipmentChanged(UItem* CurrentItem, EEquipmentSlot Slot) {
}

void ASurvivalPlayerCharacter::HandleCurrentPetLODActorConvertedToProxyActor(UBaseLODActor* LODActor) {
}

void ASurvivalPlayerCharacter::HandleCurrentPetLODActorConvertedToFullActor(UBaseLODActor* LODActor) {
}

void ASurvivalPlayerCharacter::HandleCozinessLevelChanged(UCozinessEvaluatorComponent* Sender, int32 OldLevel) {
}

AActor* ASurvivalPlayerCharacter::GetWaveBlockingBlendTrigger() const {
    return NULL;
}


ABuilding* ASurvivalPlayerCharacter::GetPendingBuilding() const {
    return NULL;
}

bool ASurvivalPlayerCharacter::GetIsPlacingBuilding() const {
    return false;
}

bool ASurvivalPlayerCharacter::GetIsInteracting() const {
    return false;
}

bool ASurvivalPlayerCharacter::GetIsCancellingInteract() const {
    return false;
}

float ASurvivalPlayerCharacter::GetInteractTimerMax() const {
    return 0.0f;
}

float ASurvivalPlayerCharacter::GetInteractTimer() const {
    return 0.0f;
}


FTransform ASurvivalPlayerCharacter::GetDropItemTransform(const UItem* Item, FVector Offset) const {
    return FTransform{};
}

FVector ASurvivalPlayerCharacter::GetDropItemDirection() const {
    return FVector{};
}

ASurvivalCreature* ASurvivalPlayerCharacter::GetCurrentPetFull() const {
    return NULL;
}

UCreatureLODActor* ASurvivalPlayerCharacter::GetCurrentPet() const {
    return NULL;
}

EPlayerCharacterIdentity ASurvivalPlayerCharacter::GetCharacterIdentity() const {
    return EPlayerCharacterIdentity::Max;
}

float ASurvivalPlayerCharacter::GetCancelInteractTimerMax() const {
    return 0.0f;
}

float ASurvivalPlayerCharacter::GetCancelInteractTimer() const {
    return 0.0f;
}


float ASurvivalPlayerCharacter::GetAimPitch() const {
    return 0.0f;
}

void ASurvivalPlayerCharacter::Fast(float Speed) {
}

void ASurvivalPlayerCharacter::ExitSpyGlassMode() {
}

void ASurvivalPlayerCharacter::ExitPlaceBuildingMode(bool bSuccess) {
}

void ASurvivalPlayerCharacter::EnterSpyGlassMode() {
}

void ASurvivalPlayerCharacter::EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable) {
}

void ASurvivalPlayerCharacter::DamagedServerOnlyCallback(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void ASurvivalPlayerCharacter::ClientUpdateThirdPersonShadowEquipment_Implementation() {
}

void ASurvivalPlayerCharacter::ClientSetEnemy_Implementation(ASurvivalCharacter* Enemy) {
}

void ASurvivalPlayerCharacter::ClientNotifyStorageFull_Implementation() {
}

void ASurvivalPlayerCharacter::ClientNotifyScanTarget_Implementation(ASurvivalCharacter* ScanTarget) {
}

void ASurvivalPlayerCharacter::ClientNotifyPetTamed_Implementation(ASurvivalCreature* Pet) {
}

void ASurvivalPlayerCharacter::ClientNotifyInventoryFull_Implementation() {
}

void ASurvivalPlayerCharacter::ClientNotifyHaulingFull_Implementation() {
}

void ASurvivalPlayerCharacter::ClientNotifyDropStorageFull_Implementation() {
}

void ASurvivalPlayerCharacter::ClientInitBaseShadowMeshes_Implementation() {
}

void ASurvivalPlayerCharacter::ClientExitSpyGlassMode_Implementation() {
}

void ASurvivalPlayerCharacter::ClientEnterSpyGlassMode_Implementation() {
}

void ASurvivalPlayerCharacter::ClientEndHoldInteraction_Implementation(EInteractHoldHandleType HoldInteractType) {
}

void ASurvivalPlayerCharacter::ClientClearInteractableInRange_Implementation() {
}

void ASurvivalPlayerCharacter::ClientCheatSetBonusEnhancementLevel_Implementation(FGameplayTag Type, int32 Level) {
}

void ASurvivalPlayerCharacter::ClientBeginHoldInteract_Implementation(UObject* InteractableObject) {
}

void ASurvivalPlayerCharacter::CheatTryKill() {
}

void ASurvivalPlayerCharacter::CheatBuildingDebugLog() {
}

bool ASurvivalPlayerCharacter::CanThrowItem() const {
    return false;
}

bool ASurvivalPlayerCharacter::CanLightFire() const {
    return false;
}

bool ASurvivalPlayerCharacter::CanInteractWith(UObject* Interactable, EInteractionChannel InteractionChannel) {
    return false;
}

bool ASurvivalPlayerCharacter::CanInteract() {
    return false;
}

bool ASurvivalPlayerCharacter::CanDropItem(UItem* Item) const {
    return false;
}

void ASurvivalPlayerCharacter::BroadcastBuildingCanceledByCombat() {
}

void ASurvivalPlayerCharacter::AdjustCameraForInteraction(UObject* InteractableActor, bool IsEnteringInteraction, float BlendTime, float BlendExp) {
}

void ASurvivalPlayerCharacter::AchievementDebug(bool bShow) {
}

void ASurvivalPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASurvivalPlayerCharacter, IsInSpyGlassMode);
    DOREPLIFETIME(ASurvivalPlayerCharacter, bPlayerBusyInMenu);
    DOREPLIFETIME(ASurvivalPlayerCharacter, PlayerColor);
    DOREPLIFETIME(ASurvivalPlayerCharacter, PlayerGuid);
    DOREPLIFETIME(ASurvivalPlayerCharacter, RequestingRest);
    DOREPLIFETIME(ASurvivalPlayerCharacter, bInterior);
    DOREPLIFETIME(ASurvivalPlayerCharacter, CombatTrackers);
    DOREPLIFETIME(ASurvivalPlayerCharacter, CurrentPetFull);
}

ASurvivalPlayerCharacter::ASurvivalPlayerCharacter() {
    this->SpyGlassModeInputRotationScale = 0.25f;
    this->SpyGlassModeStickInputRotationScale = 0.50f;
    this->IsInSpyGlassMode = false;
    this->bOverrideSpyGlassDOFRadius = true;
    this->bOverrideSpyGlassDOFAmount = true;
    this->SpyGlassDOFBlurRadius = 4.00f;
    this->SpyGlassDOFBlurAmount = 0.50f;
    this->SpyGlassFOV = 45.00f;
    this->BestiaryTargetScanRange = 10000.00f;
    this->PhotoModeComponent = CreateDefaultSubobject<UMainePhotoModeComponent>(TEXT("PhotoModeComponent"));
    this->FPCOverlayComponent = CreateDefaultSubobject<UFPCOverlayComponent>(TEXT("FPCOverlayComponent"));
    this->HeatHazardComponent = CreateDefaultSubobject<UHeatHazardComponent>(TEXT("HeatHazardComponent"));
    this->CustomizeInteractionComponent = CreateDefaultSubobject<UCustomizeInteractionComponent>(TEXT("CustomizeInteractionComponent"));
    this->SpyGlassMontage = NULL;
    this->bPlayerTakesDamageUnpossessed = false;
    this->bPlayerBusyInMenu = false;
    this->DropItemMontage = NULL;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("EquipmentComponent"));
    this->SurvivalComponent = CreateDefaultSubobject<USurvivalComponent>(TEXT("SurvivalComponent"));
    this->HaulingComponent = CreateDefaultSubobject<UHaulingComponent>(TEXT("HaulingComponent"));
    this->StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("StaminaComponent"));
    this->BuildingPlacementComponent = CreateDefaultSubobject<UBuildingPlacementComponent>(TEXT("BuildingPlacementComponent"));
    this->WirePlacementComponent = CreateDefaultSubobject<UWirePlacementComponent>(TEXT("WirePlacementComponent"));
    this->HeadArmorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeadArmorMeshComponent"));
    this->ChestArmorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ChestArmorMeshComponent"));
    this->ArmsArmorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArmArmorMeshComponent"));
    this->LegsArmorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LegsArmorMeshComponent"));
    this->HairMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMeshComponent"));
    this->ThirdPersonShadowCharacterMeshComponent = NULL;
    this->ThirdPersonShadowBackpackMeshComponent = NULL;
    this->ThirdPersonShadowSCABMeshComponent = NULL;
    this->ThirdPersonShadowHeadMeshComponent = NULL;
    this->ThirdPersonShadowHairMeshComponent = NULL;
    this->ScreenEffectComponent = CreateDefaultSubobject<UScreenEffectComponent>(TEXT("ScreenEffectComponent"));
    this->CozinessEvaluatorComponent = CreateDefaultSubobject<UCozinessEvaluatorComponent>(TEXT("CozinessEvaluatorComponent"));
    this->ProximityInventoryComponent = CreateDefaultSubobject<UProximityInventoryComponent>(TEXT("ProximityInventoryComponent"));
    this->TransmissionReceiverComponent = NULL;
    this->CharacterIdentity = EPlayerCharacterIdentity::None;
    this->InteractTraceLength = 300.00f;
    this->bIsInteracting = false;
    this->bIsInteractHoldAnim = false;
    this->InteractTimerMax = 0.60f;
    this->CancelInteractTimerMax = 0.00f;
    this->CurrentInteractable = NULL;
    this->CurrentInteractionChannel = EInteractionChannel::Primary;
    this->ThirdPersonZeroDistance = 600.00f;
    this->ThirdPersonBufferDistance = 0.00f;
    this->RunFOVAdjustment = -4.00f;
    this->RunFOVAdjustmentSpeed = 5.00f;
    this->RequestingRest = false;
    this->Backpack = NULL;
    this->bInterior = false;
    this->FireLightAnim = NULL;
    this->HairAppearance = NULL;
    this->GasMaskSubMix = NULL;
    this->CurrentPetFull = NULL;
    this->SpyGlassBlurMaterial = NULL;
    this->WaveBlockingBlendTrigger = NULL;
    this->TelemetryComponent = CreateDefaultSubobject<UTelemetryComponent>(TEXT("TelemetryComponent"));
}

