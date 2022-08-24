#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EConversationPlayPriority.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "LocString.h"
#include "UObject/NoExportTypes.h"
#include "FindSessionsCallbackProxy.h"
#include "ERecipeUnlockType.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Engine/EngineTypes.h"
#include "EStatusEffectType.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraTypes.h"
#include "EColorBlindModeSettings.h"
#include "EGamePlatform.h"
#include "EGamePackageType.h"
#include "EGameContentType.h"
#include "EGameInputType.h"
#include "RecipeRequirements.h"
#include "EBuildConfigationType.h"
#include "UObject/NoExportTypes.h"
#include "EEquipmentSlot.h"
#include "AI/Navigation/NavigationTypes.h"
#include "DamageData.h"
#include "GameplayTagContainer.h"
#include "SurvivalGameplayStatics.generated.h"

class UPartyComponent;
class UBaseLODActor;
class UObject;
class UAsyncTraceShareComponent;
class ASurvivalCharacter;
class UMaterialInstanceDynamic;
class UQuestManagerComponent;
class AActor;
class UGlobalTableData;
class UAudioComponent;
class UBuildingManagerComponent;
class USceneComponent;
class UMusicManager;
class UPrimitiveComponent;
class UStaticMesh;
class UStaticMeshComponent;
class USoundBase;
class UPropManagerComponent;
class USoundAttenuation;
class USoundConcurrency;
class UAttack;
class UMaineGameUserSettings;
class USurvivalGameInstance;
class ULightComponent;
class UPhysicalMaterial;
class UWidgetManager;
class UItem;
class APlayerState;
class UZoneManagerComponent;
class UWorldTraceManagerComponent;
class UWaveManagerComponent;
class UWaterManagerComponent;
class UVisualStateManagerComponent;
class USurvivalDamageType;
class ASurvivalWorldSettings;
class UResourceSurveyComponent;
class ASurvivalPlayerController;
class APawn;
class ASurvivalGameState;
class UMapComponent;
class USurvivalModeManagerComponent;
class UPowerNetworkManagerComponent;
class ASurvivalAIController;
class ULODActorManagerComponent;
class USaveLoadManager;
class URenderTargetManagerComponent;
class UMovieSkipComponent;
class ASurvivalPlayerState;
class ACharacter;
class ASurvivalPlayerCharacter;
class UCapsuleComponent;
class AItemSpawnManager;
class UInterfaceNarrationManager;
class UInterfaceManagerComponent;
class UColonyManagerComponent;
class UInterestManagerComponent;
class UHUDMarkerManagerComponent;
class UGlobalUIData;
class UGlobalTamingData;
class UGlobalLiteData;
class UGlobalItemData;
class UGlobalControlsData;
class UGlobalCombatData;
class UGlobalBuildingData;
class UGlobalAIData;
class UFoliageManagerComponent;
class UMeshComponent;
class UDynamicMaterialCache;
class UActorComponent;
class UCVarManagerComponent;
class UCutsceneComponent;
class UConversationNavigatorComponent;
class UCalendarComponent;
class APhysicsVolume;
class UBurgleQuestManagerComponent;
class UWorld;
class UBestiaryComponent;
class UBaseManagerComponent;
class UAuraManagerComponent;
class USkeletalMeshComponent;
class UMaineAnalyticsManager;
class AController;

UCLASS(Blueprintable)
class MAINE_API USurvivalGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USurvivalGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static FVector VertexSecondaryAnim(float DeltaTime, UMaterialInstanceDynamic* Mid, AActor* Actor, FVector PreviousLocation);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterStencilMaskRenderer(AActor* Actor, int32 StencilMaskValue);
    
    UFUNCTION(BlueprintCallable)
    static void TestChatter(ASurvivalCharacter* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void StartFieldConversation(const UObject* WorldContextObject, AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static void StartConversation(const UObject* WorldContextObject, AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnUISound(const UObject* WorldContextObject, FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnAI(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* InteractionObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorAtSocket(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, USceneComponent* AtComponent, FName AtSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowResourceInMenu(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearClipPlane(float ClipPlane);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightChannel(UPrimitiveComponent* PrimitiveComponent, int32 LightChannel, bool ChannelActive);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteractHighlight(AActor* Actor, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetFragilityHighlight(AActor* Actor, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoliageOverrideViewDistanceScale(float ViewDistanceScale);
    
    UFUNCTION(BlueprintCallable)
    static void ServerTravel(const UObject* WorldContextObject, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void ResetStaticMesh(UStaticMeshComponent* StaticMeshComponent, UStaticMesh* StaticMesh, bool ResetMaterials);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCreatureLocations(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RerunConstructionScript(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterStencilMaskRenderer(AActor* Actor, int32 StencilMaskValue);
    
    UFUNCTION(BlueprintCallable)
    static void RecoverPlayerBackpacks(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PlayUISound(const UObject* WorldContextObject, FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintCallable)
    static void PlayOneShotAtRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, USoundBase* SoundToPlay, const float MinSpawnDistance, const float MaxSpawnDistance);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCharacterSoundAttached(ASurvivalCharacter* Character, FGameplayTag SoundTag, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCharacterSoundAtLocation(ASurvivalCharacter* Character, FGameplayTag SoundTag, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable)
    static UAttack* NewAttack(FDataTableRowHandle AttackRowHandle, AActor* Owner, UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    static void MarkPrimitiveRenderStatesDirty(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadGameInProgress(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FTransform LerpTransforms(FTransform A, FTransform B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool KnowsRecipe(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaineGameUserSettings* K2_GetMaineGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinterHoliday();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingGamepadControls(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStaticObstacle(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSinglePlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRecipeRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPublicTestBuild(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPasswordProtectedGame(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverlappingWaterVolume(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNightTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNaturalResource(const FDataTableRowHandle& ItemRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLODActorStaticObstacle(const UBaseLODActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalPlayerInRange(const UObject* WorldContextObject, FVector Location, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadingSave(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInCutscene(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHourNightTime(const UObject* WorldContextObject, float Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHourDayTime(const UObject* WorldContextObject, float Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHaulingItems(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHalloweenHoliday();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGDKPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFlightBuild(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentLevelMenuLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCraftingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConversationPlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControlBound(FName ControlName, bool bUsingGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyPartyMemberInRange(const UObject* WorldContextObject, FVector Location, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorStaticObstacle(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateLightingCache(ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable)
    static UItem* InteractShouldProvidePower(const AActor* InstigatedBy, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasUnlockedTechTreeRecipe(const UObject* WorldContextObject, FDataTableRowHandle TechTreeRecipeRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasKeyItem(AActor* SourceActor, FDataTableRowHandle KeyItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDataTableRowHandle> HandleRecipeUnlockFromItem(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle, ERecipeUnlockType RecipeUnlockType);
    
    UFUNCTION(BlueprintCallable)
    static void HandleNewResourceNotify(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UZoneManagerComponent* GetZoneManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorldTraceManagerComponent* GetWorldTraceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidgetManager* GetWidgetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWaveManagerComponent* GetWaveManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWaterSurfaceZ(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWaterManagerComponent* GetWaterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVisualStateManagerComponent* GetVisualStateManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USoundBase* GetUISound(FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalGameHoursPassed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetThirstDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalWorldSettings* GetSurvivalWorldSettingsFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalWorldSettings* GetSurvivalWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerController* GetSurvivalPlayerController(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalGameState* GetSurvivalGameStateWorldSafe(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalGameState* GetSurvivalGameStateFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalGameState* GetSurvivalGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USurvivalModeManagerComponent* GetSurvivalGameModeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USurvivalGameInstance* GetSurvivalGameInstanceFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USurvivalGameInstance* GetSurvivalGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalAIController* GetSurvivalController(const APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetSurfaceMaterial(const UObject* WorldContextObject, FHitResult& OutHit, FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatusEffectBaseValue(EStatusEffectType StatusEffectType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USaveLoadManager* GetSaveLoadManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UResourceSurveyComponent* GetResourceSurveyComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URenderTargetManagerComponent* GetRenderTargetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, const float MinSpawnDistance, const float MaxSpawnDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestManagerComponent* GetQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPropManagerComponent* GetPropManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetProjectionMatrix(FMinimalViewInfo MinimalViewInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPowerNetworkManagerComponent* GetPowerNetwork(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingUniqueID(const UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingPlayerGuid(const UObject* WorldContextObject, FGuid PlayerGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerController* GetPlayerControllerMatchingPlayerState(const UObject* WorldContextObject, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPhysicalMaterial* GetPhysicalMaterialFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPartyComponent* GetPartyComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberPlayerDrivenConversationsPlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNearClipPlane();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMusicManager* GetMusicManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMovieSkipComponent* GetMovieSkipManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMetaBuildingsFeatureEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMapComponent* GetMapComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULODActorManagerComponent* GetLODActorManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLocalSurvivalPlayerTransform(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerState* GetLocalSurvivalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerController* GetLocalSurvivalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASurvivalPlayerCharacter* GetLocalSurvivalPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCapsuleComponent* GetLocalSurvivalPlayerCapsule(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AItemSpawnManager* GetItemSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetItemCraftingRecipeForRow(FDataTableRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInterfaceNarrationManager* GetInterfaceNarrationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInterfaceManagerComponent* GetInterfaceManagerComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInterestManagerComponent* GetInterestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetIcon(const FDataTableRowHandle& DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetHungerDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHUDMarkerManagerComponent* GetHUDMarkerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalUIData* GetGlobalUIData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalTamingData* GetGlobalTamingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalTableData* GetGlobalTableData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalLiteData* GetGlobalLiteData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalItemData* GetGlobalItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalControlsData* GetGlobalControlsData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalCombatData* GetGlobalCombatData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalBuildingData* GetGlobalBuildingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGlobalAIData* GetGlobalAIData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetGenericDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGamePlatform GetGamePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGamePackageType GetGamePackageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameContentType GetGameContentType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFoliageManagerComponent* GetFoliageManagerComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMeshComponent* GetEquipmentMeshComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetEnvironmentalDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDynamicMaterialCache* GetDynamicMaterialCache(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetDefaultComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCVarManagerComponent* GetCVarManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCutsceneComponent* GetCutsceneComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameInputType GetCurrentGameInputType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetCraftingResultFromCraftingRecipe(FDataTableRowHandle CraftingRecipe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetCraftingResultFromBuildingRecipe(FDataTableRowHandle BuildingRecipe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetCraftingRecipeForItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UConversationNavigatorComponent* GetConversationNavigatorComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EColorBlindModeSettings GetColorblindSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UColonyManagerComponent* GetColonyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetClosestPartyMemberDistanceSquared(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocString GetCharacterTypeNameByTag(const FGameplayTag& TypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCancelNearbyBlueprintsCount(AActor* Instigator, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCalendarComponent* GetCalendarComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBurgleQuestManagerComponent* GetBurgleQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetBuildingShoppingList(const UObject* WorldContextObject, TArray<FRecipeRequirements>& Results);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBuildingManagerComponent* GetBuildingManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBuildConfigationType GetBuildConfigationType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetBroadphaseBounds(const UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBigHeadsState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBestiaryComponent* GetBestiaryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseManagerComponent* GetBaseManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetBadFoodDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAuraManagerComponent* GetAuraManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAsyncTraceShareComponent* GetAsyncTraceShareManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetArmorMeshComponent(AActor* Actor, EEquipmentSlot ArmorSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetArachnophobiaSafeSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaineAnalyticsManager* GetAnalyticsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateRandomPhysicsVolumeLocation(const UObject* WorldContextObject, APhysicsVolume* PhysicsVolume, FVector Origin, float Range, FVector& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateRandomNavLocation(const UObject* WorldContextObject, FVector Origin, float Range, const FNavAgentProperties& NavAgentProperties, FVector& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPrestreamTextures(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FloatPositiveInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FloatNegativeInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForAny(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseLODActor* FindLODActorForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UActorComponent*> FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByName(const AActor* Actor, FName ComponentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindClassDefaultComponentByClass(const TSubclassOf<AActor> Class, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FastForwardPhysics(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    static void EnableForegroundDOF(float MaxRadius);
    
    UFUNCTION(BlueprintCallable)
    static void DisableForegroundDOF();
    
    UFUNCTION(BlueprintCallable)
    static void DefragItemList(TArray<UItem*> ItemList, bool SingleItem);
    
    UFUNCTION(BlueprintCallable)
    static void DealDamage(AActor* TargetActor, FDamageData DamageData, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static UItem* CreateItem(const UObject* WorldContextObject, FDataTableRowHandle ItemType);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumableHasPositiveSurvivalStat(FDataTableRowHandle ConsumableDataHandle, EStatusEffectType Stat);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumableHasNegativeEffect(FDataTableRowHandle ConsumableDataHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanItemBeAnalyzed(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanDefragItemList(TArray<UItem*> ItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCraftIngredientViaRecipe(const FDataTableRowHandle& IngredientRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void CancelNearbyBlueprints(AActor* Instigator, float Range);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyConsumableEffects(AActor* InstigatedBy, TArray<FDataTableRowHandle> ConsumableData, bool PlayChatter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyConsumableEffect(AActor* InstigatedBy, FDataTableRowHandle ConsumableDataHandle, bool PlayChatter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBuoyantForceWithSurface(UStaticMeshComponent* Mesh, float SurfaceWorldZ);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBuoyantForceToMesh(UStaticMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBuoyantForce(UStaticMeshComponent* Mesh, AActor* WaterVolume);
    
    UFUNCTION(BlueprintCallable)
    static bool AnyConsumableHasPositiveSurvivalStat(TArray<FDataTableRowHandle> ConsumableData, EStatusEffectType Stat);
    
    UFUNCTION(BlueprintCallable)
    static bool AnyConsumableHasNegativeEffect(TArray<FDataTableRowHandle> ConsumableData);
    
    UFUNCTION(BlueprintCallable)
    static void AddObjectiveToItem(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle, FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorHasGameplayTag(AActor* Actor, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static void AbortAllConversations(const UObject* WorldContextObject);
    
};

