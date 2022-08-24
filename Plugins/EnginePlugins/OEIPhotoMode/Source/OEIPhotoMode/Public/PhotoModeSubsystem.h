#pragma once
#include "CoreMinimal.h"
#include "OnPhotoModePreEnteredDelegate.h"
#include "OnPhotoModeEntryUnallowedDelegate.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnPhotoModePrePauseDelegate.h"
#include "PhotoModeEntryAllowedDelegate.h"
#include "PhotoModeExitAllowedDelegate.h"
#include "OnPhotoModeEnteredDelegate.h"
#include "PhotoModeGeneralOptions.h"
#include "OnPhotoModePreExitDelegate.h"
#include "OnPhotoModeExitedDelegate.h"
#include "OnPhotoPawnChangedDelegate.h"
#include "TakePhotoOverrideDelegate.h"
#include "OnPhotoTakenDelegate.h"
#include "OnPhotoPawnSetupInputDelegate.h"
#include "SpawnPoseableCloneOverrideDelegate.h"
#include "DestroyPoseableCloneOverrideDelegate.h"
#include "HideOriginalPawnOverrideDelegate.h"
#include "ShowOriginalPawnOverrideDelegate.h"
#include "HidePoseableCloneOverrideDelegate.h"
#include "ShowPoseableCloneOverrideDelegate.h"
#include "PhotoModeConfig.h"
#include "OnPhotoModeSettingChangedDelegate.h"
#include "PhotoModeValues.h"
#include "PhotoModeUIOptions.h"
#include "EPhotoPawnType.h"
#include "PhotoModeSubsystem.generated.h"

class UPhotoModeSettingsInterface;
class IPhotoModeSettingsInterface;
class UMaterialParameterCollection;
class ACharacter;
class UObject;
class APhotoPawn;
class UPhotoModeUIDelegates;
class APlayerController;
class APawn;

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModePrePause OnPhotoModePrePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeEntryAllowed PhotoModeEntryAllowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModeEntryUnallowed OnPhotoModeEntryUnallowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeExitAllowed PhotoModeExitAllowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModePreEntered OnPhotoModePreEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModeEntered OnPhotoModeEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModePreExit OnPhotoModePreExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModeExited OnPhotoModeExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoPawnChanged OnPhotoPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTakePhotoOverride TakePhotoOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoTaken OnPhotoTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoPawnSetupInput OnPhotoPawnSetupInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoseableCloneOverride SpawnPoseableCloneOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestroyPoseableCloneOverride DestroyPoseableCloneOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHideOriginalPawnOverride HideOriginalPawnOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowOriginalPawnOverride ShowOriginalPawnOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHidePoseableCloneOverride HidePoseableCloneOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowPoseableCloneOverride ShowPoseableCloneOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhotoModeSettingChanged OnPhotoModeSettingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserCameraSpeedMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeConfig Config;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhotoPawn* PhotoPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PhotoModeMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* PoseableClone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeUIDelegates* UIDelegateObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPhotoModeSettingsInterface> UISettingsInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeValues PrePhotoModeValues;
    
public:
    UPhotoModeSubsystem();
    UFUNCTION(BlueprintCallable)
    void ToggleTIme();
    
    UFUNCTION(BlueprintCallable)
    bool TogglePhotoMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ShowPoseableClone();
    
    UFUNCTION(BlueprintCallable)
    void ShowOriginalPawn();
    
    UFUNCTION(BlueprintCallable)
    void SetPoseableClone(ACharacter* InClone);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeQualityCVars(bool Reset);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeConfig(FPhotoModeConfig& InConfig);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTime();
    
    UFUNCTION(BlueprintCallable)
    void PauseTime();
    
    UFUNCTION(BlueprintCallable)
    bool OnRequestExitPhotoMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool OnRequestEnterPhotoMode(APlayerController* PlayerController, APawn* InstigatingPossessedPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimePaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPhotoMode() const;
    
    UFUNCTION(BlueprintCallable)
    void HidePoseableClone();
    
    UFUNCTION(BlueprintCallable)
    void HideOriginalPawn();
    
    UFUNCTION(BlueprintCallable)
    UPhotoModeUIDelegates* GetUIDelegatesObject() const;
    
    UFUNCTION(BlueprintCallable)
    FPhotoModeValues GetPrePhotoModeSettingValues();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPoseableClone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPhotoOutputPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPhotoModeUIOptions GetPhotoModeUIOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APhotoPawn* GetPhotoModePawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialParameterCollection* GetPhotoModeMPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPhotoModeGeneralOptions GetPhotoModeGeneralOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPhotoBaseFilename() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOriginalPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ACharacter* GetGlobalPoseableClone(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static APhotoPawn* GetGlobalPhotoModePawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static APawn* GetGlobalOriginalPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerController* GetGlobalActivatingPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetActivatingPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExitPhotoMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool EnterPhotoMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    APhotoPawn* ChangePawnType(EPhotoPawnType NewType);
    
};

