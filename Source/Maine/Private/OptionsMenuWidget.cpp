#include "OptionsMenuWidget.h"

void UOptionsMenuWidget::SetAllToDefaults() {
}

void UOptionsMenuWidget::RevertPageSettings() {
}

void UOptionsMenuWidget::RevertCachedAndUnconfirmedSettings() {
}

void UOptionsMenuWidget::RemoveControlMappings(const TArray<FAnyControlMapping>& Value) {
}

void UOptionsMenuWidget::RemoveAxisMappings(const TArray<FInputAxisKeyMapping>& Value) {
}

void UOptionsMenuWidget::RemoveActionMappings(const TArray<FInputActionKeyMapping>& Value) {
}

bool UOptionsMenuWidget::PageHasUnsavedChanges() const {
    return false;
}

void UOptionsMenuWidget::OnPrevTab() {
}

void UOptionsMenuWidget::OnNextTab() {
}

void UOptionsMenuWidget::OnFSRQualitySelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


void UOptionsMenuWidget::OnCategoryButtonPressed(int32 Index) {
}

void UOptionsMenuWidget::NativeClampQualitySelectionToSafeValue() {
}

bool UOptionsMenuWidget::HasAnyUnsavedChanges() const {
    return false;
}


TArray<FAnyControlMapping> UOptionsMenuWidget::FindConflicts(const FAnyControlMapping& Mapping) const {
    return TArray<FAnyControlMapping>();
}

void UOptionsMenuWidget::ApplyPageSettings() {
}

void UOptionsMenuWidget::ApplyAllSettings() {
}

UOptionsMenuWidget::UOptionsMenuWidget() {
    this->OptionTabs = NULL;
    this->ScrollBoxSettings = NULL;
    this->DisplayList = NULL;
    this->KeyboardList = NULL;
    this->ControllerList = NULL;
    this->SoundList = NULL;
    this->HDRList = NULL;
    this->AccessibilityList = NULL;
    this->GameList = NULL;
    this->SettingsTitle = NULL;
    this->KeybindControlsParent = NULL;
    this->ArachnophobiaPreview = NULL;
    this->SettingsDesc = NULL;
    this->ApplyButton = NULL;
    this->RevertButton = NULL;
    this->CloseButton = NULL;
    this->DefaultsButton = NULL;
    this->AutosaveIntervalSlider = NULL;
    this->AutosavesNumberSlider = NULL;
    this->ShowTutorialToggle = NULL;
    this->InteractHighlightLevelDD = NULL;
    this->ExtraWideInteractToggle = NULL;
    this->LanguageDD = NULL;
    this->ShowPlayerDistanceToggle = NULL;
    this->WindowModeDD = NULL;
    this->ResolutionDD = NULL;
    this->QualitySettingsDD = NULL;
    this->FSRQualityDD = NULL;
    this->FramerateLimitDD = NULL;
    this->VSyncToggle = NULL;
    this->GammaSlider = NULL;
    this->MotionBlurSlider = NULL;
    this->ChromaticAberrationToggle = NULL;
    this->FOVSlider = NULL;
    this->ResolutionSlider = NULL;
    this->HDRMaxBrightnessSlider = NULL;
    this->HDRContrastSlider = NULL;
    this->HDRUIBrightnessSlider = NULL;
    this->HDRUIContrastSlider = NULL;
    this->InvertXToggle = NULL;
    this->InvertYToggle = NULL;
    this->CrouchToggle = NULL;
    this->SprintToggle = NULL;
    this->KeyboardLevelViewOnSprintToggle = NULL;
    this->ControllerLevelViewOnSprintToggle = NULL;
    this->MouseSensXSlider = NULL;
    this->MouseSensYSlider = NULL;
    this->ControllerInvertLookXToggle = NULL;
    this->ControllerInvertLookYToggle = NULL;
    this->ControllerInvertMoveXToggle = NULL;
    this->ControllerInvertMoveYToggle = NULL;
    this->GamepadCrouchToggle = NULL;
    this->GamepadSprintToggle = NULL;
    this->RumbleToggle = NULL;
    this->GamepadSensXSlider = NULL;
    this->GamepadSensYSlider = NULL;
    this->LeftJoystickInnerDeadZone = NULL;
    this->LeftJoystickOuterDeadZone = NULL;
    this->RightJoystickInnerDeadZone = NULL;
    this->RightJoystickOuterDeadZone = NULL;
    this->DefaultKeyboardBindings = NULL;
    this->HotPouchKeyboardBindings = NULL;
    this->ConstructionKeyboardBindings = NULL;
    this->UIKeyboardBindings = NULL;
    this->PhotoModeKeyboardBindings = NULL;
    this->DefaultControllerBindings = NULL;
    this->HotPouchControllerBindings = NULL;
    this->ConstructionControllerBindings = NULL;
    this->UIControllerBindings = NULL;
    this->PhotoModeControllerBindings = NULL;
    this->MasterSoundSlider = NULL;
    this->EffectsSoundSlider = NULL;
    this->AmbienceSoundSlider = NULL;
    this->MusicSoundSlider = NULL;
    this->UISoundSlider = NULL;
    this->NarrationSoundSlider = NULL;
    this->VoiceSoundSlider = NULL;
    this->VoiceChatSoundSlider = NULL;
    this->VoiceChatActivationDropdown = NULL;
    this->VoiceChatActivationAsset = NULL;
    this->ColorBlindDD = NULL;
    this->SubtitleDD = NULL;
    this->SubtitleSizeDD = NULL;
    this->ReadToMeToggle = NULL;
    this->ReadToMeVoiceDD = NULL;
    this->ReadToMeSpeedSlider = NULL;
    this->LargeTextToggle = NULL;
    this->ChatTextToSpeechToggle = NULL;
    this->ChatSpeechToTextToggle = NULL;
    this->ArachnophobiaSlider = NULL;
    this->ChatBackgroundToggle = NULL;
    this->SubtitleBackgroundToggle = NULL;
    this->WindowModeAsset = NULL;
    this->FramerateLimitAsset = NULL;
    this->QualitySettingsAsset = NULL;
    this->FSRSettingsAsset = NULL;
    this->ColorBlindSettingsAsset = NULL;
    this->SubtitleAsset = NULL;
    this->SubtitleSizeAsset = NULL;
    this->InteractHighlightLevelAsset = NULL;
    this->LanguageSettingAsset = NULL;
    this->ReadToMeVoiceOptions = NULL;
}

