#include "SurvivalGameplayStatics.h"
#include "Templates/SubclassOf.h"

class UResourceSurveyComponent;
class ASurvivalCharacter;
class UMaterialInstanceDynamic;
class UWorldTraceManagerComponent;
class ULightComponent;
class AActor;
class USceneComponent;
class UObject;
class UInterfaceManagerComponent;
class UAudioComponent;
class ASurvivalAIController;
class UPrimitiveComponent;
class USoundConcurrency;
class UStaticMeshComponent;
class UStaticMesh;
class USoundBase;
class UWaveManagerComponent;
class USoundAttenuation;
class UAttack;
class UMaineGameUserSettings;
class UBaseLODActor;
class ULODActorManagerComponent;
class UColonyManagerComponent;
class UItem;
class APlayerState;
class UZoneManagerComponent;
class UWidgetManager;
class UWaterManagerComponent;
class UVisualStateManagerComponent;
class USurvivalDamageType;
class ASurvivalWorldSettings;
class UPhysicalMaterial;
class APawn;
class UPropManagerComponent;
class ASurvivalPlayerController;
class ASurvivalGameState;
class UMapComponent;
class UInterfaceNarrationManager;
class USurvivalModeManagerComponent;
class USurvivalGameInstance;
class USaveLoadManager;
class URenderTargetManagerComponent;
class UQuestManagerComponent;
class UMusicManager;
class UMovieSkipComponent;
class UPowerNetworkManagerComponent;
class ASurvivalPlayerState;
class ACharacter;
class ASurvivalPlayerCharacter;
class UPartyComponent;
class UCapsuleComponent;
class AItemSpawnManager;
class UInterestManagerComponent;
class UHUDMarkerManagerComponent;
class UGlobalUIData;
class UGlobalTamingData;
class UGlobalTableData;
class UGlobalLiteData;
class UGlobalItemData;
class UGlobalControlsData;
class UGlobalCombatData;
class UGlobalBuildingData;
class UActorComponent;
class UGlobalAIData;
class UCVarManagerComponent;
class UFoliageManagerComponent;
class UWorld;
class UMeshComponent;
class UDynamicMaterialCache;
class UCutsceneComponent;
class UConversationNavigatorComponent;
class UCalendarComponent;
class UBurgleQuestManagerComponent;
class UBuildingManagerComponent;
class UBestiaryComponent;
class UBaseManagerComponent;
class UAuraManagerComponent;
class UMaineAnalyticsManager;
class UAsyncTraceShareComponent;
class USkeletalMeshComponent;
class APhysicsVolume;
class AController;

FVector USurvivalGameplayStatics::VertexSecondaryAnim(float DeltaTime, UMaterialInstanceDynamic* Mid, AActor* Actor, FVector PreviousLocation) {
    return FVector{};
}

void USurvivalGameplayStatics::UnregisterStencilMaskRenderer(AActor* Actor, int32 StencilMaskValue) {
}

void USurvivalGameplayStatics::TestChatter(ASurvivalCharacter* Instigator) {
}

void USurvivalGameplayStatics::StartFieldConversation(const UObject* WorldContextObject, AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority) {
}

void USurvivalGameplayStatics::StartConversation(const UObject* WorldContextObject, AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority) {
}

UAudioComponent* USurvivalGameplayStatics::SpawnUISound(const UObject* WorldContextObject, FDataTableRowHandle AudioDataHandle) {
    return NULL;
}

AActor* USurvivalGameplayStatics::SpawnAI(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* InteractionObject) {
    return NULL;
}

AActor* USurvivalGameplayStatics::SpawnActorAtSocket(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, USceneComponent* AtComponent, FName AtSocket) {
    return NULL;
}

bool USurvivalGameplayStatics::ShouldShowResourceInMenu(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle) {
    return false;
}

void USurvivalGameplayStatics::SetNearClipPlane(float ClipPlane) {
}

void USurvivalGameplayStatics::SetLightChannel(UPrimitiveComponent* PrimitiveComponent, int32 LightChannel, bool ChannelActive) {
}

void USurvivalGameplayStatics::SetInteractHighlight(AActor* Actor, bool bEnabled) {
}

void USurvivalGameplayStatics::SetFragilityHighlight(AActor* Actor, int32 Level) {
}

void USurvivalGameplayStatics::SetFoliageOverrideViewDistanceScale(float ViewDistanceScale) {
}

void USurvivalGameplayStatics::ServerTravel(const UObject* WorldContextObject, const FString& LevelName) {
}

void USurvivalGameplayStatics::ResetStaticMesh(UStaticMeshComponent* StaticMeshComponent, UStaticMesh* StaticMesh, bool ResetMaterials) {
}

void USurvivalGameplayStatics::ResetCreatureLocations(const UObject* WorldContextObject) {
}

void USurvivalGameplayStatics::RerunConstructionScript(AActor* Actor) {
}

void USurvivalGameplayStatics::RegisterStencilMaskRenderer(AActor* Actor, int32 StencilMaskValue) {
}

void USurvivalGameplayStatics::RecoverPlayerBackpacks(const UObject* WorldContextObject) {
}

void USurvivalGameplayStatics::PlayUISound(const UObject* WorldContextObject, FDataTableRowHandle AudioDataHandle) {
}

void USurvivalGameplayStatics::PlayOneShotAtRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, USoundBase* SoundToPlay, const float MinSpawnDistance, const float MaxSpawnDistance) {
}

void USurvivalGameplayStatics::PlayCharacterSoundAttached(ASurvivalCharacter* Character, FGameplayTag SoundTag, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}

void USurvivalGameplayStatics::PlayCharacterSoundAtLocation(ASurvivalCharacter* Character, FGameplayTag SoundTag, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings) {
}

UAttack* USurvivalGameplayStatics::NewAttack(FDataTableRowHandle AttackRowHandle, AActor* Owner, UObject* Outer) {
    return NULL;
}

void USurvivalGameplayStatics::MarkPrimitiveRenderStatesDirty(AActor* Actor) {
}

bool USurvivalGameplayStatics::LoadGameInProgress(const UObject* WorldContextObject) {
    return false;
}

FTransform USurvivalGameplayStatics::LerpTransforms(FTransform A, FTransform B, float Alpha) {
    return FTransform{};
}

bool USurvivalGameplayStatics::KnowsRecipe(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle) {
    return false;
}

UMaineGameUserSettings* USurvivalGameplayStatics::K2_GetMaineGameUserSettings() {
    return NULL;
}

bool USurvivalGameplayStatics::IsWinterHoliday() {
    return false;
}

bool USurvivalGameplayStatics::IsUsingGamepadControls(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsStaticObstacle(const UObject* Object) {
    return false;
}

bool USurvivalGameplayStatics::IsSinglePlayer(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsRecipeRowHandle(FDataTableRowHandle DataTableRowHandle) {
    return false;
}

bool USurvivalGameplayStatics::IsPublicTestBuild(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsPasswordProtectedGame(FBlueprintSessionResult SessionResult) {
    return false;
}

bool USurvivalGameplayStatics::IsOverlappingWaterVolume(AActor* Actor) {
    return false;
}

bool USurvivalGameplayStatics::IsNightTime(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsNaturalResource(const FDataTableRowHandle& ItemRow) {
    return false;
}

bool USurvivalGameplayStatics::IsLODActorStaticObstacle(const UBaseLODActor* Actor) {
    return false;
}

bool USurvivalGameplayStatics::IsLocalPlayerInRange(const UObject* WorldContextObject, FVector Location, float Range) {
    return false;
}

bool USurvivalGameplayStatics::IsLoadingSave(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsInCutscene(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsHourNightTime(const UObject* WorldContextObject, float Hour) {
    return false;
}

bool USurvivalGameplayStatics::IsHourDayTime(const UObject* WorldContextObject, float Hour) {
    return false;
}

bool USurvivalGameplayStatics::IsHaulingItems(const AActor* Actor) {
    return false;
}

bool USurvivalGameplayStatics::IsHalloweenHoliday() {
    return false;
}

bool USurvivalGameplayStatics::IsGDKPlatform() {
    return false;
}

bool USurvivalGameplayStatics::IsGamepadAttached() {
    return false;
}

bool USurvivalGameplayStatics::IsFlightBuild(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsDemoMode(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsDayTime(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsCurrentLevelMenuLevel(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsCraftingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle) {
    return false;
}

bool USurvivalGameplayStatics::IsConversationPlaying(const UObject* WorldContextObject) {
    return false;
}

bool USurvivalGameplayStatics::IsControlBound(FName ControlName, bool bUsingGamepad) {
    return false;
}

bool USurvivalGameplayStatics::IsBuildingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle) {
    return false;
}

bool USurvivalGameplayStatics::IsAnyPartyMemberInRange(const UObject* WorldContextObject, FVector Location, float Range) {
    return false;
}

bool USurvivalGameplayStatics::IsActorStaticObstacle(const AActor* Actor) {
    return false;
}

void USurvivalGameplayStatics::InvalidateLightingCache(ULightComponent* LightComponent) {
}

UItem* USurvivalGameplayStatics::InteractShouldProvidePower(const AActor* InstigatedBy, FGameplayTag PowerType) {
    return NULL;
}

bool USurvivalGameplayStatics::HasUnlockedTechTreeRecipe(const UObject* WorldContextObject, FDataTableRowHandle TechTreeRecipeRowHandle) {
    return false;
}

bool USurvivalGameplayStatics::HasKeyItem(AActor* SourceActor, FDataTableRowHandle KeyItemRowHandle) {
    return false;
}

TArray<FDataTableRowHandle> USurvivalGameplayStatics::HandleRecipeUnlockFromItem(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle, ERecipeUnlockType RecipeUnlockType) {
    return TArray<FDataTableRowHandle>();
}

void USurvivalGameplayStatics::HandleNewResourceNotify(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle) {
}

UZoneManagerComponent* USurvivalGameplayStatics::GetZoneManager(const UObject* WorldContextObject) {
    return NULL;
}

UWorldTraceManagerComponent* USurvivalGameplayStatics::GetWorldTraceManager(const UObject* WorldContextObject) {
    return NULL;
}

UWidgetManager* USurvivalGameplayStatics::GetWidgetManager(const UObject* WorldContextObject) {
    return NULL;
}

UWaveManagerComponent* USurvivalGameplayStatics::GetWaveManager(const UObject* WorldContextObject) {
    return NULL;
}

float USurvivalGameplayStatics::GetWaterSurfaceZ(AActor* Actor) {
    return 0.0f;
}

UWaterManagerComponent* USurvivalGameplayStatics::GetWaterManager(const UObject* WorldContextObject) {
    return NULL;
}

UVisualStateManagerComponent* USurvivalGameplayStatics::GetVisualStateManager(const UObject* WorldContextObject) {
    return NULL;
}

USoundBase* USurvivalGameplayStatics::GetUISound(FDataTableRowHandle AudioDataHandle) {
    return NULL;
}

float USurvivalGameplayStatics::GetTotalGameHoursPassed(const UObject* WorldContextObject) {
    return 0.0f;
}

TSubclassOf<USurvivalDamageType> USurvivalGameplayStatics::GetThirstDamageType(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalWorldSettings* USurvivalGameplayStatics::GetSurvivalWorldSettingsFrom(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalWorldSettings* USurvivalGameplayStatics::GetSurvivalWorldSettings(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalPlayerController* USurvivalGameplayStatics::GetSurvivalPlayerController(const APawn* Pawn) {
    return NULL;
}

ASurvivalGameState* USurvivalGameplayStatics::GetSurvivalGameStateWorldSafe(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalGameState* USurvivalGameplayStatics::GetSurvivalGameStateFrom(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalGameState* USurvivalGameplayStatics::GetSurvivalGameState(const UObject* WorldContextObject) {
    return NULL;
}

USurvivalModeManagerComponent* USurvivalGameplayStatics::GetSurvivalGameModeManager(const UObject* WorldContextObject) {
    return NULL;
}

USurvivalGameInstance* USurvivalGameplayStatics::GetSurvivalGameInstanceFrom(const UObject* WorldContextObject) {
    return NULL;
}

USurvivalGameInstance* USurvivalGameplayStatics::GetSurvivalGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalAIController* USurvivalGameplayStatics::GetSurvivalController(const APawn* Pawn) {
    return NULL;
}

TEnumAsByte<EPhysicalSurface> USurvivalGameplayStatics::GetSurfaceMaterial(const UObject* WorldContextObject, FHitResult& OutHit, FVector Point) {
    return SurfaceType_Default;
}

float USurvivalGameplayStatics::GetStatusEffectBaseValue(EStatusEffectType StatusEffectType) {
    return 0.0f;
}

USaveLoadManager* USurvivalGameplayStatics::GetSaveLoadManager(const UObject* WorldContextObject) {
    return NULL;
}

UResourceSurveyComponent* USurvivalGameplayStatics::GetResourceSurveyComponent(const UObject* WorldContextObject) {
    return NULL;
}

URenderTargetManagerComponent* USurvivalGameplayStatics::GetRenderTargetManager(const UObject* WorldContextObject) {
    return NULL;
}

FVector USurvivalGameplayStatics::GetRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, const float MinSpawnDistance, const float MaxSpawnDistance) {
    return FVector{};
}

UQuestManagerComponent* USurvivalGameplayStatics::GetQuestManager(const UObject* WorldContextObject) {
    return NULL;
}

UPropManagerComponent* USurvivalGameplayStatics::GetPropManager(const UObject* WorldContextObject) {
    return NULL;
}

FMatrix USurvivalGameplayStatics::GetProjectionMatrix(FMinimalViewInfo MinimalViewInfo) {
    return FMatrix{};
}

UPowerNetworkManagerComponent* USurvivalGameplayStatics::GetPowerNetwork(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalPlayerState* USurvivalGameplayStatics::GetPlayerStateMatchingUniqueID(const UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId) {
    return NULL;
}

ASurvivalPlayerState* USurvivalGameplayStatics::GetPlayerStateMatchingPlayerGuid(const UObject* WorldContextObject, FGuid PlayerGuid) {
    return NULL;
}

ASurvivalPlayerState* USurvivalGameplayStatics::GetPlayerStateMatchingCharacter(ACharacter* Character) {
    return NULL;
}

ASurvivalPlayerController* USurvivalGameplayStatics::GetPlayerControllerMatchingPlayerState(const UObject* WorldContextObject, APlayerState* PlayerState) {
    return NULL;
}

UPhysicalMaterial* USurvivalGameplayStatics::GetPhysicalMaterialFromHit(const FHitResult& Hit) {
    return NULL;
}

UPartyComponent* USurvivalGameplayStatics::GetPartyComponent(const UObject* WorldContextObject) {
    return NULL;
}

int32 USurvivalGameplayStatics::GetNumberPlayerDrivenConversationsPlaying(const UObject* WorldContextObject) {
    return 0;
}

float USurvivalGameplayStatics::GetNearClipPlane() {
    return 0.0f;
}

UMusicManager* USurvivalGameplayStatics::GetMusicManager(const UObject* WorldContextObject) {
    return NULL;
}

UMovieSkipComponent* USurvivalGameplayStatics::GetMovieSkipManager(const UObject* WorldContextObject) {
    return NULL;
}

bool USurvivalGameplayStatics::GetMetaBuildingsFeatureEnabled() {
    return false;
}

UMapComponent* USurvivalGameplayStatics::GetMapComponent(const UObject* WorldContextObject) {
    return NULL;
}

ULODActorManagerComponent* USurvivalGameplayStatics::GetLODActorManager(const UObject* WorldContextObject) {
    return NULL;
}

FTransform USurvivalGameplayStatics::GetLocalSurvivalPlayerTransform(const UObject* WorldContextObject) {
    return FTransform{};
}

ASurvivalPlayerState* USurvivalGameplayStatics::GetLocalSurvivalPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalPlayerController* USurvivalGameplayStatics::GetLocalSurvivalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ASurvivalPlayerCharacter* USurvivalGameplayStatics::GetLocalSurvivalPlayerCharacter(const UObject* WorldContextObject) {
    return NULL;
}

UCapsuleComponent* USurvivalGameplayStatics::GetLocalSurvivalPlayerCapsule(const UObject* WorldContextObject) {
    return NULL;
}

AItemSpawnManager* USurvivalGameplayStatics::GetItemSpawnManager(const UObject* WorldContextObject) {
    return NULL;
}

FDataTableRowHandle USurvivalGameplayStatics::GetItemCraftingRecipeForRow(FDataTableRowHandle RowHandle) {
    return FDataTableRowHandle{};
}

UInterfaceNarrationManager* USurvivalGameplayStatics::GetInterfaceNarrationManager(const UObject* WorldContextObject) {
    return NULL;
}

UInterfaceManagerComponent* USurvivalGameplayStatics::GetInterfaceManagerComponent(const UObject* WorldContextObject) {
    return NULL;
}

UInterestManagerComponent* USurvivalGameplayStatics::GetInterestManager(const UObject* WorldContextObject) {
    return NULL;
}

UObject* USurvivalGameplayStatics::GetIcon(const FDataTableRowHandle& DataRow) {
    return NULL;
}

TSubclassOf<USurvivalDamageType> USurvivalGameplayStatics::GetHungerDamageType(const UObject* WorldContextObject) {
    return NULL;
}

UHUDMarkerManagerComponent* USurvivalGameplayStatics::GetHUDMarkerManager(const UObject* WorldContextObject) {
    return NULL;
}

UGlobalUIData* USurvivalGameplayStatics::GetGlobalUIData() {
    return NULL;
}

UGlobalTamingData* USurvivalGameplayStatics::GetGlobalTamingData() {
    return NULL;
}

UGlobalTableData* USurvivalGameplayStatics::GetGlobalTableData() {
    return NULL;
}

UGlobalLiteData* USurvivalGameplayStatics::GetGlobalLiteData() {
    return NULL;
}

UGlobalItemData* USurvivalGameplayStatics::GetGlobalItemData() {
    return NULL;
}

UGlobalControlsData* USurvivalGameplayStatics::GetGlobalControlsData() {
    return NULL;
}

UGlobalCombatData* USurvivalGameplayStatics::GetGlobalCombatData() {
    return NULL;
}

UGlobalBuildingData* USurvivalGameplayStatics::GetGlobalBuildingData() {
    return NULL;
}

UGlobalAIData* USurvivalGameplayStatics::GetGlobalAIData() {
    return NULL;
}

TSubclassOf<USurvivalDamageType> USurvivalGameplayStatics::GetGenericDamageType(const UObject* WorldContextObject) {
    return NULL;
}

EGamePlatform USurvivalGameplayStatics::GetGamePlatform() {
    return EGamePlatform::XboxOne;
}

EGamePackageType USurvivalGameplayStatics::GetGamePackageType(const UObject* WorldContextObject) {
    return EGamePackageType::Default;
}

EGameContentType USurvivalGameplayStatics::GetGameContentType(const UObject* WorldContextObject) {
    return EGameContentType::Development;
}

UFoliageManagerComponent* USurvivalGameplayStatics::GetFoliageManagerComponent(const UObject* WorldContextObject) {
    return NULL;
}

UMeshComponent* USurvivalGameplayStatics::GetEquipmentMeshComponent(AActor* Actor) {
    return NULL;
}

TSubclassOf<USurvivalDamageType> USurvivalGameplayStatics::GetEnvironmentalDamageType(const UObject* WorldContextObject) {
    return NULL;
}

UDynamicMaterialCache* USurvivalGameplayStatics::GetDynamicMaterialCache(const UObject* WorldContextObject) {
    return NULL;
}

UObject* USurvivalGameplayStatics::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

UActorComponent* USurvivalGameplayStatics::GetDefaultComponent(const UActorComponent* Component) {
    return NULL;
}

UCVarManagerComponent* USurvivalGameplayStatics::GetCVarManager(const UObject* WorldContextObject) {
    return NULL;
}

UCutsceneComponent* USurvivalGameplayStatics::GetCutsceneComponent(const UObject* WorldContextObject) {
    return NULL;
}

EGameInputType USurvivalGameplayStatics::GetCurrentGameInputType(const UObject* WorldContextObject) {
    return EGameInputType::Mouse;
}

FDataTableRowHandle USurvivalGameplayStatics::GetCraftingResultFromCraftingRecipe(FDataTableRowHandle CraftingRecipe) {
    return FDataTableRowHandle{};
}

FDataTableRowHandle USurvivalGameplayStatics::GetCraftingResultFromBuildingRecipe(FDataTableRowHandle BuildingRecipe) {
    return FDataTableRowHandle{};
}

FDataTableRowHandle USurvivalGameplayStatics::GetCraftingRecipeForItem(FDataTableRowHandle ItemRowHandle) {
    return FDataTableRowHandle{};
}

UConversationNavigatorComponent* USurvivalGameplayStatics::GetConversationNavigatorComponent(const UObject* WorldContextObject) {
    return NULL;
}

EColorBlindModeSettings USurvivalGameplayStatics::GetColorblindSetting() {
    return EColorBlindModeSettings::None;
}

UColonyManagerComponent* USurvivalGameplayStatics::GetColonyManager(const UObject* WorldContextObject) {
    return NULL;
}

float USurvivalGameplayStatics::GetClosestPartyMemberDistanceSquared(const UObject* WorldContextObject, FVector Location) {
    return 0.0f;
}

FLocString USurvivalGameplayStatics::GetCharacterTypeNameByTag(const FGameplayTag& TypeTag) {
    return FLocString{};
}

int32 USurvivalGameplayStatics::GetCancelNearbyBlueprintsCount(AActor* Instigator, float Range) {
    return 0;
}

UCalendarComponent* USurvivalGameplayStatics::GetCalendarComponent(const UObject* WorldContextObject) {
    return NULL;
}

UBurgleQuestManagerComponent* USurvivalGameplayStatics::GetBurgleQuestManager(const UObject* WorldContextObject) {
    return NULL;
}

void USurvivalGameplayStatics::GetBuildingShoppingList(const UObject* WorldContextObject, TArray<FRecipeRequirements>& Results) {
}

UBuildingManagerComponent* USurvivalGameplayStatics::GetBuildingManager(const UObject* WorldContextObject) {
    return NULL;
}

EBuildConfigationType USurvivalGameplayStatics::GetBuildConfigationType(const UObject* WorldContextObject) {
    return EBuildConfigationType::Debug;
}

FBox USurvivalGameplayStatics::GetBroadphaseBounds(const UWorld* World) {
    return FBox{};
}

bool USurvivalGameplayStatics::GetBigHeadsState(const UObject* WorldContextObject) {
    return false;
}

UBestiaryComponent* USurvivalGameplayStatics::GetBestiaryComponent(const UObject* WorldContextObject) {
    return NULL;
}

UBaseManagerComponent* USurvivalGameplayStatics::GetBaseManager(const UObject* WorldContextObject) {
    return NULL;
}

TSubclassOf<USurvivalDamageType> USurvivalGameplayStatics::GetBadFoodDamageType(const UObject* WorldContextObject) {
    return NULL;
}

UAuraManagerComponent* USurvivalGameplayStatics::GetAuraManager(const UObject* WorldContextObject) {
    return NULL;
}

UAsyncTraceShareComponent* USurvivalGameplayStatics::GetAsyncTraceShareManager(const UObject* WorldContextObject) {
    return NULL;
}

USkeletalMeshComponent* USurvivalGameplayStatics::GetArmorMeshComponent(AActor* Actor, EEquipmentSlot ArmorSlot) {
    return NULL;
}

int32 USurvivalGameplayStatics::GetArachnophobiaSafeSetting() {
    return 0;
}

UMaineAnalyticsManager* USurvivalGameplayStatics::GetAnalyticsManager(const UObject* WorldContextObject) {
    return NULL;
}

bool USurvivalGameplayStatics::GenerateRandomPhysicsVolumeLocation(const UObject* WorldContextObject, APhysicsVolume* PhysicsVolume, FVector Origin, float Range, FVector& Result) {
    return false;
}

bool USurvivalGameplayStatics::GenerateRandomNavLocation(const UObject* WorldContextObject, FVector Origin, float Range, const FNavAgentProperties& NavAgentProperties, FVector& Result) {
    return false;
}

void USurvivalGameplayStatics::FlushPrestreamTextures(const UObject* WorldContextObject) {
}

float USurvivalGameplayStatics::FloatPositiveInfinity() {
    return 0.0f;
}

float USurvivalGameplayStatics::FloatNegativeInfinity() {
    return 0.0f;
}

UBaseLODActor* USurvivalGameplayStatics::FindLODActorForObject(const UObject* Object) {
    return NULL;
}

UBaseLODActor* USurvivalGameplayStatics::FindLODActorForComponent(const UActorComponent* Component) {
    return NULL;
}

UBaseLODActor* USurvivalGameplayStatics::FindLODActorForAny(UObject* Object) {
    return NULL;
}

UBaseLODActor* USurvivalGameplayStatics::FindLODActorForActor(const AActor* Actor) {
    return NULL;
}

TArray<UActorComponent*> USurvivalGameplayStatics::FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass) {
    return TArray<UActorComponent*>();
}

UActorComponent* USurvivalGameplayStatics::FindDefaultComponentByName(const AActor* Actor, FName ComponentName) {
    return NULL;
}

UActorComponent* USurvivalGameplayStatics::FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

UActorComponent* USurvivalGameplayStatics::FindClassDefaultComponentByClass(const TSubclassOf<AActor> Class, const TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

FVector USurvivalGameplayStatics::FastForwardPhysics(UPrimitiveComponent* Primitive) {
    return FVector{};
}

void USurvivalGameplayStatics::EnableForegroundDOF(float MaxRadius) {
}

void USurvivalGameplayStatics::DisableForegroundDOF() {
}

void USurvivalGameplayStatics::DefragItemList(TArray<UItem*> ItemList, bool SingleItem) {
}

void USurvivalGameplayStatics::DealDamage(AActor* TargetActor, FDamageData DamageData, AController* InstigatedBy, AActor* DamageCauser) {
}

UItem* USurvivalGameplayStatics::CreateItem(const UObject* WorldContextObject, FDataTableRowHandle ItemType) {
    return NULL;
}

bool USurvivalGameplayStatics::ConsumableHasPositiveSurvivalStat(FDataTableRowHandle ConsumableDataHandle, EStatusEffectType Stat) {
    return false;
}

bool USurvivalGameplayStatics::ConsumableHasNegativeEffect(FDataTableRowHandle ConsumableDataHandle) {
    return false;
}

bool USurvivalGameplayStatics::CanItemBeAnalyzed(FDataTableRowHandle ItemRowHandle) {
    return false;
}

bool USurvivalGameplayStatics::CanDefragItemList(TArray<UItem*> ItemList) {
    return false;
}

bool USurvivalGameplayStatics::CanCraftIngredientViaRecipe(const FDataTableRowHandle& IngredientRowHandle) {
    return false;
}

void USurvivalGameplayStatics::CancelNearbyBlueprints(AActor* Instigator, float Range) {
}

void USurvivalGameplayStatics::ApplyConsumableEffects(AActor* InstigatedBy, TArray<FDataTableRowHandle> ConsumableData, bool PlayChatter) {
}

void USurvivalGameplayStatics::ApplyConsumableEffect(AActor* InstigatedBy, FDataTableRowHandle ConsumableDataHandle, bool PlayChatter) {
}

void USurvivalGameplayStatics::ApplyBuoyantForceWithSurface(UStaticMeshComponent* Mesh, float SurfaceWorldZ) {
}

void USurvivalGameplayStatics::ApplyBuoyantForceToMesh(UStaticMeshComponent* Mesh) {
}

void USurvivalGameplayStatics::ApplyBuoyantForce(UStaticMeshComponent* Mesh, AActor* WaterVolume) {
}

bool USurvivalGameplayStatics::AnyConsumableHasPositiveSurvivalStat(TArray<FDataTableRowHandle> ConsumableData, EStatusEffectType Stat) {
    return false;
}

bool USurvivalGameplayStatics::AnyConsumableHasNegativeEffect(TArray<FDataTableRowHandle> ConsumableData) {
    return false;
}

void USurvivalGameplayStatics::AddObjectiveToItem(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle, FVector Location, float Radius) {
}

bool USurvivalGameplayStatics::ActorHasGameplayTag(AActor* Actor, const FGameplayTagContainer& Tags) {
    return false;
}

void USurvivalGameplayStatics::AbortAllConversations(const UObject* WorldContextObject) {
}

USurvivalGameplayStatics::USurvivalGameplayStatics() {
}

