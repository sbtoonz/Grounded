#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnSaveBeginDelegate.h"
#include "OnSaveActionCompleteDelegate.h"
#include "OnHeaderDataUpdateCompleteDelegate.h"
#include "OnActiveUserChangedDelegate.h"
#include "OnLoadActionCompleteDelegate.h"
#include "OnDeleteActionCompleteDelegate.h"
#include "ESharedSavePermissionsLevel.h"
#include "OnSaveGameHeadersLoadedCompleteDelegate.h"
#include "OnCheckIfNeedsSaveConversionCompleteDelegate.h"
#include "OnConvertOldSavesCompleteDelegate.h"
#include "OnUserGameSettingsLoadCompleteDelegate.h"
#include "OnSharedSaveAuthorizeCompleteDelegate.h"
#include "OnSharedSaveAuthorizeFailureDelegate.h"
#include "OnSharedSaveAPIStatusUpdateDelegate.h"
#include "ESaveGameType.h"
#include "EPlayerRestoreResult.h"
#include "ESaveLoadRestriction.h"
#include "UObject/NoExportTypes.h"
#include "ESharedSaveAPIStatus.h"
#include "SaveLoadManager.generated.h"

class UMaineGameUserSettings;
class USaveGameHeaderData;
class UTextureRenderTarget2D;
class UGlobalSaveLoadData;
class APlayerController;

UCLASS(Blueprintable)
class MAINE_API USaveLoadManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveGameHeaderData* SaveInProgressSaveGameHeaderData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveBegin OnSaveBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveActionComplete OnSaveComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeaderDataUpdateComplete OnHeaderDataUpdateComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveUserChanged OnActiveUserChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadActionComplete OnLoadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteActionComplete OnDeleteComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveGameHeadersLoadedComplete OnSaveGameHeadersLoadedComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckIfNeedsSaveConversionComplete OnCheckIfNeedsSaveConversionComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConvertOldSavesComplete OnConvertOldSavesComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserGameSettingsLoadComplete OnUserGameSettingsLoadComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USaveGameHeaderData*> SaveGameHeaderDatas;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSharedSaveAuthorizeComplete OnSharedSaveAddAuthorizeCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSharedSaveAuthorizeComplete OnSharedSaveRemoveAuthorizeCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSharedSaveAuthorizeFailure OnSharedSaveAuthorizeFailureDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSharedSaveAPIStatusUpdate OnSharedSaveAPIStatusUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentPlaythroughSharedSaveID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameHeaderData* SaveDataToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameHeaderData* QuickLoadSaveData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ScreenshotRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaineGameUserSettings* MaineSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalSaveLoadData* GlobalSaveLoadData;
    
public:
    USaveLoadManager();
    UFUNCTION(BlueprintCallable)
    void UnpauseSave();
    
    UFUNCTION(BlueprintCallable)
    void SyncSharedSaves();
    
    UFUNCTION(BlueprintCallable)
    void SignalSharedSaveHeartbeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRestorePersistence() const;
    
    UFUNCTION(BlueprintCallable)
    void SharedSavedStopPost();
    
    UFUNCTION(BlueprintCallable)
    void SetSaveGameHeaderDatasRequireLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlaythroughUsingSharedSaves(bool IsUsingSharedSaves);
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlaythroughContainsEarlyAccessSave(FGuid PlaythroughGuid) const;
    
    UFUNCTION(BlueprintCallable)
    void PauseSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadUserGameSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadSaveGameHeaderDatas();
    
    UFUNCTION(BlueprintCallable)
    void Load(USaveGameHeaderData* SaveGameHeader);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncingSharedSaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSharedSaveBeingHostedBy(const FString& xuid, const FString& Username, const FString& SharedSaveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRenamingSharedSavesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcessingSharedSaveCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentPlaythroughUsingSharedSaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughStorageForNewSave() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSaveConversion();
    
    UFUNCTION(BlueprintCallable)
    void HandleCheckIfNeedsSaveConversion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSharedSaveUsers(const FString& SharedSaveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSharedSaveUserIDs(const FString& SharedSaveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSharedSaveUserID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSharedSaveUserDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESharedSavePermissionsLevel GetSharedSavePermissionsLevel(const FString& xuid, const FString& Username, const FString& SharedSaveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESharedSaveAPIStatus GetSharedSaveAPIStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USaveGameHeaderData* GetSaveDataToLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSaveConvertPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    int64 GetRemainingStorage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USaveGameHeaderData* GetOldestSaveForPlaythrough(FGuid PlaythroughGuid, bool IncludeEarlyAccessSaves) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSavesForPlaythrough(FGuid PlaythroughGuid, bool IncludeEarlyAccessSaves) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfOwnedSharedSaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESharedSavePermissionsLevel GetCurrentPlaythroughSharedSavePermissionsLevel() const;
    
    UFUNCTION(BlueprintCallable)
    FString ExportSave(USaveGameHeaderData* HeaderData);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool EnsureSignIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoSaveGameHeaderDatasRequireLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveLoadRestriction CanSaveGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDelete() const;
    
    UFUNCTION(BlueprintCallable)
    void AuthorizeSharedSaveUser(const FString& xuid, const FString& Username, const FString& SharedSaveID);
    
};

