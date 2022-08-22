#include "SurvivalPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "PlayerSFXComponent.h"

class UObject;
class ASurvivalPlayerState;
class AProductionBuilding;
class APhotoPawn;
class UItem;
class UInputComponent;
class AEquipmentDisplayBuilding;
class ASurvivalCreature;
class AActor;
class APheromoneBroadcasterBuilding;
class ASignBuilding;
class UInteractionWidget;
class AStorage;
class AGardenBuilding;
class AItemDisplayBuilding;
class UBurgleQuestInstance;
class APlayerState;
class UInventoryComponent;
class APawn;

bool ASurvivalPlayerController::TryUseItem(UObject* From, UItem* Item) {
    return false;
}

void ASurvivalPlayerController::ToggleSpectatorMode() {
}

void ASurvivalPlayerController::TogglePhotoPawnType() {
}

void ASurvivalPlayerController::TogglePhotoModeUI() {
}

void ASurvivalPlayerController::TogglePhotoModeSettings() {
}

void ASurvivalPlayerController::ShowPhotoModeUI() {
}

void ASurvivalPlayerController::SetYAxisInverted(bool bIsInverted) {
}

void ASurvivalPlayerController::SetXAxisInverted(bool bIsInverted) {
}

void ASurvivalPlayerController::SetupPhotoPawnInputs(APhotoPawn* PhotoPawn, UInputComponent* PhotoPawnInputComponent) {
}

void ASurvivalPlayerController::SetRumbleEnabled(bool bIsEnabled) {
}

void ASurvivalPlayerController::SetRightStickOuterDeadZone(float Value) {
}

void ASurvivalPlayerController::SetRightStickInnerDeadZone(float Value) {
}

void ASurvivalPlayerController::SetMouseSensitivityY(const float Value) {
}

void ASurvivalPlayerController::SetMouseSensitivityX(const float Value) {
}

void ASurvivalPlayerController::SetMouseSensitivity(const FVector2D& Value) {
}

void ASurvivalPlayerController::SetLeftStickOuterDeadZone(float Value) {
}

void ASurvivalPlayerController::SetLeftStickInnerDeadZone(float Value) {
}

void ASurvivalPlayerController::SetGamepadSensitivityY(const float Value) {
}

void ASurvivalPlayerController::SetGamepadSensitivityX(const float Value) {
}

void ASurvivalPlayerController::SetGamepadSensitivity(const FVector2D& Value) {
}

void ASurvivalPlayerController::SetFOV(float InFOV) {
}

void ASurvivalPlayerController::SetControllerMoveYInverted(bool bIsInverted) {
}

void ASurvivalPlayerController::SetControllerMoveXInverted(bool bIsInverted) {
}

void ASurvivalPlayerController::SetControllerLookYInverted(bool bIsInverted) {
}

void ASurvivalPlayerController::SetControllerLookXInverted(bool bIsInverted) {
}

void ASurvivalPlayerController::ServerUseItem_Implementation(UObject* From, UItem* Item) {
}
bool ASurvivalPlayerController::ServerUseItem_Validate(UObject* From, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerUnequipDisplayBuilding_Implementation(AEquipmentDisplayBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerUnequipDisplayBuilding_Validate(AEquipmentDisplayBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerUnequipCreature_Implementation(ASurvivalCreature* Creature, UItem* Item) {
}
bool ASurvivalPlayerController::ServerUnequipCreature_Validate(ASurvivalCreature* Creature, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerTryGetProductionItem_Implementation(AProductionBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerTryGetProductionItem_Validate(AProductionBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerSwapDisplayBuilding_Implementation(AEquipmentDisplayBuilding* Building) {
}
bool ASurvivalPlayerController::ServerSwapDisplayBuilding_Validate(AEquipmentDisplayBuilding* Building) {
    return true;
}

void ASurvivalPlayerController::ServerStopRequestInventory_Implementation(AActor* Actor) {
}
bool ASurvivalPlayerController::ServerStopRequestInventory_Validate(AActor* Actor) {
    return true;
}

void ASurvivalPlayerController::ServerStopRequestInventories_Implementation(const TArray<AActor*>& Actors) {
}
bool ASurvivalPlayerController::ServerStopRequestInventories_Validate(const TArray<AActor*>& Actors) {
    return true;
}

void ASurvivalPlayerController::ServerStartRequestInventory_Implementation(AActor* Actor) {
}
bool ASurvivalPlayerController::ServerStartRequestInventory_Validate(AActor* Actor) {
    return true;
}

void ASurvivalPlayerController::ServerStartRequestInventories_Implementation(const TArray<AActor*>& Actors) {
}
bool ASurvivalPlayerController::ServerStartRequestInventories_Validate(const TArray<AActor*>& Actors) {
    return true;
}

void ASurvivalPlayerController::ServerSetPheromoneBroadcasterGatherEnabled_Implementation(APheromoneBroadcasterBuilding* Building, bool bEnable) {
}
bool ASurvivalPlayerController::ServerSetPheromoneBroadcasterGatherEnabled_Validate(APheromoneBroadcasterBuilding* Building, bool bEnable) {
    return true;
}

void ASurvivalPlayerController::ServerSetPheromoneBroadcasterBuildEnabled_Implementation(APheromoneBroadcasterBuilding* Building, bool bEnable) {
}
bool ASurvivalPlayerController::ServerSetPheromoneBroadcasterBuildEnabled_Validate(APheromoneBroadcasterBuilding* Building, bool bEnable) {
    return true;
}

void ASurvivalPlayerController::ServerSelectSign_Implementation(ASignBuilding* SignBuilding, FDataTableRowHandle SignDataHandle) {
}
bool ASurvivalPlayerController::ServerSelectSign_Validate(ASignBuilding* SignBuilding, FDataTableRowHandle SignDataHandle) {
    return true;
}

void ASurvivalPlayerController::ServerSelectPlayerDrivenConversationResponse_Implementation(int32 ResponseIndex) {
}
bool ASurvivalPlayerController::ServerSelectPlayerDrivenConversationResponse_Validate(int32 ResponseIndex) {
    return true;
}

void ASurvivalPlayerController::ServerRespawn_Implementation(bool bIgnorePlayerRespawnPoint) {
}
bool ASurvivalPlayerController::ServerRespawn_Validate(bool bIgnorePlayerRespawnPoint) {
    return true;
}

void ASurvivalPlayerController::ServerRequestUnlockItemStackUpgradeTier_Implementation(FGameplayTag ItemStackTag) {
}
bool ASurvivalPlayerController::ServerRequestUnlockItemStackUpgradeTier_Validate(FGameplayTag ItemStackTag) {
    return true;
}

void ASurvivalPlayerController::ServerRequestTechTreeRecipePointSpend_Implementation(FDataTableRowHandle TechTreeRowHandle, int32 PointsToSpend) {
}
bool ASurvivalPlayerController::ServerRequestTechTreeRecipePointSpend_Validate(FDataTableRowHandle TechTreeRowHandle, int32 PointsToSpend) {
    return true;
}

void ASurvivalPlayerController::ServerRequestSetPlayerIdentity_Implementation(EPlayerCharacterIdentity PlayerIdentity) {
}
bool ASurvivalPlayerController::ServerRequestSetPlayerIdentity_Validate(EPlayerCharacterIdentity PlayerIdentity) {
    return true;
}

void ASurvivalPlayerController::ServerRequestInteractionWidget_Implementation(AActor* Interactable, const TSoftClassPtr<UInteractionWidget>& WidgetClass) {
}

void ASurvivalPlayerController::ServerRenameStorage_Implementation(AStorage* Storage, const FString& NewName) {
}
bool ASurvivalPlayerController::ServerRenameStorage_Validate(AStorage* Storage, const FString& NewName) {
    return true;
}

void ASurvivalPlayerController::ServerRemoveItemFromGarden_Implementation(AGardenBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerRemoveItemFromGarden_Validate(AGardenBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerRemoveItemDisplayBuilding_Implementation(AItemDisplayBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerRemoveItemDisplayBuilding_Validate(AItemDisplayBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerRemoveItem_Implementation(UObject* From, UItem* Item, int32 Count) {
}
bool ASurvivalPlayerController::ServerRemoveItem_Validate(UObject* From, UItem* Item, int32 Count) {
    return true;
}

void ASurvivalPlayerController::ServerRejectBurgleQuest_Implementation(UBurgleQuestInstance* QuestInstance) {
}
bool ASurvivalPlayerController::ServerRejectBurgleQuest_Validate(UBurgleQuestInstance* QuestInstance) {
    return true;
}

void ASurvivalPlayerController::ServerRefillBurgleQuests_Implementation() {
}
bool ASurvivalPlayerController::ServerRefillBurgleQuests_Validate() {
    return true;
}

void ASurvivalPlayerController::ServerProgressPlayerDrivenConversation_Implementation() {
}
bool ASurvivalPlayerController::ServerProgressPlayerDrivenConversation_Validate() {
    return true;
}

void ASurvivalPlayerController::ServerPlaceItemDisplayBuilding_Implementation(AItemDisplayBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerPlaceItemDisplayBuilding_Validate(AItemDisplayBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerNotifyClosedInteractionWidget_Implementation(const TSoftClassPtr<UInteractionWidget>& WidgetClass) {
}

void ASurvivalPlayerController::ServerGiveUp_Implementation() {
}
bool ASurvivalPlayerController::ServerGiveUp_Validate() {
    return true;
}

void ASurvivalPlayerController::ServerEquipDisplayBuilding_Implementation(AEquipmentDisplayBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerEquipDisplayBuilding_Validate(AEquipmentDisplayBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerEquipCreature_Implementation(ASurvivalCreature* Creature, UItem* Item) {
}
bool ASurvivalPlayerController::ServerEquipCreature_Validate(ASurvivalCreature* Creature, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerEnhanceItemBonus_Implementation(UItem* Item, FGameplayTag BonusEnhancementType) {
}
bool ASurvivalPlayerController::ServerEnhanceItemBonus_Validate(UItem* Item, FGameplayTag BonusEnhancementType) {
    return true;
}

void ASurvivalPlayerController::ServerEnhanceItem_Implementation(UItem* Item) {
}
bool ASurvivalPlayerController::ServerEnhanceItem_Validate(UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerEndWidgetInteraction_Implementation(AActor* Interactable) {
}

void ASurvivalPlayerController::ServerEndPlayerDrivenConversation_Implementation() {
}
bool ASurvivalPlayerController::ServerEndPlayerDrivenConversation_Validate() {
    return true;
}

void ASurvivalPlayerController::ServerDumpItem_Implementation(UItem* Item) {
}
bool ASurvivalPlayerController::ServerDumpItem_Validate(UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerDropItem_Implementation(UObject* From, UItem* Item, int32 Count) {
}
bool ASurvivalPlayerController::ServerDropItem_Validate(UObject* From, UItem* Item, int32 Count) {
    return true;
}

void ASurvivalPlayerController::ServerDepositToPheromoneBroadcaster_Implementation(APheromoneBroadcasterBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerDepositToPheromoneBroadcaster_Validate(APheromoneBroadcasterBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerCraftRecipeDataAtBuilding_Implementation(AProductionBuilding* Building, FDataTableRowHandle RecipeRowHandle, FDataTableRowHandle RecipeModRowHandle) {
}
bool ASurvivalPlayerController::ServerCraftRecipeDataAtBuilding_Validate(AProductionBuilding* Building, FDataTableRowHandle RecipeRowHandle, FDataTableRowHandle RecipeModRowHandle) {
    return true;
}

void ASurvivalPlayerController::ServerCraftRecipeAtBuilding_Implementation(AProductionBuilding* Building, FDataTableRowHandle RecipeModRowHandle) {
}
bool ASurvivalPlayerController::ServerCraftRecipeAtBuilding_Validate(AProductionBuilding* Building, FDataTableRowHandle RecipeModRowHandle) {
    return true;
}

void ASurvivalPlayerController::ServerCommitGardenItems_Implementation(AGardenBuilding* Building) {
}
bool ASurvivalPlayerController::ServerCommitGardenItems_Validate(AGardenBuilding* Building) {
    return true;
}

void ASurvivalPlayerController::ServerCancelRequestSkipMovie_Implementation(APlayerState* InPlayer) {
}

void ASurvivalPlayerController::ServerCancelProductionItem_Implementation(AProductionBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerCancelProductionItem_Validate(AProductionBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerCancelGardenProduction_Implementation(AGardenBuilding* Building) {
}
bool ASurvivalPlayerController::ServerCancelGardenProduction_Validate(AGardenBuilding* Building) {
    return true;
}

void ASurvivalPlayerController::ServerBeginRequestSkipMovie_Implementation(APlayerState* InPlayer) {
}

void ASurvivalPlayerController::ServerAddItemToGarden_Implementation(AGardenBuilding* Building, UItem* Item) {
}
bool ASurvivalPlayerController::ServerAddItemToGarden_Validate(AGardenBuilding* Building, UItem* Item) {
    return true;
}

void ASurvivalPlayerController::ServerAcceptBurgleQuest_Implementation(UBurgleQuestInstance* QuestInstance) {
}
bool ASurvivalPlayerController::ServerAcceptBurgleQuest_Validate(UBurgleQuestInstance* QuestInstance) {
    return true;
}

void ASurvivalPlayerController::ServerAbandonBurgleQuest_Implementation(UBurgleQuestInstance* QuestInstance) {
}
bool ASurvivalPlayerController::ServerAbandonBurgleQuest_Validate(UBurgleQuestInstance* QuestInstance) {
    return true;
}

void ASurvivalPlayerController::RestoreDefaultPhotoSettings() {
}

void ASurvivalPlayerController::RespawnCharacter(bool bIgnorePlayerRespawnPoint) {
}

void ASurvivalPlayerController::RequestTechTreeRecipePointSpend(FDataTableRowHandle TechTreeRowHandle, int32 PointsToSpend) {
}

void ASurvivalPlayerController::PhotoCamSpeedAdjust(float Value) {
}

void ASurvivalPlayerController::PhotoCamFlightSpeedUp() {
}

void ASurvivalPlayerController::PhotoCamFlightSpeedDown() {
}

void ASurvivalPlayerController::OnVoiceChatActivationSettingChanged(int32 IntSetting) {
}

void ASurvivalPlayerController::OnPhotoModeEntryUnallowed(EPhotoModeEntryAllowedResult PhotoModeEntryAllowedResult) {
}

void ASurvivalPlayerController::OnPhotoModeEntered(APhotoPawn* PhotoPawn) {
}

void ASurvivalPlayerController::OnKeyBindsReset() {
}

void ASurvivalPlayerController::OnExitPhotoMode() {
}

void ASurvivalPlayerController::OnAxisMappingRemoved(const FInputAxisKeyMapping& Value) {
}

void ASurvivalPlayerController::OnAxisMappingAdded(const FInputAxisKeyMapping& Value) {
}

void ASurvivalPlayerController::OnActionMappingRemoved(const FInputActionKeyMapping& Value) {
}

void ASurvivalPlayerController::OnActionMappingAdded(const FInputActionKeyMapping& Value) {
}


void ASurvivalPlayerController::NotifyInteractError(UObject* Interactable, const FText& WarningText) {
}

bool ASurvivalPlayerController::IsRequestedInventory(const UInventoryComponent* Inventory) const {
    return false;
}

bool ASurvivalPlayerController::IsMounted() const {
    return false;
}

bool ASurvivalPlayerController::IsItemUseOnCooldown() const {
    return false;
}

bool ASurvivalPlayerController::IsInteractInputAvailable() const {
    return false;
}

void ASurvivalPlayerController::HidePhotoModeUI() {
}


ASurvivalPlayerState* ASurvivalPlayerController::GetSurvivalPlayerState() const {
    return NULL;
}

bool ASurvivalPlayerController::GetRumbleEnabled() const {
    return false;
}

APawn* ASurvivalPlayerController::GetPreviousPawn() {
    return NULL;
}

FVector2D ASurvivalPlayerController::GetMouseSensitivity() const {
    return FVector2D{};
}

float ASurvivalPlayerController::GetItemUseCoooldownRemaining() const {
    return 0.0f;
}

FVector2D ASurvivalPlayerController::GetGamepadSensitivity() const {
    return FVector2D{};
}

void ASurvivalPlayerController::EndForceLookAt(AActor* Target) {
}

void ASurvivalPlayerController::DestroyPhotoModeUI() {
}

void ASurvivalPlayerController::ClientOnRespawn_Implementation() {
}

void ASurvivalPlayerController::ClientNotifyInteractError_Implementation(UObject* Interactable, const FText& WarningText) {
}

void ASurvivalPlayerController::ClientNotifyAttackError_Implementation(const AActor* Target, ECannotDamageReason CannotDamageReason, uint32 FailedDamageTypeFlags) {
}

void ASurvivalPlayerController::ClientCreateInteractionWidget_Implementation(AActor* Interactable, const TSoftClassPtr<UInteractionWidget>& WidgetClass) {
}

void ASurvivalPlayerController::BeginForceLookAt(AActor* Target) {
}

bool ASurvivalPlayerController::AllowIdentitySelection() const {
    return false;
}

void ASurvivalPlayerController::AdjustPhotoCamFlightSpeed(float Multiplier) {
}

void ASurvivalPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASurvivalPlayerController, PreviousPawn);
}

ASurvivalPlayerController::ASurvivalPlayerController() {
    this->PlayerSFXComponent = CreateDefaultSubobject<UPlayerSFXComponent>(TEXT("PlayerSFXComponent"));
    this->LookStickBaseTurnRate = 120.00f;
    this->LookStickBasePitchRate = 67.50f;
    this->LookStickExponent = 0.00f;
    this->LookStickTurnRampDelay = 0.25f;
    this->LookStickTurnRampTime = 0.25f;
    this->LookStickTurnRampMultiplier = 1.50f;
    this->LookStickMinTurnRateScalar = 0.50f;
    this->LookStickMaxTurnRateScalar = 2.00f;
    this->InteractInputComponent = NULL;
    this->BuildingPlacementInputComponent = NULL;
    this->WirePlacementInputComponent = NULL;
    this->MotionEaterInputComponent = NULL;
    this->SplineClimbingInputComponent = NULL;
    this->PauseInputComponent = NULL;
    this->SpyGlassInputComponent = NULL;
    this->ForcedLookStrength = 20.00f;
    this->AutoLevelSpeed = 180.00f;
    this->PhotoModeWidgetClass = NULL;
}

