#include "SurvivalPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "AchievementsComponent.h"
#include "PlayerStatsComponent.h"
#include "PerkComponent.h"
#include "PlayerUpgradeComponent.h"

class APlayerState;
class UItem;
class ASurvivalCharacter;
class ASurvivalPlayerState;
class AResourceAnalyzer;
class APawn;
class AActor;

void ASurvivalPlayerState::ViewTutorial(FDataTableRowHandle TutorialRowHandle) {
}

void ASurvivalPlayerState::ToggleResourceSurveyVisible() {
}

void ASurvivalPlayerState::SetTutorialComplete(FDataTableRowHandle TutorialRowHandle) {
}

void ASurvivalPlayerState::SetResourceSurveyVisible(bool bState) {
}

void ASurvivalPlayerState::SetPlayerTextMute(APlayerState* Target, bool bState) {
}

void ASurvivalPlayerState::SetPlayerColorSelection(int32 Selection) {
}

void ASurvivalPlayerState::SetItemInspected(FDataTableRowHandle ItemRowHandle) {
}

void ASurvivalPlayerState::SetCraftingRecipeInspected(FDataTableRowHandle CraftingRecipeRowHandle) {
}

void ASurvivalPlayerState::SetBuildingRecipeInspected(FDataTableRowHandle BuildingRecipeRowHandle) {
}

void ASurvivalPlayerState::ServerViewTutorial_Implementation(FDataTableRowHandle TutorialRowHandle) {
}
bool ASurvivalPlayerState::ServerViewTutorial_Validate(FDataTableRowHandle TutorialRowHandle) {
    return true;
}

void ASurvivalPlayerState::ServerUseTechTreeKeyItem_Implementation(UItem* Item) {
}
bool ASurvivalPlayerState::ServerUseTechTreeKeyItem_Validate(UItem* Item) {
    return true;
}

void ASurvivalPlayerState::ServerUpdateRelevanceConsensus_Implementation(ASurvivalCharacter* Character, ASurvivalPlayerState* Player, ERelevanceType ClientRelevance) {
}

void ASurvivalPlayerState::ServerUnassignQuickSlotItem_Implementation(int32 Index) {
}
bool ASurvivalPlayerState::ServerUnassignQuickSlotItem_Validate(int32 Index) {
    return true;
}

void ASurvivalPlayerState::ServerToggleHUDMarker_Implementation(FGuid HUDMarkerObject, bool IsVisible) {
}
bool ASurvivalPlayerState::ServerToggleHUDMarker_Validate(FGuid HUDMarkerObject, bool IsVisible) {
    return true;
}

void ASurvivalPlayerState::ServerSetTutorialComplete_Implementation(FDataTableRowHandle TutorialRowHandle) {
}
bool ASurvivalPlayerState::ServerSetTutorialComplete_Validate(FDataTableRowHandle TutorialRowHandle) {
    return true;
}

void ASurvivalPlayerState::ServerSetSurveyedResource_Implementation(const FDataTableRowHandle& Resource) {
}

void ASurvivalPlayerState::ServerSetResourceSurveyVisible_Implementation(bool bIsVisible) {
}

void ASurvivalPlayerState::ServerSetQuickSlotAssignment_Implementation(int32 Index, EHotBarQuickSlotType SlotType, FHotBarQuickSlotItemTypeKey ItemKey) {
}
bool ASurvivalPlayerState::ServerSetQuickSlotAssignment_Validate(int32 Index, EHotBarQuickSlotType SlotType, FHotBarQuickSlotItemTypeKey ItemKey) {
    return true;
}

void ASurvivalPlayerState::ServerSetQuestStickiedState_Implementation(FDataTableRowHandle QuestRowHandle, bool IsStickied) {
}
bool ASurvivalPlayerState::ServerSetQuestStickiedState_Validate(FDataTableRowHandle QuestRowHandle, bool IsStickied) {
    return true;
}

void ASurvivalPlayerState::ServerSetItemInspected_Implementation(FDataTableRowHandle ItemRowHandle) {
}
bool ASurvivalPlayerState::ServerSetItemInspected_Validate(FDataTableRowHandle ItemRowHandle) {
    return true;
}

void ASurvivalPlayerState::ServerSetDesiredCameraMode_Implementation(ECameraDisplayMode CameraMode) {
}
bool ASurvivalPlayerState::ServerSetDesiredCameraMode_Validate(ECameraDisplayMode CameraMode) {
    return true;
}

void ASurvivalPlayerState::ServerSetCraftingRecipeInspected_Implementation(FDataTableRowHandle CraftingRecipeRowHandle) {
}
bool ASurvivalPlayerState::ServerSetCraftingRecipeInspected_Validate(FDataTableRowHandle CraftingRecipeRowHandle) {
    return true;
}

void ASurvivalPlayerState::ServerSetBurgleQuestsStickied_Implementation(bool IsStickied) {
}
bool ASurvivalPlayerState::ServerSetBurgleQuestsStickied_Validate(bool IsStickied) {
    return true;
}

void ASurvivalPlayerState::ServerSetBuildingRecipeInspected_Implementation(FDataTableRowHandle BuildingRecipeRowHandle) {
}
bool ASurvivalPlayerState::ServerSetBuildingRecipeInspected_Validate(FDataTableRowHandle BuildingRecipeRowHandle) {
    return true;
}

void ASurvivalPlayerState::ServerSendChatMessage_Implementation(const FString& Message) {
}
bool ASurvivalPlayerState::ServerSendChatMessage_Validate(const FString& Message) {
    return true;
}

void ASurvivalPlayerState::ServerRequestResearch_Implementation(FDataTableRowHandle ItemRowHandle, AResourceAnalyzer* ResourceAnalyzer) {
}
bool ASurvivalPlayerState::ServerRequestResearch_Validate(FDataTableRowHandle ItemRowHandle, AResourceAnalyzer* ResourceAnalyzer) {
    return true;
}

void ASurvivalPlayerState::ServerRemoveQuestStickiedState_Implementation(FDataTableRowHandle QuestRowHandle) {
}
bool ASurvivalPlayerState::ServerRemoveQuestStickiedState_Validate(FDataTableRowHandle QuestRowHandle) {
    return true;
}

void ASurvivalPlayerState::ServerGameModeChanged_Implementation(EGameMode GameMode) {
}

void ASurvivalPlayerState::ServerEndViewResourceSurvey_Implementation() {
}

void ASurvivalPlayerState::ServerBeginViewResourceSurvey_Implementation() {
}

void ASurvivalPlayerState::ServerAddKeyItem_Implementation(UItem* Item) {
}
bool ASurvivalPlayerState::ServerAddKeyItem_Validate(UItem* Item) {
    return true;
}


void ASurvivalPlayerState::OnRep_ToggledHUDMarkers() {
}

void ASurvivalPlayerState::OnRep_RespawnPoint() {
}

void ASurvivalPlayerState::OnRep_ResourceSurveyVisible() {
}

void ASurvivalPlayerState::OnRep_PlayerGuid() {
}

void ASurvivalPlayerState::OnRep_PlayerColorSelectionChanged() {
}

void ASurvivalPlayerState::OnRep_HotBarQuickSlots() {
}

void ASurvivalPlayerState::OnRep_DesiredCameraMode() {
}

void ASurvivalPlayerState::OnRep_ClientQuests() {
}

void ASurvivalPlayerState::OnRep_ActiveQuestStickiedStates() {
}

void ASurvivalPlayerState::OnPlayerInventoryChanged() {
}

void ASurvivalPlayerState::NavigateNextMetaBuildingVariant(const FDataTableRowHandle& MetaBuilding) {
}

void ASurvivalPlayerState::MulticastSendChatMessage_Implementation(ASurvivalPlayerState* PlayerState, const FString& Message) {
}

void ASurvivalPlayerState::MulticastGameModeChanged_Implementation(EGameMode GameMode) {
}

void ASurvivalPlayerState::LocallyHandlePawnUnpossess(APawn* Pawn) {
}

void ASurvivalPlayerState::LocallyHandlePawnPossess(APawn* Pawn) {
}

bool ASurvivalPlayerState::IsResourceSurveyVisible() const {
    return false;
}

bool ASurvivalPlayerState::IsBurgleQuestsStickied() const {
    return false;
}

bool ASurvivalPlayerState::IsActiveQuestStickied(FDataTableRowHandle QuestRowHandle) {
    return false;
}

bool ASurvivalPlayerState::HasViewedTutorial(FDataTableRowHandle TutorialRowHandle) {
    return false;
}

bool ASurvivalPlayerState::HasKeyItem(FDataTableRowHandle ItemHandle) {
    return false;
}

bool ASurvivalPlayerState::HasInspectedItem(FDataTableRowHandle ItemRowHandle) {
    return false;
}

bool ASurvivalPlayerState::HasInspectedCraftingRecipe(FDataTableRowHandle CraftingRecipeRowHandle) {
    return false;
}

bool ASurvivalPlayerState::HasInspectedBuildingRecipe(FDataTableRowHandle BuildingRecipeRowHandle) {
    return false;
}

TArray<FDataTableRowHandle_NetCrc> ASurvivalPlayerState::GetViewedTutorials() const {
    return TArray<FDataTableRowHandle_NetCrc>();
}

TArray<UItem*> ASurvivalPlayerState::GetTechTreeKeyItems(FGameplayTag KeyItemSubCategory) const {
    return TArray<UItem*>();
}

AActor* ASurvivalPlayerState::GetRespawnPoint() const {
    return NULL;
}

bool ASurvivalPlayerState::GetPlayerTextMute(const APlayerState* Target) const {
    return false;
}

int32 ASurvivalPlayerState::GetPlayerColorSelection() const {
    return 0;
}

FColor ASurvivalPlayerState::GetPlayerColor() {
    return FColor{};
}

TArray<UItem*> ASurvivalPlayerState::GetPersonalKeyItems() const {
    return TArray<UItem*>();
}

FDeathInfo ASurvivalPlayerState::GetLastDeathNotification() const {
    return FDeathInfo{};
}

TArray<FActiveQuestStickiedData> ASurvivalPlayerState::GetActiveQuestStickiedStates() const {
    return TArray<FActiveQuestStickiedData>();
}

void ASurvivalPlayerState::ClientViewTutorial_Implementation(FDataTableRowHandle TutorialRowHandle) {
}

void ASurvivalPlayerState::ClientSetTutorialComplete_Implementation(FDataTableRowHandle TutorialRowHandle) {
}

void ASurvivalPlayerState::ClientSendResourceSurveyBlock_Implementation(int32 StartIndex, const TArray<uint8>& Buffer) {
}

void ASurvivalPlayerState::ClientSendFrankenlineImageBlock_Implementation(FGuid ObsidianId, const TArray<uint8>& Buffer) {
}

void ASurvivalPlayerState::ClientOnRestoreItems_Implementation(bool bEquipmentDamaged) {
}

void ASurvivalPlayerState::ClientOnRequestResearch_Implementation(FDataTableRowHandle ItemRowHandle, bool bSuccess) {
}

void ASurvivalPlayerState::ClientOnKeyItemAdded_Implementation(FDataTableRowHandle ItemRowHandle, bool IsNewItem) {
}

void ASurvivalPlayerState::ClientEndStreamFrankenlineImage_Implementation(FGuid ObsidianId) {
}

void ASurvivalPlayerState::ClientBeginStreamFrankenlineImage_Implementation(FGuid ObsidianId, int64 BufferSize) {
}


void ASurvivalPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASurvivalPlayerState, HotBarQuickSlots);
    DOREPLIFETIME(ASurvivalPlayerState, bUseCharactersRealName);
    DOREPLIFETIME(ASurvivalPlayerState, ColorSelection);
    DOREPLIFETIME(ASurvivalPlayerState, PersonalKeyItems);
    DOREPLIFETIME(ASurvivalPlayerState, InspectedItems);
    DOREPLIFETIME(ASurvivalPlayerState, InspectedCraftingRecipes);
    DOREPLIFETIME(ASurvivalPlayerState, InspectedBuildingRecipes);
    DOREPLIFETIME(ASurvivalPlayerState, ViewedTutorials);
    DOREPLIFETIME(ASurvivalPlayerState, ClientQuests);
    DOREPLIFETIME(ASurvivalPlayerState, ActiveQuestStickiedStates);
    DOREPLIFETIME(ASurvivalPlayerState, bBurgleQuestsStickied);
    DOREPLIFETIME(ASurvivalPlayerState, RespawnPoint);
    DOREPLIFETIME(ASurvivalPlayerState, RespawnPointLocation);
    DOREPLIFETIME(ASurvivalPlayerState, DesiredCameraMode);
    DOREPLIFETIME(ASurvivalPlayerState, LastDeathNotification);
    DOREPLIFETIME(ASurvivalPlayerState, PlayerGuid);
    DOREPLIFETIME(ASurvivalPlayerState, ToggledHUDMarkers);
    DOREPLIFETIME(ASurvivalPlayerState, bResourceSurveyVisible);
}

ASurvivalPlayerState::ASurvivalPlayerState() {
    this->CharacterSelection = -1;
    this->bUseCharactersRealName = false;
    this->AchievementsComponent = CreateDefaultSubobject<UAchievementsComponent>(TEXT("AchievementsComponent"));
    this->PlayerStatsComponent = CreateDefaultSubobject<UPlayerStatsComponent>(TEXT("PlayerStatsComponent"));
    this->ColorSelection = 0;
    this->bBurgleQuestsStickied = true;
    this->DesiredCameraMode = ECameraDisplayMode::FirstPerson;
    this->PerkComponent = CreateDefaultSubobject<UPerkComponent>(TEXT("PerkComponent"));
    this->PlayerUpgradeComponent = CreateDefaultSubobject<UPlayerUpgradeComponent>(TEXT("PlayerUpgradeComponent"));
    this->bResourceSurveyVisible = true;
}

