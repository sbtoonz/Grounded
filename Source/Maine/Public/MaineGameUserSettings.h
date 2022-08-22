#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
#include "EInteractHighlightLevel.h"
#include "EVoiceChatActivation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
#include "InputActionKeyMappingDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
#include "InputAxisKeyMappingDelegateDelegate.h"
#include "ELanguageSetting.h"
#include "EFPSLimit.h"
#include "EScalabilitySettings.h"
#include "SettingChangedInt32Delegate.h"
#include "SettingChangedFloatDelegate.h"
#include "EColorBlindModeSettings.h"
#include "SettingChangedColorBlindDelegate.h"
#include "ESubtitleVerbositySettings.h"
#include "SettingChangedSubtitlesDelegate.h"
#include "ESubtitleSizeSettings.h"
#include "SettingChangedSubtitleSizeDelegate.h"
#include "SettingChangedBoolDelegate.h"
#include "SettingChangedStringDelegate.h"
#include "AnyControlMapping.h"
#include "MaineGameUserSettings.generated.h"

UCLASS()
class MAINE_API UMaineGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bHasSeenArachnophobiaMessage;
    
    UPROPERTY(Config)
    bool bHasSeenAccessibilityMessage;
    
    UPROPERTY(Config)
    bool bHasSeenEarlyAccessMessage;
    
    UPROPERTY(Config)
    float MasterSoundVolume;
    
    UPROPERTY(Config)
    float EffectsSoundVolume;
    
    UPROPERTY(Config)
    float AmbienceSoundVolume;
    
    UPROPERTY(Config)
    float MusicSoundVolume;
    
    UPROPERTY(Config)
    float UISoundVolume;
    
    UPROPERTY(Config)
    float NarrationSoundVolume;
    
    UPROPERTY(Config)
    float VoiceSoundVolume;
    
    UPROPERTY(Config)
    float VoiceChatSoundVolume;
    
    UPROPERTY(Config)
    EVoiceChatActivation VoiceChatActivation;
    
    UPROPERTY(Config)
    bool bXAxisInverted;
    
    UPROPERTY(Config)
    bool bYAxisInverted;
    
    UPROPERTY(Config)
    bool bControllerXAxisInverted;
    
    UPROPERTY(Config)
    bool bControllerYAxisInverted;
    
    UPROPERTY(Config)
    bool bControllerMoveXInverted;
    
    UPROPERTY(Config)
    bool bControllerMoveYInverted;
    
    UPROPERTY(Config)
    float MouseSensitivityValue;
    
    UPROPERTY(Config)
    float MouseSensitivityValueX;
    
    UPROPERTY(Config)
    float MouseSensitivityValueY;
    
    UPROPERTY(Config)
    float ControllerSensitivity;
    
    UPROPERTY(Config)
    float ControllerSensitivityX;
    
    UPROPERTY(Config)
    float ControllerSensitivityY;
    
    UPROPERTY(Config)
    bool bMouseToggleSprint;
    
    UPROPERTY(Config)
    bool bMouseToggleCrouch;
    
    UPROPERTY(Config)
    bool bControllerToggleSprint;
    
    UPROPERTY(Config)
    bool bControllerToggleCrouch;
    
    UPROPERTY(Config)
    bool bKeyboardLevelViewOnSprint;
    
    UPROPERTY(Config)
    bool bControllerLevelViewOnSprint;
    
    UPROPERTY(Config)
    bool bControllerRumbleEnabled;
    
    UPROPERTY(Config)
    float ControllerLeftInnerDeadZone;
    
    UPROPERTY(Config)
    float ControllerLeftOuterDeadZone;
    
    UPROPERTY(Config)
    float ControllerRightInnerDeadZone;
    
    UPROPERTY(Config)
    float ControllerRightOuterDeadZone;
    
    UPROPERTY(BlueprintAssignable)
    FInputActionKeyMappingDelegate ActionMappingChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisKeyMappingDelegate AxisMappingChangedDelegate;
    
protected:
    UPROPERTY(Config)
    TArray<FInputActionKeyMapping> AddedActionKeyBinds;
    
    UPROPERTY(Config)
    TArray<FInputActionKeyMapping> RemovedActionKeyBinds;
    
    UPROPERTY(Config)
    TArray<FInputAxisKeyMapping> AddedAxisKeyBinds;
    
    UPROPERTY(Config)
    TArray<FInputAxisKeyMapping> RemovedAxisKeyBinds;
    
public:
    UPROPERTY(Config)
    float AutosaveInterval;
    
    UPROPERTY(Config)
    float AutosavesNumber;
    
    UPROPERTY(Config)
    bool bShowTutorial;
    
    UPROPERTY(Config)
    EInteractHighlightLevel InteractHighlightLevel;
    
    UPROPERTY(Config)
    bool bExtraWideInteract;
    
    UPROPERTY(Config)
    ELanguageSetting LanguageSetting;
    
    UPROPERTY(Config)
    float MotionBlurScale;
    
    UPROPERTY(Config)
    bool ChromaticAberration;
    
    UPROPERTY(Config)
    float GammaLevel;
    
    UPROPERTY(Config)
    EFPSLimit FPSLimit;
    
    UPROPERTY(Config)
    float Resolution3D;
    
    UPROPERTY(Config)
    bool bHasRunHardwareBenchmark;
    
    UPROPERTY(BlueprintReadWrite, Config)
    bool bHasWarnedForUnsafeValues;
    
    UPROPERTY(Config)
    EScalabilitySettings DefaultQualitySettings;
    
    UPROPERTY(Config)
    EScalabilitySettings QualitySettings;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedInt32 QualitySettingsChangedDelegate;
    
    UPROPERTY(Config)
    int32 FSRQualityLevel;
    
    UPROPERTY(Config)
    float CustomFieldOfView;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedFloat FieldOfViewChangedDelegate;
    
    UPROPERTY(Config)
    float HDRMaxBrightness;
    
    UPROPERTY(Config)
    float HDRContrast;
    
    UPROPERTY(Config)
    float HDRUIBrightness;
    
    UPROPERTY(Config)
    float HDRUIContrast;
    
    UPROPERTY(Config)
    EColorBlindModeSettings ColorBlindSetting;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedColorBlind ColorblindChangedDelegate;
    
    UPROPERTY(Config)
    ESubtitleVerbositySettings SubtitlesSetting;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedSubtitles SubtitlesChangedDelegate;
    
    UPROPERTY(Config)
    ESubtitleSizeSettings SubtitleSizeSetting;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedSubtitleSize SubtitleSizeChangedDelegate;
    
    UPROPERTY(Config)
    bool bChatBackground;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool ChatBackgroundChangedDelegate;
    
    UPROPERTY(Config)
    bool bSubtitleBackground;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool SubtitleBackgroundChangedDelegate;
    
    UPROPERTY(Config)
    int32 ArachnophobiaSafeMode;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedInt32 ArachnophobiaSafeModeChangedDelegate;
    
    UPROPERTY(Config)
    bool bReadToMe;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool ReadToMeChangedDelegate;
    
    UPROPERTY(Config)
    FString ReadToMeVoice;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedString ReadToMeVoiceChangedDelegate;
    
    UPROPERTY(Config)
    float ReadToMeSpeed;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedFloat ReadToMeSpeedChangedDelegate;
    
    UPROPERTY(Config)
    bool bChatTextToSpeech;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool ChatTextToSpeechChangedDelegate;
    
    UPROPERTY(Config)
    bool bChatSpeechToText;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool ChatSpeechToTextChangedDelegate;
    
    UPROPERTY(Config)
    bool bLargeText;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool LargeTextChangedDelegate;
    
    UPROPERTY(Config)
    bool bPartyDistance;
    
    UPROPERTY(BlueprintAssignable)
    FSettingChangedBool PartyDistanceChangedDelegate;
    
    UPROPERTY(Config)
    bool bSpecialPerformance;
    
    UMaineGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetYAxisInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetXAxisInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncWrapper(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatActivation(EVoiceChatActivation Quality);
    
    UFUNCTION(BlueprintCallable)
    void SetUISoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleSize(ESubtitleSizeSettings Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleMode(ESubtitleVerbositySettings Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleBackground(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetShowTutorial(bool NewShowTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetReadToMeVoice(const FString& Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetReadToMeSpeed(float Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetReadToMe(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetQualitySettings(EScalabilitySettings Quality);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyDistance(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetNarrationSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseToggleSprintEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseToggleCrouchEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityY(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityX(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurScale(float NewMotionBlurScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLargeText(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguage(ELanguageSetting NewLanguage);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardLevelViewOnSprint(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractHighlightLevel(EInteractHighlightLevel NewInteractHighlightLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRUIContrast(float Contrast);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRUIBrightness(float Brightness);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRMaxBrightness(float MaxBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRContrast(float Contrast);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenEarlyAccessMessage(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenArachnophobiaMessage(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenAccessibilityMessage(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetGammaLevel(float GammaLevelIn);
    
    UFUNCTION(BlueprintCallable)
    void SetFSRQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSLimit(EFPSLimit FPSLimitIn);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float FOVIn);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraWideInteract(bool NewExtraWideInteract);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerToggleSprintEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerToggleCrouchEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerSensitivityY(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerSensitivityX(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerRumbleEnabled(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerRightOuterDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerRightInnerDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerMoveYInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerMoveXInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookYInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookXInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLevelViewOnSprint(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLeftOuterDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLeftInnerDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorblindMode(EColorBlindModeSettings Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetChromaticAberration(bool NewChromaticAberration);
    
    UFUNCTION(BlueprintCallable)
    void SetChatTextToSpeech(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetChatSpeechToText(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetChatBackground(bool Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisKeyBinds(TArray<FInputAxisKeyMapping> OldValues, TArray<FInputAxisKeyMapping> NewValues);
    
    UFUNCTION(BlueprintCallable)
    void SetAutosavesNumber(float NewAutosavesNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetAutosaveInterval(float NewAutosaveInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetArachnophobiaSafeMode(float Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbienceSoundVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActionKeyBinds(TArray<FInputActionKeyMapping> OldValues, TArray<FInputActionKeyMapping> NewValues);
    
    UFUNCTION(BlueprintCallable)
    void Set3DResolution(float ResolutionIn);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllKeyBinds();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMappings(TArray<FAnyControlMapping> Bindings);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionMappings(TArray<FInputActionKeyMapping> Bindings);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsHDRSupported() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetYAxisInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetXAxisInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVSyncWrapper() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoiceSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoiceChatSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    EVoiceChatActivation GetVoiceChatActivation() const;
    
    UFUNCTION(BlueprintPure)
    float GetUISoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    ESubtitleSizeSettings GetSubtitleSize() const;
    
    UFUNCTION(BlueprintPure)
    ESubtitleVerbositySettings GetSubtitleMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSubtitleBackground() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowTutorial() const;
    
    UFUNCTION(BlueprintPure)
    FString GetReadToMeVoice() const;
    
    UFUNCTION(BlueprintPure)
    float GetReadToMeSpeed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetReadToMe() const;
    
    UFUNCTION(BlueprintPure)
    EScalabilitySettings GetQualitySettings() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPartyDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetNarrationSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetMusicSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMouseToggleSprintEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMouseToggleCrouchEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetMouseSensitivityY() const;
    
    UFUNCTION(BlueprintPure)
    float GetMouseSensitivityX() const;
    
    UFUNCTION(BlueprintPure)
    float GetMotionBlurScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetMasterSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLargeText() const;
    
    UFUNCTION(BlueprintPure)
    ELanguageSetting GetLanguage() const;
    
    UFUNCTION(BlueprintPure)
    bool GetKeyboardLevelViewOnSprint() const;
    
    UFUNCTION(BlueprintPure)
    EInteractHighlightLevel GetInteractHighlightLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetHDRUIContrast() const;
    
    UFUNCTION(BlueprintPure)
    float GetHDRUIBrightness() const;
    
    UFUNCTION(BlueprintPure)
    float GetHDRMaxBrightness() const;
    
    UFUNCTION(BlueprintPure)
    float GetHDRContrast() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasSeenEarlyAccessMessage() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasSeenArachnophobiaMessage() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasSeenAccessibilityMessage() const;
    
    UFUNCTION(BlueprintPure)
    float GetGammaLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFSRQuality() const;
    
    UFUNCTION(BlueprintPure)
    EFPSLimit GetFPSLimit() const;
    
    UFUNCTION(BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExtraWideInteract() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectsSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerToggleSprintEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerToggleCrouchEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerSensitivityY() const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerSensitivityX() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerRumbleEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerRightOuterDeadZone() const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerRightInnerDeadZone() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerMoveYInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerMoveXInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerLookYInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerLookXInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControllerLevelViewOnSprint() const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerLeftOuterDeadZone() const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerLeftInnerDeadZone() const;
    
    UFUNCTION(BlueprintPure)
    bool GetColorblindModeEnabled() const;
    
    UFUNCTION(BlueprintPure)
    EColorBlindModeSettings GetColorblindMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetChromaticAberration() const;
    
    UFUNCTION(BlueprintPure)
    bool GetChatTextToSpeech() const;
    
    UFUNCTION(BlueprintPure)
    bool GetChatSpeechToText() const;
    
    UFUNCTION(BlueprintPure)
    bool GetChatBackground() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAxisKeyBinds(FName AxisName, bool bPositive) const;
    
    UFUNCTION(BlueprintPure)
    float GetAutosavesNumber() const;
    
    UFUNCTION(BlueprintPure)
    float GetAutosaveInterval() const;
    
    UFUNCTION(BlueprintPure)
    float GetArachnophobiaSafeMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetAmbienceSoundVolume() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetAllKeyBinds() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAllAxisMappings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetActionKeyboardKeyBinds(FName ActionName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetActionKeyBinds(FName ActionName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetActionGamepadKeyBinds(FName ActionName) const;
    
    UFUNCTION(BlueprintPure)
    float Get3DResolution() const;
    
};

