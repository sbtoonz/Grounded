#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "PhotoModeValues.h"
#include "PhotoModeHUD.generated.h"

class UTexture2D;
class UMainePhotoModeSettings;
class UCanvasPanel;
class USoundBase;
class APhotoPawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UPhotoModeHUD : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainePhotoModeSettings* NewSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* UIToggledVisibleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* UIToggledHiddenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ButtonDownActionSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoModeValues PhotoModeDefaults;
    
public:
    UPhotoModeHUD();
    UFUNCTION(BlueprintCallable)
    void ToggleUIVisibility();
    
    UFUNCTION(BlueprintCallable)
    void TogglePhotoModeSettings();
    
    UFUNCTION(BlueprintCallable)
    void TakePhotoOverride(APhotoPawn* PhotoPawn);
    
    UFUNCTION(BlueprintCallable)
    void ShowUI();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OpenPhotoModeSettings();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPhotoTaken();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPhotoModePreExit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisible() const;
    
    UFUNCTION(BlueprintCallable)
    void HideUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGenericMessage(const FString& Message, UTexture2D* MessageIcon);
    
    UFUNCTION(BlueprintCallable)
    void ExitPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void ClosePhotoModeSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSettingsOpen() const;
    
};

