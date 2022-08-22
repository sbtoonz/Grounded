#include "SaveLoadManager.h"

class APlayerController;
class USaveGameHeaderData;

void USaveLoadManager::UnpauseSave() {
}

void USaveLoadManager::SyncSharedSaves() {
}

void USaveLoadManager::SignalSharedSaveHeartbeat() {
}

bool USaveLoadManager::ShouldRestorePersistence() const {
    return false;
}

void USaveLoadManager::SharedSavedStopPost() {
}

void USaveLoadManager::SetSaveGameHeaderDatasRequireLoad() {
}

void USaveLoadManager::SetCurrentPlaythroughUsingSharedSaves(bool IsUsingSharedSaves) {
}

void USaveLoadManager::SaveUserGameSettings(bool bSettingsPotentiallyChanged) {
}

void USaveLoadManager::Save(ESaveGameType SaveGameType) {
}

EPlayerRestoreResult USaveLoadManager::RestoreNewPlayerFromController(APlayerController* PlayerController) {
    return EPlayerRestoreResult::PRR_RestoredNothing;
}

void USaveLoadManager::RequestAutoSave() {
}

void USaveLoadManager::RenameSave(USaveGameHeaderData* HeaderData, const FString& NewSaveName) {
}

void USaveLoadManager::RenamePlaythrough(FGuid PlaythroughGrid, const FString& NewPlaythroughName) {
}

void USaveLoadManager::PauseSave() {
}

void USaveLoadManager::LoadUserGameSettings() {
}

void USaveLoadManager::LoadSaveGameHeaderDatas() {
}

void USaveLoadManager::Load(USaveGameHeaderData* SaveGameHeader) {
}

bool USaveLoadManager::IsSyncingSharedSaves() const {
    return false;
}

bool USaveLoadManager::IsSharedSaveBeingHostedBy(const FString& xuid, const FString& Username, const FString& SharedSaveID) {
    return false;
}

bool USaveLoadManager::IsRenamingSharedSavesEnabled() {
    return false;
}

bool USaveLoadManager::IsProcessingSharedSaveCommand() const {
    return false;
}

bool USaveLoadManager::IsLoading() const {
    return false;
}

bool USaveLoadManager::IsCurrentPlaythroughUsingSharedSaves() const {
    return false;
}

bool USaveLoadManager::HasEnoughStorageForNewSave() const {
    return false;
}

void USaveLoadManager::HandleSaveConversion() {
}

void USaveLoadManager::HandleCheckIfNeedsSaveConversion() {
}

TArray<FString> USaveLoadManager::GetSharedSaveUsers(const FString& SharedSaveID) {
    return TArray<FString>();
}

TArray<FString> USaveLoadManager::GetSharedSaveUserIDs(const FString& SharedSaveID) {
    return TArray<FString>();
}

FString USaveLoadManager::GetSharedSaveUserID() {
    return TEXT("");
}

FString USaveLoadManager::GetSharedSaveUserDisplayName() {
    return TEXT("");
}

ESharedSavePermissionsLevel USaveLoadManager::GetSharedSavePermissionsLevel(const FString& xuid, const FString& Username, const FString& SharedSaveID) {
    return ESharedSavePermissionsLevel::None;
}

ESharedSaveAPIStatus USaveLoadManager::GetSharedSaveAPIStatus() const {
    return ESharedSaveAPIStatus::Unknown;
}

USaveGameHeaderData* USaveLoadManager::GetSaveDataToLoad() const {
    return NULL;
}

float USaveLoadManager::GetSaveConvertPercentage() const {
    return 0.0f;
}

int64 USaveLoadManager::GetRemainingStorage() {
    return 0;
}

int32 USaveLoadManager::GetNumberOfOwnedSharedSaves() const {
    return 0;
}

ESharedSavePermissionsLevel USaveLoadManager::GetCurrentPlaythroughSharedSavePermissionsLevel() const {
    return ESharedSavePermissionsLevel::None;
}

FString USaveLoadManager::ExportSave(USaveGameHeaderData* HeaderData) {
    return TEXT("");
}

bool USaveLoadManager::EnsureSignIn() {
    return false;
}

bool USaveLoadManager::DoSaveGameHeaderDatasRequireLoad() const {
    return false;
}

bool USaveLoadManager::DidLoadFromSaveGame() const {
    return false;
}

void USaveLoadManager::DeleteAllSharedSavesSelf() {
}

void USaveLoadManager::Delete(USaveGameHeaderData* SaveGameHeader) {
}

void USaveLoadManager::DeauthorizeSharedSaveUserSelf(const FString& SharedSaveID) {
}

void USaveLoadManager::DeauthorizeSharedSaveUser(const FString& xuid, const FString& SharedSaveID) {
}

void USaveLoadManager::CreateStandardSaveCopyAndDelete(USaveGameHeaderData* SharedSave) {
}

void USaveLoadManager::CreateStandardSaveCopy(USaveGameHeaderData* SharedSave) {
}

void USaveLoadManager::ConvertStandardSaveToSharedSave(USaveGameHeaderData* StandardSave) {
}

void USaveLoadManager::ClearQuickLoadSaveHandle() {
}

ESaveLoadRestriction USaveLoadManager::CanSaveGame() const {
    return ESaveLoadRestriction::NoCurrentRestriction;
}

bool USaveLoadManager::CanSave() const {
    return false;
}

bool USaveLoadManager::CanLoad() const {
    return false;
}

bool USaveLoadManager::CanDelete() const {
    return false;
}

void USaveLoadManager::AuthorizeSharedSaveUser(const FString& xuid, const FString& Username, const FString& SharedSaveID) {
}

USaveLoadManager::USaveLoadManager() {
    this->SaveInProgressSaveGameHeaderData = NULL;
    this->SaveDataToLoad = NULL;
    this->QuickLoadSaveData = NULL;
    this->MaineSettings = NULL;
    this->GlobalSaveLoadData = NULL;
}

