#include "MaineGameUserSettings.h"

void UMaineGameUserSettings::SetYAxisInverted(bool Value) {
}

void UMaineGameUserSettings::SetXAxisInverted(bool Value) {
}

void UMaineGameUserSettings::SetVSyncWrapper(bool bEnabled) {
}

void UMaineGameUserSettings::SetVoiceSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetVoiceChatSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetVoiceChatActivation(EVoiceChatActivation Quality) {
}

void UMaineGameUserSettings::SetUISoundVolume(float Value) {
}

void UMaineGameUserSettings::SetSubtitleSize(ESubtitleSizeSettings Setting) {
}

void UMaineGameUserSettings::SetSubtitleMode(ESubtitleVerbositySettings Setting) {
}

void UMaineGameUserSettings::SetSubtitleBackground(bool Setting) {
}

void UMaineGameUserSettings::SetShowTutorial(bool NewShowTutorial) {
}

void UMaineGameUserSettings::SetReadToMeVoice(const FString& Setting) {
}

void UMaineGameUserSettings::SetReadToMeSpeed(float Setting) {
}

void UMaineGameUserSettings::SetReadToMe(bool Setting) {
}

void UMaineGameUserSettings::SetQualitySettings(EScalabilitySettings Quality) {
}

void UMaineGameUserSettings::SetPartyDistance(bool Setting) {
}

void UMaineGameUserSettings::SetNarrationSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetMusicSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetMouseToggleSprintEnabled(bool bEnabled) {
}

void UMaineGameUserSettings::SetMouseToggleCrouchEnabled(bool bEnabled) {
}

void UMaineGameUserSettings::SetMouseSensitivityY(float Value) {
}

void UMaineGameUserSettings::SetMouseSensitivityX(float Value) {
}

void UMaineGameUserSettings::SetMotionBlurScale(float NewMotionBlurScale) {
}

void UMaineGameUserSettings::SetMasterSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetLargeText(bool Setting) {
}

void UMaineGameUserSettings::SetLanguage(ELanguageSetting NewLanguage) {
}

void UMaineGameUserSettings::SetKeyboardLevelViewOnSprint(bool bEnabled) {
}

void UMaineGameUserSettings::SetInteractHighlightLevel(EInteractHighlightLevel NewInteractHighlightLevel) {
}

void UMaineGameUserSettings::SetHDRUIContrast(float Contrast) {
}

void UMaineGameUserSettings::SetHDRUIBrightness(float Brightness) {
}

void UMaineGameUserSettings::SetHDRMaxBrightness(float MaxBrightness) {
}

void UMaineGameUserSettings::SetHDRContrast(float Contrast) {
}

void UMaineGameUserSettings::SetHasSeenEarlyAccessMessage(bool bState) {
}

void UMaineGameUserSettings::SetHasSeenArachnophobiaMessage(bool bState) {
}

void UMaineGameUserSettings::SetHasSeenAccessibilityMessage(bool bState) {
}

void UMaineGameUserSettings::SetGammaLevel(float GammaLevelIn) {
}

void UMaineGameUserSettings::SetFSRQuality(int32 Quality) {
}

void UMaineGameUserSettings::SetFPSLimit(EFPSLimit FPSLimitIn) {
}

void UMaineGameUserSettings::SetFOV(float FOVIn) {
}

void UMaineGameUserSettings::SetExtraWideInteract(bool NewExtraWideInteract) {
}

void UMaineGameUserSettings::SetEffectsSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetControllerToggleSprintEnabled(bool bEnabled) {
}

void UMaineGameUserSettings::SetControllerToggleCrouchEnabled(bool bEnabled) {
}

void UMaineGameUserSettings::SetControllerSensitivityY(float Value) {
}

void UMaineGameUserSettings::SetControllerSensitivityX(float Value) {
}

void UMaineGameUserSettings::SetControllerRumbleEnabled(bool Value) {
}

void UMaineGameUserSettings::SetControllerRightOuterDeadZone(float Value) {
}

void UMaineGameUserSettings::SetControllerRightInnerDeadZone(float Value) {
}

void UMaineGameUserSettings::SetControllerMoveYInverted(bool Value) {
}

void UMaineGameUserSettings::SetControllerMoveXInverted(bool Value) {
}

void UMaineGameUserSettings::SetControllerLookYInverted(bool Value) {
}

void UMaineGameUserSettings::SetControllerLookXInverted(bool Value) {
}

void UMaineGameUserSettings::SetControllerLevelViewOnSprint(bool bEnabled) {
}

void UMaineGameUserSettings::SetControllerLeftOuterDeadZone(float Value) {
}

void UMaineGameUserSettings::SetControllerLeftInnerDeadZone(float Value) {
}

void UMaineGameUserSettings::SetColorblindMode(EColorBlindModeSettings Setting) {
}

void UMaineGameUserSettings::SetChromaticAberration(bool NewChromaticAberration) {
}

void UMaineGameUserSettings::SetChatTextToSpeech(bool Setting) {
}

void UMaineGameUserSettings::SetChatSpeechToText(bool Setting) {
}

void UMaineGameUserSettings::SetChatBackground(bool Setting) {
}

void UMaineGameUserSettings::SetAxisKeyBinds(TArray<FInputAxisKeyMapping> OldValues, TArray<FInputAxisKeyMapping> NewValues) {
}

void UMaineGameUserSettings::SetAutosavesNumber(float NewAutosavesNumber) {
}

void UMaineGameUserSettings::SetAutosaveInterval(float NewAutosaveInterval) {
}

void UMaineGameUserSettings::SetArachnophobiaSafeMode(float Setting) {
}

void UMaineGameUserSettings::SetAmbienceSoundVolume(float Value) {
}

void UMaineGameUserSettings::SetActionKeyBinds(TArray<FInputActionKeyMapping> OldValues, TArray<FInputActionKeyMapping> NewValues) {
}

void UMaineGameUserSettings::Set3DResolution(float ResolutionIn) {
}

void UMaineGameUserSettings::ResetAllKeyBinds() {
}

void UMaineGameUserSettings::RemoveMappings(TArray<FAnyControlMapping> Bindings) {
}

void UMaineGameUserSettings::RemoveActionMappings(TArray<FInputActionKeyMapping> Bindings) {
}

bool UMaineGameUserSettings::IsHDRSupported() const {
    return false;
}

bool UMaineGameUserSettings::GetYAxisInverted() const {
    return false;
}

bool UMaineGameUserSettings::GetXAxisInverted() const {
    return false;
}

bool UMaineGameUserSettings::GetVSyncWrapper() const {
    return false;
}

float UMaineGameUserSettings::GetVoiceSoundVolume() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetVoiceChatSoundVolume() const {
    return 0.0f;
}

EVoiceChatActivation UMaineGameUserSettings::GetVoiceChatActivation() const {
    return EVoiceChatActivation::Never;
}

float UMaineGameUserSettings::GetUISoundVolume() const {
    return 0.0f;
}

ESubtitleSizeSettings UMaineGameUserSettings::GetSubtitleSize() const {
    return ESubtitleSizeSettings::Small;
}

ESubtitleVerbositySettings UMaineGameUserSettings::GetSubtitleMode() const {
    return ESubtitleVerbositySettings::DialogueOnly;
}

bool UMaineGameUserSettings::GetSubtitleBackground() const {
    return false;
}

bool UMaineGameUserSettings::GetShowTutorial() const {
    return false;
}

FString UMaineGameUserSettings::GetReadToMeVoice() const {
    return TEXT("");
}

float UMaineGameUserSettings::GetReadToMeSpeed() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetReadToMe() const {
    return false;
}

EScalabilitySettings UMaineGameUserSettings::GetQualitySettings() const {
    return EScalabilitySettings::Low;
}

bool UMaineGameUserSettings::GetPartyDistance() const {
    return false;
}

float UMaineGameUserSettings::GetNarrationSoundVolume() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetMusicSoundVolume() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetMouseToggleSprintEnabled() const {
    return false;
}

bool UMaineGameUserSettings::GetMouseToggleCrouchEnabled() const {
    return false;
}

float UMaineGameUserSettings::GetMouseSensitivityY() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetMouseSensitivityX() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetMotionBlurScale() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetMasterSoundVolume() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetLargeText() const {
    return false;
}

ELanguageSetting UMaineGameUserSettings::GetLanguage() const {
    return ELanguageSetting::Arabic;
}

bool UMaineGameUserSettings::GetKeyboardLevelViewOnSprint() const {
    return false;
}

EInteractHighlightLevel UMaineGameUserSettings::GetInteractHighlightLevel() const {
    return EInteractHighlightLevel::None;
}

float UMaineGameUserSettings::GetHDRUIContrast() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetHDRUIBrightness() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetHDRMaxBrightness() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetHDRContrast() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetHasSeenEarlyAccessMessage() const {
    return false;
}

bool UMaineGameUserSettings::GetHasSeenArachnophobiaMessage() const {
    return false;
}

bool UMaineGameUserSettings::GetHasSeenAccessibilityMessage() const {
    return false;
}

float UMaineGameUserSettings::GetGammaLevel() const {
    return 0.0f;
}

int32 UMaineGameUserSettings::GetFSRQuality() const {
    return 0;
}

EFPSLimit UMaineGameUserSettings::GetFPSLimit() const {
    return EFPSLimit::Thirty;
}

float UMaineGameUserSettings::GetFOV() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetExtraWideInteract() const {
    return false;
}

float UMaineGameUserSettings::GetEffectsSoundVolume() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetControllerToggleSprintEnabled() const {
    return false;
}

bool UMaineGameUserSettings::GetControllerToggleCrouchEnabled() const {
    return false;
}

float UMaineGameUserSettings::GetControllerSensitivityY() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetControllerSensitivityX() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetControllerRumbleEnabled() const {
    return false;
}

float UMaineGameUserSettings::GetControllerRightOuterDeadZone() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetControllerRightInnerDeadZone() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetControllerMoveYInverted() const {
    return false;
}

bool UMaineGameUserSettings::GetControllerMoveXInverted() const {
    return false;
}

bool UMaineGameUserSettings::GetControllerLookYInverted() const {
    return false;
}

bool UMaineGameUserSettings::GetControllerLookXInverted() const {
    return false;
}

bool UMaineGameUserSettings::GetControllerLevelViewOnSprint() const {
    return false;
}

float UMaineGameUserSettings::GetControllerLeftOuterDeadZone() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetControllerLeftInnerDeadZone() const {
    return 0.0f;
}

bool UMaineGameUserSettings::GetColorblindModeEnabled() const {
    return false;
}

EColorBlindModeSettings UMaineGameUserSettings::GetColorblindMode() const {
    return EColorBlindModeSettings::None;
}

bool UMaineGameUserSettings::GetChromaticAberration() const {
    return false;
}

bool UMaineGameUserSettings::GetChatTextToSpeech() const {
    return false;
}

bool UMaineGameUserSettings::GetChatSpeechToText() const {
    return false;
}

bool UMaineGameUserSettings::GetChatBackground() const {
    return false;
}

TArray<FInputAxisKeyMapping> UMaineGameUserSettings::GetAxisKeyBinds(FName AxisName, bool bPositive) const {
    return TArray<FInputAxisKeyMapping>();
}

float UMaineGameUserSettings::GetAutosavesNumber() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetAutosaveInterval() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetArachnophobiaSafeMode() const {
    return 0.0f;
}

float UMaineGameUserSettings::GetAmbienceSoundVolume() const {
    return 0.0f;
}

TArray<FInputActionKeyMapping> UMaineGameUserSettings::GetAllKeyBinds() const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputAxisKeyMapping> UMaineGameUserSettings::GetAllAxisMappings() const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> UMaineGameUserSettings::GetActionKeyboardKeyBinds(FName ActionName) const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputActionKeyMapping> UMaineGameUserSettings::GetActionKeyBinds(FName ActionName) const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputActionKeyMapping> UMaineGameUserSettings::GetActionGamepadKeyBinds(FName ActionName) const {
    return TArray<FInputActionKeyMapping>();
}

float UMaineGameUserSettings::Get3DResolution() const {
    return 0.0f;
}

UMaineGameUserSettings::UMaineGameUserSettings() {
    this->bHasSeenArachnophobiaMessage = true;
    this->bHasSeenAccessibilityMessage = true;
    this->bHasSeenEarlyAccessMessage = true;
    this->MasterSoundVolume = 0.32f;
    this->EffectsSoundVolume = 1.00f;
    this->AmbienceSoundVolume = 0.80f;
    this->MusicSoundVolume = 0.29f;
    this->UISoundVolume = 0.88f;
    this->NarrationSoundVolume = 0.80f;
    this->VoiceSoundVolume = 0.80f;
    this->VoiceChatSoundVolume = 0.53f;
    this->VoiceChatActivation = EVoiceChatActivation::OnActivity;
    this->bXAxisInverted = false;
    this->bYAxisInverted = false;
    this->bControllerXAxisInverted = false;
    this->bControllerYAxisInverted = false;
    this->bControllerMoveXInverted = false;
    this->bControllerMoveYInverted = false;
    this->MouseSensitivityValue = 0.00f;
    this->MouseSensitivityValueX = 0.05f;
    this->MouseSensitivityValueY = 0.05f;
    this->ControllerSensitivity = 0.00f;
    this->ControllerSensitivityX = 0.50f;
    this->ControllerSensitivityY = 0.50f;
    this->bMouseToggleSprint = false;
    this->bMouseToggleCrouch = false;
    this->bControllerToggleSprint = true;
    this->bControllerToggleCrouch = true;
    this->bKeyboardLevelViewOnSprint = false;
    this->bControllerLevelViewOnSprint = false;
    this->bControllerRumbleEnabled = true;
    this->ControllerLeftInnerDeadZone = 0.15f;
    this->ControllerLeftOuterDeadZone = 0.05f;
    this->ControllerRightInnerDeadZone = 0.15f;
    this->ControllerRightOuterDeadZone = 0.05f;
    this->AutosaveInterval = 5.00f;
    this->AutosavesNumber = 5.00f;
    this->bShowTutorial = true;
    this->InteractHighlightLevel = EInteractHighlightLevel::All;
    this->bExtraWideInteract = false;
    this->LanguageSetting = ELanguageSetting::English;
    this->MotionBlurScale = 0.00f;
    this->ChromaticAberration = true;
    this->GammaLevel = 2.74f;
    this->FPSLimit = EFPSLimit::HundredSixty;
    this->Resolution3D = 100.00f;
    this->bHasRunHardwareBenchmark = true;
    this->bHasWarnedForUnsafeValues = false;
    this->DefaultQualitySettings = EScalabilitySettings::High;
    this->QualitySettings = EScalabilitySettings::Epic;
    this->FSRQualityLevel = 1;
    this->CustomFieldOfView = 120.00f;
    this->HDRMaxBrightness = 1000.00f;
    this->HDRContrast = 0.50f;
    this->HDRUIBrightness = 2.50f;
    this->HDRUIContrast = 0.50f;
    this->ColorBlindSetting = EColorBlindModeSettings::None;
    this->SubtitlesSetting = ESubtitleVerbositySettings::DialogueOnly;
    this->SubtitleSizeSetting = ESubtitleSizeSettings::Medium;
    this->bChatBackground = false;
    this->bSubtitleBackground = false;
    this->ArachnophobiaSafeMode = 0;
    this->bReadToMe = false;
    this->ReadToMeSpeed = 1.00f;
    this->bChatTextToSpeech = false;
    this->bChatSpeechToText = false;
    this->bLargeText = true;
    this->bPartyDistance = true;
    this->bSpecialPerformance = false;
}

