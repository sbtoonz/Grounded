#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnSaveBeginDelegate.h"
#include "OnSaveActionCompleteDelegate.h"
#include "OnHeaderDataUpdateCompleteDelegate.h"
#include "OnActiveUserChangedDelegate.h"
#include "OnLoadActionCompleteDelegate.h"
#include "OnDeleteActionCompleteDelegate.h"
#include "OnSaveGameHeadersLoadedCompleteDelegate.h"
#include "OnCheckIfNeedsSaveConversionCompleteDelegate.h"
#include "OnConvertOldSavesCompleteDelegate.h"
#include "OnUserGameSettingsLoadCompleteDelegate.h"
#include "ESharedSavePermissionsLevel.h"
#include "OnSharedSaveAuthorizeCompleteDelegate.h"
#include "OnSharedSaveAuthorizeFailureDelegate.h"
#include "OnSharedSaveAPIStatusUpdateDelegate.h"
#include "ESaveGameType.h"
#include "EPlayerRestoreResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ESharedSaveAPIStatus.h"
#include "ESaveLoadRestriction.h"
#include "SaveLoadManager.generated.h"

class USaveGameHeaderData;
class UTextureRenderTarget2D;
class UMaineGameUserSettings;
class UGlobalSaveLoadData;
class APlayerController;

UCLASS(BlueprintType)
class MAINE_API USaveLoadManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USaveGameHeaderData* SaveInProgressSaveGameHeaderData;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveBegin OnSaveBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveActionComplete OnSaveComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnHeaderDataUpdateComplete OnHeaderDataUpdateComplete;
    
    UPROPERTY()
    FOnActiveUserChanged OnActiveUserChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadActionComplete OnLoadComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnDeleteActionComplete OnDeleteComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveGameHeadersLoadedComplete OnSaveGameHeadersLoadedComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnCheckIfNeedsSaveConversionComplete OnCheckIfNeedsSaveConversionComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnConvertOldSavesComplete OnConvertOldSavesComplete;
    
    UPROPERTY()
    FOnUserGameSettingsLoadComplete OnUserGameSettingsLoadComplete;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USaveGameHeaderData*> SaveGameHeaderDatas;
    
    UPROPERTY(BlueprintAssignable)
    FOnSharedSaveAuthorizeComplete OnSharedSaveAddAuthorizeCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSharedSaveAuthorizeComplete OnSharedSaveRemoveAuthorizeCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSharedSaveAuthorizeFailure OnSharedSaveAuthorizeFailureDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSharedSaveAPIStatusUpdate OnSharedSaveAPIStatusUpdateDelegate;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrentPlaythroughSharedSaveID;
    
protected:
    UPROPERTY()
    USaveGameHeaderData* SaveDataToLoad;
    
    UPROPERTY(BlueprintReadOnly)
    USaveGameHeaderData* QuickLoadSaveData;
    
private:
    UPROPERTY()
    UTextureRenderTarget2D* ScreenshotRenderTarget;
    
    UPROPERTY()
    UMaineGameUserSettings* MaineSettings;
    
    UPROPERTY()
    UGlobalSaveLoadData* GlobalSaveLoadData;
    
public:
    USaveLoadManager();
    UFUNCTION(BlueprintCallable)
    void UnpauseSave();
    
    UFUNCTION(BlueprintCallable)
    void SyncSharedSaves();
    
    UFUNCTION(BlueprintCallable)
    void SignalSharedSaveHeartbeat();
    
    UFUNCTION(BlueprintPure)
    bool ShouldRestorePersistence() const;
    
    UFUNCTION(BlueprintCallable)
    void SharedSavedStopPost();
    
    UFUNCTION(BlueprintCallable)
    void SetSaveGameHeaderDatasRequireLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlaythroughUsingSharedSaves(bool IsUsingSharedSaves);
    
    UFUNCTION(Exec)
    void SaveUserGameSettings(bool bSettingsPotentiallyChanged);
    
    UFUNCTION(BlueprintCallable)
    void Save(ESaveGameType SaveGameType);
    
    UFUNCTION(BlueprintCallable)
    EPlayerRestoreResult RestoreNewPlayerFromController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RequestAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void RenameSave(USaveGameHeaderData* HeaderData, const FString& NewSaveName);
    
    UFUNCTION(BlueprintCallable)
    void RenamePlaythrough(FGuid PlaythroughGrid, const FString& NewPlaythroughName);
    
    UFUNCTION(BlueprintCallable)
    void PauseSave();
    
    UFUNCTION(Exec)
    void LoadUserGameSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadSaveGameHeaderDatas();
    
    UFUNCTION(BlueprintCallable)
    void Load(USaveGameHeaderData* SaveGameHeader);
    
    UFUNCTION(BlueprintPure)
    bool IsSyncingSharedSaves() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSharedSaveBeingHostedBy(const FString& xuid, const FString& Username, const FString& SharedSaveID);
    
    UFUNCTION(BlueprintPure)
    bool IsRenamingSharedSavesEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsProcessingSharedSaveCommand() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentPlaythroughUsingSharedSaves() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEnoughStorageForNewSave() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSaveConversion();
    
    UFUNCTION(BlueprintCallable)
    void HandleCheckIfNeedsSaveConversion();
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetSharedSaveUsers(const FString& SharedSaveID);
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetSharedSaveUserIDs(const FString& SharedSaveID);
    
    UFUNCTION(BlueprintPure)
    FString GetSharedSaveUserID();
    
    UFUNCTION(BlueprintPure)
    FString GetSharedSaveUserDisplayName();
    
    UFUNCTION(BlueprintPure)
    ESharedSavePermissionsLevel GetSharedSavePermissionsLevel(const FString& xuid, const FString& Username, const FString& SharedSaveID);
    
    UFUNCTION(BlueprintPure)
    ESharedSaveAPIStatus GetSharedSaveAPIStatus() const;
    
    UFUNCTION(BlueprintPure)
    USaveGameHeaderData* GetSaveDataToLoad() const;
    
    UFUNCTION(BlueprintPure)
    float GetSaveConvertPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    int64 GetRemainingStorage();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfOwnedSharedSaves() const;
    
    UFUNCTION(BlueprintPure)
    ESharedSavePermissionsLevel GetCurrentPlaythroughSharedSavePermissionsLevel() const;
    
    UFUNCTION(BlueprintCallable)
    FString ExportSave(USaveGameHeaderData* HeaderData);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool EnsureSignIn();
    
    UFUNCTION(BlueprintPure)
    bool DoSaveGameHeaderDatasRequireLoad() const;
    
    UFUNCTION(BlueprintPure)
    bool DidLoadFromSaveGame() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllSharedSavesSelf();
    
    UFUNCTION(BlueprintCallable)
    void Delete(USaveGameHeaderData* SaveGameHeader);
    
    UFUNCTION(BlueprintCallable)
    void DeauthorizeSharedSaveUserSelf(const FString& SharedSaveID);
    
    UFUNCTION(BlueprintCallable)
    void DeauthorizeSharedSaveUser(const FString& xuid, const FString& SharedSaveID);
    
    UFUNCTION(BlueprintCallable)
    void CreateStandardSaveCopyAndDelete(USaveGameHeaderData* SharedSave);
    
    UFUNCTION(BlueprintCallable)
    void CreateStandardSaveCopy(USaveGameHeaderData* SharedSave);
    
    UFUNCTION(BlueprintCallable)
    void ConvertStandardSaveToSharedSave(USaveGameHeaderData* StandardSave);
    
    UFUNCTION(BlueprintCallable)
    void ClearQuickLoadSaveHandle();
    
    UFUNCTION(BlueprintPure)
    ESaveLoadRestriction CanSaveGame() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSave() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLoad() const;
    
    UFUNCTION(BlueprintPure)
    bool CanDelete() const;
    
    UFUNCTION(BlueprintCallable)
    void AuthorizeSharedSaveUser(const FString& xuid, const FString& Username, const FString& SharedSaveID);
    
};

