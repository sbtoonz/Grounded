#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeValues -FallbackName=PhotoModeValues
#include "WindowWidget.h"
#include "PhotoModeHUD.generated.h"

class USoundBase;
class UMainePhotoModeSettings;
class UCanvasPanel;
class APhotoPawn;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UPhotoModeHUD : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMainePhotoModeSettings* NewSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* UIToggledVisibleSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* UIToggledHiddenSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* ButtonDownActionSound;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FPhotoModeValues PhotoModeDefaults;
    
public:
    UPhotoModeHUD();
    UFUNCTION(BlueprintCallable)
    void ToggleUIVisibility();
    
    UFUNCTION(BlueprintCallable)
    void TogglePhotoModeSettings();
    
    UFUNCTION()
    void TakePhotoOverride(APhotoPawn* PhotoPawn);
    
    UFUNCTION(BlueprintCallable)
    void ShowUI();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OpenPhotoModeSettings();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingsOpened();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSettingsClosed();
    
public:
    UFUNCTION()
    void OnPhotoTaken();
    
private:
    UFUNCTION()
    void OnPhotoModePreExit();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHUDVisible() const;
    
    UFUNCTION(BlueprintCallable)
    void HideUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGenericMessage(const FString& Message, UTexture2D* MessageIcon);
    
    UFUNCTION(BlueprintCallable)
    void ExitPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void ClosePhotoModeSettings();
    
    UFUNCTION(BlueprintPure)
    bool AreSettingsOpen() const;
    
};

