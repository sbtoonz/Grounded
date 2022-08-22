#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESharedSaveAPIStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "OnGameInputTypeChangedDelegate.h"
#include "FoliageMapping.h"
#include "OnUsingGamepadChangedDelegate.h"
#include "OnAnyKeyPressedDelegate.h"
#include "OnJoinGameFailureDelegate.h"
#include "OnHostGameFailureDelegate.h"
#include "OnAcceptOnlineInviteDelegate.h"
#include "OnJoinOnlineInviteDelegate.h"
#include "OnReceiveOnlineInviteDelegate.h"
#include "OnProfileLoggedOutDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EGameInputType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EGameContentType.h"
#include "PowerTypeData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "CustomGameModeSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EGameMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "FoliageKey.h"
#include "BuildingGridBuildingId.h"
#include "EGamePackageType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AttractionCDOData.h"
#include "DamageData.h"
#include "EFoliageSwapLevel.h"
#include "SurvivalGameInstance.generated.h"

class UGlobalSaveLoadData;
class AActor;
class UMaineAnalyticsManager;
class AScienceCollectable;
class UStaticMesh;
class UGlobalAudioData;
class UGameOptions;
class UPhysicsStateManager;
class USurvivalMemoryReport;
class UGoapActionCacheData;
class UWidgetManager;
class UInterfaceNarrationConfig;
class USurvivalAutoPlayer;
class UGlobalBuildingData;
class UGlobalCombatData;
class UFoliageType;
class UWorld;
class UGlobalItemData;
class UGlobalUIData;
class UGlobalAIData;
class UActorComponent;
class UGlobalControlsData;
class UGlobalFoliageData;
class UGlobalTableData;
class UGlobalPlayerData;
class UGlobalLiteData;
class USurvivalGameModeSettings;
class UPhotoModeConfiguration;
class USaveLoadManager;
class UInterfaceNarrationManager;
class UMusicManager;
class UGoapActionCache;
class AStencilStandInActor;
class UGlobalColorTheme;
class URenderStateManager;
class UObject;
class APlayerController;
class UAttractionComponent;

UCLASS(NonTransient)
class MAINE_API USurvivalGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnUsingGamepadChanged OnUsingGamepadChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameInputTypeChanged OnGameInputTypeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAnyKeyPressed OnAnyKeyPressed;
    
    UPROPERTY(BlueprintAssignable)
    FOnHostGameFailure OnHostGameFailure;
    
    UPROPERTY(BlueprintAssignable)
    FOnJoinGameFailure OnJoinGameFailure;
    
    UPROPERTY(BlueprintAssignable)
    FOnAcceptOnlineInvite OnAcceptOnlineInvite;
    
    UPROPERTY(BlueprintAssignable)
    FOnJoinOnlineInvite OnJoinOnlineInvite;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceiveOnlineInvite OnReceiveOnlineInvite;
    
    UPROPERTY(BlueprintAssignable)
    FOnProfileLoggedOut OnProfileLoggedOut;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUsingGamepadControls;
    
    UPROPERTY(BlueprintReadOnly)
    EGameInputType CurrentGameInputType;
    
    UPROPERTY(BlueprintReadOnly)
    UGameOptions* GameOptions;
    
    UPROPERTY(BlueprintReadOnly)
    UWidgetManager* WidgetManager;
    
    UPROPERTY(EditDefaultsOnly)
    UInterfaceNarrationConfig* NarrationConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalBuildingData* GlobalBuildingData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalCombatData* GlobalCombatData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalItemData* GlobalItemData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalUIData* GlobalUIData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalAIData* GlobalAIData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalAudioData* GlobalAudioData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalControlsData* GlobalControlsData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalFoliageData* GlobalFoliageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalTableData* GlobalTableData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalPlayerData* GlobalPlayerData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalSaveLoadData* GlobalSaveLoadData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGlobalLiteData* GlobalLiteData;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<UStaticMesh*, FFoliageMapping> FoliageMappings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> CompanyIntroLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> MainMenuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> LobbyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString GameLevelDevelopmentName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString GameLevelReleaseName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<AScienceCollectable> DroppedScience;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle GenericDeathNotificationDataHandle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle PvpDeathNotificationDataHandle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FColor> PlayerColors;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EGameMode, TSubclassOf<USurvivalGameModeSettings>> DefaultGameModes;
    
    UPROPERTY(BlueprintReadOnly)
    float RestCancelDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float RestCancelTimeout;
    
    UPROPERTY(BlueprintReadOnly)
    USaveLoadManager* SaveLoadManager;
    
    UPROPERTY(BlueprintReadOnly)
    UInterfaceNarrationManager* InterfaceNarrationManager;
    
    UPROPERTY(BlueprintReadOnly)
    UMaineAnalyticsManager* AnalyticsManager;
    
    UPROPERTY(BlueprintReadOnly)
    UMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGoapActionCacheData* GoapActionCacheData;
    
    UPROPERTY(BlueprintReadOnly)
    UGoapActionCache* GoapActionCache;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsSinglePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    bool PasswordProtectedGameSelected;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasVisitedMenuLevel;
    
    UPROPERTY(BlueprintReadOnly)
    EGameMode SelectedGameMode;
    
    UPROPERTY(BlueprintReadOnly)
    FCustomGameModeSettings CustomGameModeSettings;
    
    UPROPERTY(Transient)
    TSubclassOf<UGlobalColorTheme> CurrentUITheme;
    
    UPROPERTY(Transient)
    TSubclassOf<UGlobalColorTheme> CurrentNightUITheme;
    
private:
    UPROPERTY(Transient)
    TMap<UStaticMesh*, float> CachedMeshVolumes;
    
    UPROPERTY(Transient)
    USurvivalAutoPlayer* AutoPlayer;
    
    UPROPERTY(Transient)
    USurvivalMemoryReport* MemoryReport;
    
    UPROPERTY(Transient)
    UPhysicsStateManager* PhysicsStateManager;
    
    UPROPERTY(Transient)
    URenderStateManager* RenderStateManager;
    
    UPROPERTY(EditDefaultsOnly)
    EGameContentType EditorOverrideContentType;
    
    UPROPERTY(EditDefaultsOnly)
    EGamePackageType EditorOverridePackageType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UPhotoModeConfiguration* PhotoModeConfiguration;
    
private:
    UPROPERTY(Transient)
    TArray<AStencilStandInActor*> StencilStandIns;
    
public:
    USurvivalGameInstance();
    UFUNCTION(BlueprintCallable)
    void ValidateColorTheme();
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION()
    void OnSharedSaveAPIStatusUpdate(ESharedSaveAPIStatus NewSharedSaveStatus);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMPGameConnectionLost();
    
    UFUNCTION(BlueprintCallable)
    void LoadMainMenuLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadLobbyLevel();
    
    UFUNCTION(BlueprintCallable)
    void JoinOnlineSession(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingGamepadControls() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroundFoliage(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentLevelMenuLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentLevelGameOrLobby() const;
    
    UFUNCTION(BlueprintCallable)
    bool HostSession(bool bIsLAN, bool bIsPresence, bool bPasswordProtected, int32 MaxNumPlayers);
    
private:
    UFUNCTION()
    void HandleVOIPVolumeChanged(float Value);
    
    UFUNCTION()
    void HandleVoiceVolumeChanged(float Value);
    
    UFUNCTION()
    void HandleUIVolumeChanged(float Value);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleSetIsSinglePlayer(bool SinglePlayer);
    
private:
    UFUNCTION()
    void HandleReadToMeVoiceChanged(const FString& Name);
    
    UFUNCTION()
    void HandleReadToMeSpeedChanged(float Speed);
    
    UFUNCTION()
    void HandleReadToMeChanged(bool bReadToMe);
    
    UFUNCTION()
    void HandleNarrationVolumeChanged(float Value);
    
    UFUNCTION()
    void HandleMusicVolumeChanged(float Value);
    
    UFUNCTION()
    void HandleMasterVolumeChanged(float Value);
    
    UFUNCTION()
    void HandleEffectsVolumeChanged(float Value);
    
public:
    UFUNCTION()
    void HandleChatTextToSpeechChanged(bool bEnabled);
    
    UFUNCTION()
    void HandleChatSpeechToTextChanged(bool bEnabled);
    
private:
    UFUNCTION()
    void HandleAmbienceVolumeChanged(float Value);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UGlobalColorTheme>> GetUnlockedUIThemes() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGlobalColorTheme> GetUITheme() const;
    
    UFUNCTION(BlueprintPure)
    float GetSubmergedVolume(UStaticMesh* Mesh, FTransform Transform, float ZPlane, FVector& CenterOfMass);
    
    UFUNCTION(BlueprintPure)
    float GetSubmergedCollisionVolume(UStaticMesh* Mesh, FTransform Transform, float ZPlane, FVector& CenterOfMass);
    
    UFUNCTION(BlueprintPure)
    AStencilStandInActor* GetStencilStandInActorWithKey(const FFoliageKey& FoliageKey, const FBuildingGridBuildingId& BuildingKey);
    
    UFUNCTION(BlueprintPure)
    AStencilStandInActor* GetStencilStandInActor();
    
    UFUNCTION(BlueprintPure)
    float GetStaticMeshVolume(UStaticMesh* Mesh) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<USurvivalGameModeSettings> GetSelectedGameModeClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPowerTypeData(const FGameplayTag& Tag, FPowerTypeData& Data) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGlobalColorTheme> GetNightUITheme() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetInstancedBlueprintFromHitResult(const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    FText GetGameVersionStringWithTags() const;
    
    UFUNCTION(BlueprintPure)
    FString GetGameVersionString() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UStaticMesh*> GetFoliageMeshesFromItemHandle(FDataTableRowHandle ItemRowHandle, bool bForObjective) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFoliageIsClimbable(const UStaticMesh* StaticMesh, FGameplayTag ClimberTag) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFoliageHasClimbRole(const UStaticMesh* StaticMesh, FGameplayTag RoleTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UActorComponent*> GetFoliageClimbableSplines(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetFoliageBlueprintFromStaticMesh(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetFoliageBlueprintFromKey(const FFoliageKey& Key) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetFoliageBlueprintFromFoliageType(UFoliageType* FoliageType) const;
    
    UFUNCTION(BlueprintPure)
    FCustomGameModeSettings GetCustomGameSettings() const;
    
    UFUNCTION(BlueprintPure)
    EGameInputType GetCurrentGameInputType() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UAttractionComponent*, FAttractionCDOData> GetCDOAttractionData(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UActorComponent*> GetActorClimbableSplines(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExitOnlineSession();
    
    UFUNCTION()
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
    
    UFUNCTION(BlueprintPure)
    bool CanSwapFoliageWithAttacks(const UStaticMesh* StaticMesh) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSwapFoliageWithAttack(const UStaticMesh* StaticMesh, const FDamageData& DamageData, int32 Tier) const;
    
    UFUNCTION(BlueprintPure)
    bool CanDisplaceFoliage(const UStaticMesh* StaticMesh, EFoliageSwapLevel DisplaceLevel) const;
    
    UFUNCTION()
    void BeginLoadingScreen(const FString& InMapName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptInvite(const FBlueprintSessionResult AcceptedInvite);
    
};

