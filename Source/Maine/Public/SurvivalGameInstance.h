#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "OnAnyKeyPressedDelegate.h"
#include "EGamePackageType.h"
#include "OnGameInputTypeChangedDelegate.h"
#include "EGameContentType.h"
#include "FoliageMapping.h"
#include "OnUsingGamepadChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnJoinGameFailureDelegate.h"
#include "OnHostGameFailureDelegate.h"
#include "GameplayTagContainer.h"
#include "OnAcceptOnlineInviteDelegate.h"
#include "OnJoinOnlineInviteDelegate.h"
#include "OnReceiveOnlineInviteDelegate.h"
#include "OnProfileLoggedOutDelegate.h"
#include "EGameInputType.h"
#include "AttractionCDOData.h"
#include "CustomGameModeSettings.h"
#include "Engine/EngineTypes.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGridBuildingId.h"
#include "FindSessionsCallbackProxy.h"
#include "UObject/NoExportTypes.h"
#include "EGameMode.h"
#include "PowerTypeData.h"
#include "ESharedSaveAPIStatus.h"
#include "FoliageKey.h"
#include "DamageData.h"
#include "EFoliageSwapLevel.h"
#include "SurvivalGameInstance.generated.h"

class UGoapActionCache;
class UGoapActionCacheData;
class UGlobalFoliageData;
class APlayerController;
class UGlobalAudioData;
class UMaineAnalyticsManager;
class UStaticMesh;
class UGameOptions;
class USurvivalMemoryReport;
class UWidgetManager;
class UInterfaceNarrationConfig;
class URenderStateManager;
class UGlobalBuildingData;
class UGlobalCombatData;
class UFoliageType;
class UGlobalItemData;
class UGlobalUIData;
class UGlobalAIData;
class UGlobalControlsData;
class UGlobalTableData;
class UGlobalPlayerData;
class UGlobalSaveLoadData;
class UPhysicsStateManager;
class UGlobalLiteData;
class UWorld;
class AScienceCollectable;
class USurvivalGameModeSettings;
class USaveLoadManager;
class UInterfaceNarrationManager;
class UMusicManager;
class UGlobalColorTheme;
class USurvivalAutoPlayer;
class UPhotoModeConfiguration;
class AStencilStandInActor;
class UObject;
class AActor;
class UActorComponent;
class UAttractionComponent;

UCLASS(Blueprintable, NonTransient)
class MAINE_API USurvivalGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUsingGamepadChanged OnUsingGamepadChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameInputTypeChanged OnGameInputTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyKeyPressed OnAnyKeyPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHostGameFailure OnHostGameFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinGameFailure OnJoinGameFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcceptOnlineInvite OnAcceptOnlineInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinOnlineInvite OnJoinOnlineInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveOnlineInvite OnReceiveOnlineInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProfileLoggedOut OnProfileLoggedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingGamepadControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameInputType CurrentGameInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameOptions* GameOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetManager* WidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterfaceNarrationConfig* NarrationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalBuildingData* GlobalBuildingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalCombatData* GlobalCombatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalItemData* GlobalItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalUIData* GlobalUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalAIData* GlobalAIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalAudioData* GlobalAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalControlsData* GlobalControlsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalFoliageData* GlobalFoliageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalTableData* GlobalTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalPlayerData* GlobalPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalSaveLoadData* GlobalSaveLoadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalLiteData* GlobalLiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, FFoliageMapping> FoliageMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> CompanyIntroLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MainMenuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> LobbyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameLevelDevelopmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameLevelReleaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AScienceCollectable> DroppedScience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GenericDeathNotificationDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PvpDeathNotificationDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> PlayerColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameMode, TSubclassOf<USurvivalGameModeSettings>> DefaultGameModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestCancelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestCancelTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadManager* SaveLoadManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterfaceNarrationManager* InterfaceNarrationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaineAnalyticsManager* AnalyticsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionCacheData* GoapActionCacheData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionCache* GoapActionCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSinglePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PasswordProtectedGameSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasVisitedMenuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameMode SelectedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomGameModeSettings CustomGameModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGlobalColorTheme> CurrentUITheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGlobalColorTheme> CurrentNightUITheme;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, float> CachedMeshVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USurvivalAutoPlayer* AutoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USurvivalMemoryReport* MemoryReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsStateManager* PhysicsStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URenderStateManager* RenderStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameContentType EditorOverrideContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGamePackageType EditorOverridePackageType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeConfiguration* PhotoModeConfiguration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStencilStandInActor*> StencilStandIns;
    
public:
    USurvivalGameInstance();
    UFUNCTION(BlueprintCallable)
    void ValidateColorTheme();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UserLoggedIntoValidProfile() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUIThemeByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUITheme(TSubclassOf<UGlobalColorTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedGameMode(EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineGamePassword(const FString& Password);
    
    UFUNCTION(BlueprintCallable)
    void SetNightUIThemeByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNightUITheme(TSubclassOf<UGlobalColorTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomGameSettings(FCustomGameModeSettings CustomSettings);
    
    UFUNCTION(BlueprintCallable)
    void ServerTravelToGameLevel();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameState();
    
    UFUNCTION(BlueprintCallable)
    void QuitToDesktop(UObject* WorldContextObject, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OpenLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    void OnSharedSaveAPIStatusUpdate(ESharedSaveAPIStatus NewSharedSaveStatus);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMPGameConnectionLost();
    
    UFUNCTION(BlueprintCallable)
    void LoadMainMenuLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadLobbyLevel();
    
    UFUNCTION(BlueprintCallable)
    void JoinOnlineSession(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepadControls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundFoliage(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLevelMenuLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLevelGameOrLobby() const;
    
    UFUNCTION(BlueprintCallable)
    bool HostSession(bool bIsLAN, bool bIsPresence, bool bPasswordProtected, int32 MaxNumPlayers);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleVOIPVolumeChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleVoiceVolumeChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleUIVolumeChanged(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetIsSinglePlayer(bool SinglePlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleReadToMeVoiceChanged(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void HandleReadToMeSpeedChanged(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void HandleReadToMeChanged(bool bReadToMe);
    
    UFUNCTION(BlueprintCallable)
    void HandleNarrationVolumeChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleMusicVolumeChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleMasterVolumeChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleEffectsVolumeChanged(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleChatTextToSpeechChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleChatSpeechToTextChanged(bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAmbienceVolumeChanged(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGlobalColorTheme>> GetUnlockedUIThemes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGlobalColorTheme> GetUITheme() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSubmergedVolume(UStaticMesh* Mesh, FTransform Transform, float ZPlane, FVector& CenterOfMass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSubmergedCollisionVolume(UStaticMesh* Mesh, FTransform Transform, float ZPlane, FVector& CenterOfMass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStencilStandInActor* GetStencilStandInActorWithKey(const FFoliageKey& FoliageKey, const FBuildingGridBuildingId& BuildingKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStencilStandInActor* GetStencilStandInActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaticMeshVolume(UStaticMesh* Mesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USurvivalGameModeSettings> GetSelectedGameModeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPowerTypeData(const FGameplayTag& Tag, FPowerTypeData& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGlobalColorTheme> GetNightUITheme() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetInstancedBlueprintFromHitResult(const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGameVersionStringWithTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameVersionString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStaticMesh*> GetFoliageMeshesFromItemHandle(FDataTableRowHandle ItemRowHandle, bool bForObjective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoliageIsClimbable(const UStaticMesh* StaticMesh, FGameplayTag ClimberTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoliageHasClimbRole(const UStaticMesh* StaticMesh, FGameplayTag RoleTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetFoliageClimbableSplines(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetFoliageBlueprintFromStaticMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetFoliageBlueprintFromKey(const FFoliageKey& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetFoliageBlueprintFromFoliageType(UFoliageType* FoliageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomGameModeSettings GetCustomGameSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameInputType GetCurrentGameInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UAttractionComponent*, FAttractionCDOData> GetCDOAttractionData(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetActorClimbableSplines(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExitOnlineSession();
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen(UWorld* InLoadedWorld);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DismissInvite(const FBlueprintSessionResult DismissedInvite);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableOtherStencilStandInActors(AStencilStandInActor* ActiveStandIn);
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeSharedSavedAPIDisabledDuringPlay();
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeProfileLoggedOutDuringPlay();
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeLocalPlayerKicked(FText& OutKickReason);
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeConnectionLostDuringPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckForCloudSavePrivilegeAndFetch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwapFoliageWithAttacks(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwapFoliageWithAttack(const UStaticMesh* StaticMesh, const FDamageData& DamageData, int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisplaceFoliage(const UStaticMesh* StaticMesh, EFoliageSwapLevel DisplaceLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen(const FString& InMapName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptInvite(const FBlueprintSessionResult AcceptedInvite);
    
};

