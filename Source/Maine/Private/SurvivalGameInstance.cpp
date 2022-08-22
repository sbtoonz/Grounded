#include "SurvivalGameInstance.h"
#include "Templates/SubclassOf.h"

class AStencilStandInActor;
class UGlobalColorTheme;
class APlayerController;
class UObject;
class UStaticMesh;
class USurvivalGameModeSettings;
class AActor;
class UActorComponent;
class UWorld;
class UFoliageType;
class UAttractionComponent;

void USurvivalGameInstance::ValidateColorTheme() {
}

bool USurvivalGameInstance::UserLoggedIntoValidProfile() const {
    return false;
}

void USurvivalGameInstance::SetUIThemeByIndex(int32 Index) {
}

void USurvivalGameInstance::SetUITheme_Implementation(TSubclassOf<UGlobalColorTheme> Theme) {
}

void USurvivalGameInstance::SetSelectedGameMode(EGameMode GameMode) {
}

void USurvivalGameInstance::SetOnlineGamePassword(const FString& Password) {
}

void USurvivalGameInstance::SetNightUIThemeByIndex(int32 Index) {
}

void USurvivalGameInstance::SetNightUITheme_Implementation(TSubclassOf<UGlobalColorTheme> Theme) {
}

void USurvivalGameInstance::SetCustomGameSettings(FCustomGameModeSettings CustomSettings) {
}

void USurvivalGameInstance::ServerTravelToGameLevel() {
}

void USurvivalGameInstance::ResetGameState() {
}

void USurvivalGameInstance::QuitToDesktop(UObject* WorldContextObject, APlayerController* SpecificPlayer) {
}

void USurvivalGameInstance::OpenLevel(FName LevelName) {
}

void USurvivalGameInstance::OnSharedSaveAPIStatusUpdate(ESharedSaveAPIStatus NewSharedSaveStatus) {
}

void USurvivalGameInstance::NotifyMPGameConnectionLost() {
}

void USurvivalGameInstance::LoadMainMenuLevel() {
}

void USurvivalGameInstance::LoadLobbyLevel() {
}

void USurvivalGameInstance::JoinOnlineSession(FBlueprintSessionResult SessionResult) {
}

bool USurvivalGameInstance::IsUsingGamepadControls() const {
    return false;
}

bool USurvivalGameInstance::IsGroundFoliage(const UStaticMesh* StaticMesh) const {
    return false;
}

bool USurvivalGameInstance::IsCurrentLevelMenuLevel() const {
    return false;
}

bool USurvivalGameInstance::IsCurrentLevelGameOrLobby() const {
    return false;
}

bool USurvivalGameInstance::HostSession(bool bIsLAN, bool bIsPresence, bool bPasswordProtected, int32 MaxNumPlayers) {
    return false;
}

void USurvivalGameInstance::HandleVOIPVolumeChanged(float Value) {
}

void USurvivalGameInstance::HandleVoiceVolumeChanged(float Value) {
}

void USurvivalGameInstance::HandleUIVolumeChanged(float Value) {
}


void USurvivalGameInstance::HandleReadToMeVoiceChanged(const FString& Name) {
}

void USurvivalGameInstance::HandleReadToMeSpeedChanged(float Speed) {
}

void USurvivalGameInstance::HandleReadToMeChanged(bool bReadToMe) {
}

void USurvivalGameInstance::HandleNarrationVolumeChanged(float Value) {
}

void USurvivalGameInstance::HandleMusicVolumeChanged(float Value) {
}

void USurvivalGameInstance::HandleMasterVolumeChanged(float Value) {
}

void USurvivalGameInstance::HandleEffectsVolumeChanged(float Value) {
}

void USurvivalGameInstance::HandleChatTextToSpeechChanged(bool bEnabled) {
}

void USurvivalGameInstance::HandleChatSpeechToTextChanged(bool bEnabled) {
}

void USurvivalGameInstance::HandleAmbienceVolumeChanged(float Value) {
}

TArray<TSubclassOf<UGlobalColorTheme>> USurvivalGameInstance::GetUnlockedUIThemes() const {
    return TArray<TSubclassOf<UGlobalColorTheme>>();
}

TSubclassOf<UGlobalColorTheme> USurvivalGameInstance::GetUITheme() const {
    return NULL;
}

float USurvivalGameInstance::GetSubmergedVolume(UStaticMesh* Mesh, FTransform Transform, float ZPlane, FVector& CenterOfMass) {
    return 0.0f;
}

float USurvivalGameInstance::GetSubmergedCollisionVolume(UStaticMesh* Mesh, FTransform Transform, float ZPlane, FVector& CenterOfMass) {
    return 0.0f;
}

AStencilStandInActor* USurvivalGameInstance::GetStencilStandInActorWithKey(const FFoliageKey& FoliageKey, const FBuildingGridBuildingId& BuildingKey) {
    return NULL;
}

AStencilStandInActor* USurvivalGameInstance::GetStencilStandInActor() {
    return NULL;
}

float USurvivalGameInstance::GetStaticMeshVolume(UStaticMesh* Mesh) const {
    return 0.0f;
}

TSubclassOf<USurvivalGameModeSettings> USurvivalGameInstance::GetSelectedGameModeClass() const {
    return NULL;
}

bool USurvivalGameInstance::GetPowerTypeData(const FGameplayTag& Tag, FPowerTypeData& Data) const {
    return false;
}

TSubclassOf<UGlobalColorTheme> USurvivalGameInstance::GetNightUITheme() const {
    return NULL;
}

TSubclassOf<AActor> USurvivalGameInstance::GetInstancedBlueprintFromHitResult(const FHitResult& HitResult) const {
    return NULL;
}

FText USurvivalGameInstance::GetGameVersionStringWithTags() const {
    return FText::GetEmpty();
}

FString USurvivalGameInstance::GetGameVersionString() const {
    return TEXT("");
}

TArray<UStaticMesh*> USurvivalGameInstance::GetFoliageMeshesFromItemHandle(FDataTableRowHandle ItemRowHandle, bool bForObjective) const {
    return TArray<UStaticMesh*>();
}

bool USurvivalGameInstance::GetFoliageIsClimbable(const UStaticMesh* StaticMesh, FGameplayTag ClimberTag) const {
    return false;
}

bool USurvivalGameInstance::GetFoliageHasClimbRole(const UStaticMesh* StaticMesh, FGameplayTag RoleTag) const {
    return false;
}

TArray<UActorComponent*> USurvivalGameInstance::GetFoliageClimbableSplines(const UStaticMesh* StaticMesh) const {
    return TArray<UActorComponent*>();
}

TSubclassOf<AActor> USurvivalGameInstance::GetFoliageBlueprintFromStaticMesh(const UStaticMesh* StaticMesh) const {
    return NULL;
}

TSubclassOf<AActor> USurvivalGameInstance::GetFoliageBlueprintFromKey(const FFoliageKey& Key) const {
    return NULL;
}

TSubclassOf<AActor> USurvivalGameInstance::GetFoliageBlueprintFromFoliageType(UFoliageType* FoliageType) const {
    return NULL;
}

FCustomGameModeSettings USurvivalGameInstance::GetCustomGameSettings() const {
    return FCustomGameModeSettings{};
}

EGameInputType USurvivalGameInstance::GetCurrentGameInputType() const {
    return EGameInputType::Mouse;
}

TMap<UAttractionComponent*, FAttractionCDOData> USurvivalGameInstance::GetCDOAttractionData(const UStaticMesh* StaticMesh) const {
    return TMap<UAttractionComponent*, FAttractionCDOData>();
}

TArray<UActorComponent*> USurvivalGameInstance::GetActorClimbableSplines(const AActor* Actor) const {
    return TArray<UActorComponent*>();
}

bool USurvivalGameInstance::ExitOnlineSession() {
    return false;
}

void USurvivalGameInstance::EndLoadingScreen(UWorld* InLoadedWorld) {
}

void USurvivalGameInstance::DismissInvite(const FBlueprintSessionResult DismissedInvite) {
}

void USurvivalGameInstance::DisableOtherStencilStandInActors(AStencilStandInActor* ActiveStandIn) {
}

bool USurvivalGameInstance::ConsumeSharedSavedAPIDisabledDuringPlay() {
    return false;
}

bool USurvivalGameInstance::ConsumeProfileLoggedOutDuringPlay() {
    return false;
}

bool USurvivalGameInstance::ConsumeLocalPlayerKicked(FText& OutKickReason) {
    return false;
}

bool USurvivalGameInstance::ConsumeConnectionLostDuringPlay() {
    return false;
}


bool USurvivalGameInstance::CanSwapFoliageWithAttacks(const UStaticMesh* StaticMesh) const {
    return false;
}

bool USurvivalGameInstance::CanSwapFoliageWithAttack(const UStaticMesh* StaticMesh, const FDamageData& DamageData, int32 Tier) const {
    return false;
}

bool USurvivalGameInstance::CanDisplaceFoliage(const UStaticMesh* StaticMesh, EFoliageSwapLevel DisplaceLevel) const {
    return false;
}

void USurvivalGameInstance::BeginLoadingScreen(const FString& InMapName) {
}

void USurvivalGameInstance::AcceptInvite(const FBlueprintSessionResult AcceptedInvite) {
}

USurvivalGameInstance::USurvivalGameInstance() {
    this->bIsUsingGamepadControls = false;
    this->CurrentGameInputType = EGameInputType::Mouse;
    this->GameOptions = NULL;
    this->WidgetManager = NULL;
    this->NarrationConfig = NULL;
    this->GlobalBuildingData = NULL;
    this->GlobalCombatData = NULL;
    this->GlobalItemData = NULL;
    this->GlobalUIData = NULL;
    this->GlobalAIData = NULL;
    this->GlobalAudioData = NULL;
    this->GlobalControlsData = NULL;
    this->GlobalFoliageData = NULL;
    this->GlobalTableData = NULL;
    this->GlobalPlayerData = NULL;
    this->GlobalSaveLoadData = NULL;
    this->GlobalLiteData = NULL;
    this->DroppedScience = NULL;
    this->RestCancelDistance = 500.00f;
    this->RestCancelTimeout = 60.00f;
    this->SaveLoadManager = NULL;
    this->InterfaceNarrationManager = NULL;
    this->AnalyticsManager = NULL;
    this->MusicManager = NULL;
    this->GoapActionCacheData = NULL;
    this->GoapActionCache = NULL;
    this->IsSinglePlayer = false;
    this->PasswordProtectedGameSelected = false;
    this->HasVisitedMenuLevel = false;
    this->SelectedGameMode = EGameMode::None;
    this->CurrentUITheme = NULL;
    this->CurrentNightUITheme = NULL;
    this->AutoPlayer = NULL;
    this->MemoryReport = NULL;
    this->PhysicsStateManager = NULL;
    this->RenderStateManager = NULL;
    this->EditorOverrideContentType = EGameContentType::Development;
    this->EditorOverridePackageType = EGamePackageType::Default;
    this->PhotoModeConfiguration = NULL;
}

