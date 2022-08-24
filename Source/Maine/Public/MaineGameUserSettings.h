#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/GameUserSettings.h"
#include "EInteractHighlightLevel.h"
#include "EVoiceChatActivation.h"
#include "InputActionKeyMappingDelegateDelegate.h"
#include "GameFramework/PlayerInput.h"
#include "InputAxisKeyMappingDelegateDelegate.h"
#include "SettingChangedSubtitlesDelegate.h"
#include "ELanguageSetting.h"
#include "EFPSLimit.h"
#include "EScalabilitySettings.h"
#include "SettingChangedInt32Delegate.h"
#include "SettingChangedFloatDelegate.h"
#include "EColorBlindModeSettings.h"
#include "SettingChangedColorBlindDelegate.h"
#include "ESubtitleVerbositySettings.h"
#include "ESubtitleSizeSettings.h"
#include "SettingChangedSubtitleSizeDelegate.h"
#include "SettingChangedBoolDelegate.h"
#include "SettingChangedStringDelegate.h"
#include "AnyControlMapping.h"
#include "MaineGameUserSettings.generated.h"

UCLASS(Blueprintable)
class MAINE_API UMaineGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenArachnophobiaMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenAccessibilityMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenEarlyAccessMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectsSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbienceSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UISoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NarrationSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceChatSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoiceChatActivation VoiceChatActivation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bXAxisInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bYAxisInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerXAxisInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerYAxisInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerMoveXInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerMoveYInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityValueX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityValueY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseToggleCrouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerToggleCrouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeyboardLevelViewOnSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerLevelViewOnSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerRumbleEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLeftInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLeftOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerRightInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerRightOuterDeadZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMappingDelegate ActionMappingChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisKeyMappingDelegate AxisMappingChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> AddedActionKeyBinds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> RemovedActionKeyBinds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AddedAxisKeyBinds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> RemovedAxisKeyBinds;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutosaveInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutosavesNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTutorial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractHighlightLevel InteractHighlightLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtraWideInteract;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguageSetting LanguageSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionBlurScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChromaticAberration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GammaLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFPSLimit FPSLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Resolution3D;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRunHardwareBenchmark;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWarnedForUnsafeValues;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScalabilitySettings DefaultQualitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScalabilitySettings QualitySettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedInt32 QualitySettingsChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FSRQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomFieldOfView;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedFloat FieldOfViewChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRContrast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRUIBrightness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRUIContrast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorBlindModeSettings ColorBlindSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedColorBlind ColorblindChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleVerbositySettings SubtitlesSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedSubtitles SubtitlesChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleSizeSettings SubtitleSizeSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedSubtitleSize SubtitleSizeChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChatBackground;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool ChatBackgroundChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleBackground;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool SubtitleBackgroundChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArachnophobiaSafeMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedInt32 ArachnophobiaSafeModeChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadToMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool ReadToMeChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReadToMeVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedString ReadToMeVoiceChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReadToMeSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedFloat ReadToMeSpeedChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChatTextToSpeech;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool ChatTextToSpeechChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChatSpeechToText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool ChatSpeechToTextChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLargeText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool LargeTextChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPartyDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingChangedBool PartyDistanceChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHDRSupported() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetYAxisInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXAxisInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncWrapper() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceChatSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoiceChatActivation GetVoiceChatActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUISoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubtitleSizeSettings GetSubtitleSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubtitleVerbositySettings GetSubtitleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtitleBackground() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetReadToMeVoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReadToMeSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReadToMe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScalabilitySettings GetQualitySettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartyDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNarrationSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseToggleSprintEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseToggleCrouchEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionBlurScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLargeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELanguageSetting GetLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKeyboardLevelViewOnSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractHighlightLevel GetInteractHighlightLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRUIContrast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRUIBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRMaxBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRContrast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenEarlyAccessMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenArachnophobiaMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSeenAccessibilityMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFSRQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFPSLimit GetFPSLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExtraWideInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectsSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerToggleSprintEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerToggleCrouchEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerSensitivityY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerSensitivityX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerRumbleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerRightOuterDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerRightInnerDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerMoveYInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerMoveXInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerLookYInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerLookXInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerLevelViewOnSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerLeftOuterDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerLeftInnerDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetColorblindModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EColorBlindModeSettings GetColorblindMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChromaticAberration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChatTextToSpeech() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChatSpeechToText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChatBackground() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAxisKeyBinds(FName AxisName, bool bPositive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutosavesNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutosaveInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArachnophobiaSafeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbienceSoundVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetAllKeyBinds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAllAxisMappings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetActionKeyboardKeyBinds(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetActionKeyBinds(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetActionGamepadKeyBinds(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Get3DResolution() const;
    
};

