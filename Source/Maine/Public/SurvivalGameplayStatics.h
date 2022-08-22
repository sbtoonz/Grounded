#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EConversationPlayPriority.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeRequirements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERecipeUnlockType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "EStatusEffectType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
#include "EGamePlatform.h"
#include "EGamePackageType.h"
#include "EGameContentType.h"
#include "EGameInputType.h"
#include "EColorBlindModeSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EBuildConfigationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "EEquipmentSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentProperties -FallbackName=NavAgentProperties
#include "DamageData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SurvivalGameplayStatics.generated.h"

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
class ASurvivalPlayerController;
class UPhysicalMaterial;
class APawn;
class UPropManagerComponent;
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

UCLASS(BlueprintType)
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
    
    UFUNCTION(BlueprintPure)
    static bool ShouldShowResourceInMenu(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearClipPlane(float ClipPlane);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightChannel(UPrimitiveComponent* PrimitiveComponent, int32 LightChannel, bool ChannelActive);
    
    UFUNCTION()
    static void SetInteractHighlight(AActor* Actor, bool bEnabled);
    
    UFUNCTION()
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
    
    UFUNCTION(BlueprintPure)
    static bool LoadGameInProgress(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FTransform LerpTransforms(FTransform A, FTransform B, float Alpha);
    
    UFUNCTION(BlueprintPure)
    static bool KnowsRecipe(const UObject* WorldContextObject, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static UMaineGameUserSettings* K2_GetMaineGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    static bool IsWinterHoliday();
    
    UFUNCTION(BlueprintPure)
    static bool IsUsingGamepadControls(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsStaticObstacle(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static bool IsSinglePlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsRecipeRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintPure)
    static bool IsPublicTestBuild(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsPasswordProtectedGame(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintPure)
    static bool IsOverlappingWaterVolume(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsNightTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsNaturalResource(const FDataTableRowHandle& ItemRow);
    
    UFUNCTION(BlueprintPure)
    static bool IsLODActorStaticObstacle(const UBaseLODActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsLocalPlayerInRange(const UObject* WorldContextObject, FVector Location, float Range);
    
    UFUNCTION(BlueprintPure)
    static bool IsLoadingSave(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsInCutscene(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsHourNightTime(const UObject* WorldContextObject, float Hour);
    
    UFUNCTION(BlueprintPure)
    static bool IsHourDayTime(const UObject* WorldContextObject, float Hour);
    
    UFUNCTION(BlueprintPure)
    static bool IsHaulingItems(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsHalloweenHoliday();
    
    UFUNCTION(BlueprintPure)
    static bool IsGDKPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsGamepadAttached();
    
    UFUNCTION(BlueprintPure)
    static bool IsFlightBuild(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsDemoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsDayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsCurrentLevelMenuLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsCraftingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintPure)
    static bool IsConversationPlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsControlBound(FName ControlName, bool bUsingGamepad);
    
    UFUNCTION(BlueprintPure)
    static bool IsBuildingRecipeFromDataTableRowHandle(FDataTableRowHandle DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyPartyMemberInRange(const UObject* WorldContextObject, FVector Location, float Range);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorStaticObstacle(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateLightingCache(ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable)
    static UItem* InteractShouldProvidePower(const AActor* InstigatedBy, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintPure)
    static bool HasUnlockedTechTreeRecipe(const UObject* WorldContextObject, FDataTableRowHandle TechTreeRecipeRowHandle);
    
    UFUNCTION(BlueprintPure)
    static bool HasKeyItem(AActor* SourceActor, FDataTableRowHandle KeyItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDataTableRowHandle> HandleRecipeUnlockFromItem(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle, ERecipeUnlockType RecipeUnlockType);
    
    UFUNCTION(BlueprintCallable)
    static void HandleNewResourceNotify(const UObject* WorldContextObject, APlayerState* PlayerState, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static UZoneManagerComponent* GetZoneManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UWorldTraceManagerComponent* GetWorldTraceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UWidgetManager* GetWidgetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UWaveManagerComponent* GetWaveManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetWaterSurfaceZ(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UWaterManagerComponent* GetWaterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UVisualStateManagerComponent* GetVisualStateManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USoundBase* GetUISound(FDataTableRowHandle AudioDataHandle);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalGameHoursPassed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetThirstDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalWorldSettings* GetSurvivalWorldSettingsFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalWorldSettings* GetSurvivalWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerController* GetSurvivalPlayerController(const APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalGameState* GetSurvivalGameStateWorldSafe(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalGameState* GetSurvivalGameStateFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalGameState* GetSurvivalGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static USurvivalModeManagerComponent* GetSurvivalGameModeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static USurvivalGameInstance* GetSurvivalGameInstanceFrom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static USurvivalGameInstance* GetSurvivalGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalAIController* GetSurvivalController(const APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetSurfaceMaterial(const UObject* WorldContextObject, FHitResult& OutHit, FVector Point);
    
    UFUNCTION(BlueprintPure)
    static float GetStatusEffectBaseValue(EStatusEffectType StatusEffectType);
    
    UFUNCTION(BlueprintPure)
    static USaveLoadManager* GetSaveLoadManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UResourceSurveyComponent* GetResourceSurveyComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static URenderTargetManagerComponent* GetRenderTargetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRandomLocationAroundPlayer(const UObject* WorldContextObject, const int32 PlayerIndex, const float MinSpawnDistance, const float MaxSpawnDistance);
    
    UFUNCTION(BlueprintPure)
    static UQuestManagerComponent* GetQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UPropManagerComponent* GetPropManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetProjectionMatrix(FMinimalViewInfo MinimalViewInfo);
    
    UFUNCTION(BlueprintPure)
    static UPowerNetworkManagerComponent* GetPowerNetwork(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingUniqueID(const UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingPlayerGuid(const UObject* WorldContextObject, FGuid PlayerGuid);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerState* GetPlayerStateMatchingCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerController* GetPlayerControllerMatchingPlayerState(const UObject* WorldContextObject, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    static UPhysicalMaterial* GetPhysicalMaterialFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintPure)
    static UPartyComponent* GetPartyComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberPlayerDrivenConversationsPlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetNearClipPlane();
    
    UFUNCTION(BlueprintPure)
    static UMusicManager* GetMusicManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UMovieSkipComponent* GetMovieSkipManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetMetaBuildingsFeatureEnabled();
    
    UFUNCTION(BlueprintPure)
    static UMapComponent* GetMapComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ULODActorManagerComponent* GetLODActorManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetLocalSurvivalPlayerTransform(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerState* GetLocalSurvivalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerController* GetLocalSurvivalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASurvivalPlayerCharacter* GetLocalSurvivalPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UCapsuleComponent* GetLocalSurvivalPlayerCapsule(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AItemSpawnManager* GetItemSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetItemCraftingRecipeForRow(FDataTableRowHandle RowHandle);
    
    UFUNCTION(BlueprintPure)
    static UInterfaceNarrationManager* GetInterfaceNarrationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UInterfaceManagerComponent* GetInterfaceManagerComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UInterestManagerComponent* GetInterestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetIcon(const FDataTableRowHandle& DataRow);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetHungerDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UHUDMarkerManagerComponent* GetHUDMarkerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UGlobalUIData* GetGlobalUIData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalTamingData* GetGlobalTamingData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalTableData* GetGlobalTableData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalLiteData* GetGlobalLiteData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalItemData* GetGlobalItemData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalControlsData* GetGlobalControlsData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalCombatData* GetGlobalCombatData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalBuildingData* GetGlobalBuildingData();
    
    UFUNCTION(BlueprintPure)
    static UGlobalAIData* GetGlobalAIData();
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetGenericDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EGamePlatform GetGamePlatform();
    
    UFUNCTION(BlueprintPure)
    static EGamePackageType GetGamePackageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EGameContentType GetGameContentType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UFoliageManagerComponent* GetFoliageManagerComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UMeshComponent* GetEquipmentMeshComponent(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetEnvironmentalDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UDynamicMaterialCache* GetDynamicMaterialCache(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* GetDefaultComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static UCVarManagerComponent* GetCVarManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UCutsceneComponent* GetCutsceneComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EGameInputType GetCurrentGameInputType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetCraftingResultFromCraftingRecipe(FDataTableRowHandle CraftingRecipe);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetCraftingResultFromBuildingRecipe(FDataTableRowHandle BuildingRecipe);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetCraftingRecipeForItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static UConversationNavigatorComponent* GetConversationNavigatorComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EColorBlindModeSettings GetColorblindSetting();
    
    UFUNCTION(BlueprintPure)
    static UColonyManagerComponent* GetColonyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetClosestPartyMemberDistanceSquared(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FLocString GetCharacterTypeNameByTag(const FGameplayTag& TypeTag);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCancelNearbyBlueprintsCount(AActor* Instigator, float Range);
    
    UFUNCTION(BlueprintPure)
    static UCalendarComponent* GetCalendarComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UBurgleQuestManagerComponent* GetBurgleQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetBuildingShoppingList(const UObject* WorldContextObject, TArray<FRecipeRequirements>& Results);
    
    UFUNCTION(BlueprintPure)
    static UBuildingManagerComponent* GetBuildingManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EBuildConfigationType GetBuildConfigationType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FBox GetBroadphaseBounds(const UWorld* World);
    
    UFUNCTION(BlueprintPure)
    static bool GetBigHeadsState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UBestiaryComponent* GetBestiaryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UBaseManagerComponent* GetBaseManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<USurvivalDamageType> GetBadFoodDamageType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UAuraManagerComponent* GetAuraManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UAsyncTraceShareComponent* GetAsyncTraceShareManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static USkeletalMeshComponent* GetArmorMeshComponent(AActor* Actor, EEquipmentSlot ArmorSlot);
    
    UFUNCTION(BlueprintPure)
    static int32 GetArachnophobiaSafeSetting();
    
    UFUNCTION(BlueprintPure)
    static UMaineAnalyticsManager* GetAnalyticsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateRandomPhysicsVolumeLocation(const UObject* WorldContextObject, APhysicsVolume* PhysicsVolume, FVector Origin, float Range, FVector& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateRandomNavLocation(const UObject* WorldContextObject, FVector Origin, float Range, const FNavAgentProperties& NavAgentProperties, FVector& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPrestreamTextures(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float FloatPositiveInfinity();
    
    UFUNCTION(BlueprintPure)
    static float FloatNegativeInfinity();
    
    UFUNCTION(BlueprintPure)
    static UBaseLODActor* FindLODActorForObject(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static UBaseLODActor* FindLODActorForComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static UBaseLODActor* FindLODActorForAny(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static UBaseLODActor* FindLODActorForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static TArray<UActorComponent*> FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* FindDefaultComponentByName(const AActor* Actor, FName ComponentName);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* FindClassDefaultComponentByClass(const TSubclassOf<AActor> Class, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    static bool CanItemBeAnalyzed(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static bool CanDefragItemList(TArray<UItem*> ItemList);
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION()
    static bool ActorHasGameplayTag(AActor* Actor, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static void AbortAllConversations(const UObject* WorldContextObject);
    
};

