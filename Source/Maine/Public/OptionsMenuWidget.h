#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "AnyControlMapping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
#include "OptionsMenuWidget.generated.h"

class UOptionsDropdownSpeechVoiceAsset;
class UVerticalBox;
class UWidgetSwitcher;
class ULabledSliderWidget;
class UScrollBox;
class UBottomButtonWidget;
class ULocalizedTextBlock;
class UBaseOptionsDropdownAsset;
class UWidget;
class ULabeledToggle;
class ULabeledDropdownWidget;
class UOptionsKeybindingsPopulator;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UOptionsMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UWidgetSwitcher* OptionTabs;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UScrollBox* ScrollBoxSettings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* DisplayList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* KeyboardList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* ControllerList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* SoundList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* HDRList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* AccessibilityList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVerticalBox* GameList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULocalizedTextBlock* SettingsTitle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UWidget* KeybindControlsParent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UWidget* ArachnophobiaPreview;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULocalizedTextBlock* SettingsDesc;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* ApplyButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* RevertButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UBottomButtonWidget* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* DefaultsButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* AutosaveIntervalSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* AutosavesNumberSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ShowTutorialToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* InteractHighlightLevelDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ExtraWideInteractToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* LanguageDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ShowPlayerDistanceToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* WindowModeDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* ResolutionDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* QualitySettingsDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* FSRQualityDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* FramerateLimitDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* VSyncToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* GammaSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* MotionBlurSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ChromaticAberrationToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* FOVSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* ResolutionSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* HDRMaxBrightnessSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* HDRContrastSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* HDRUIBrightnessSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* HDRUIContrastSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* InvertXToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* InvertYToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* CrouchToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* SprintToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* KeyboardLevelViewOnSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ControllerLevelViewOnSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* MouseSensXSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* MouseSensYSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ControllerInvertLookXToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ControllerInvertLookYToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ControllerInvertMoveXToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ControllerInvertMoveYToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* GamepadCrouchToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* GamepadSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* RumbleToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* GamepadSensXSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* GamepadSensYSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* LeftJoystickInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* LeftJoystickOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* RightJoystickInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* RightJoystickOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* DefaultKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* HotPouchKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* ConstructionKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* UIKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* PhotoModeKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* DefaultControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* HotPouchControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* ConstructionControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* UIControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOptionsKeybindingsPopulator* PhotoModeControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* MasterSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* EffectsSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* AmbienceSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* MusicSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* UISoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* NarrationSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* VoiceSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* VoiceChatSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* VoiceChatActivationDropdown;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* VoiceChatActivationAsset;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* ColorBlindDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* SubtitleDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* SubtitleSizeDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ReadToMeToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledDropdownWidget* ReadToMeVoiceDD;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* ReadToMeSpeedSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* LargeTextToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ChatTextToSpeechToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ChatSpeechToTextToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabledSliderWidget* ArachnophobiaSlider;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* ChatBackgroundToggle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    ULabeledToggle* SubtitleBackgroundToggle;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* WindowModeAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* FramerateLimitAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* QualitySettingsAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* FSRSettingsAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* ColorBlindSettingsAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* SubtitleAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* SubtitleSizeAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* InteractHighlightLevelAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseOptionsDropdownAsset* LanguageSettingAsset;
    
    UPROPERTY(Transient)
    UOptionsDropdownSpeechVoiceAsset* ReadToMeVoiceOptions;
    
    UPROPERTY(Export, Transient)
    TArray<UVerticalBox*> OptionsLists;
    
public:
    UOptionsMenuWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetAllToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void RevertPageSettings();
    
    UFUNCTION(BlueprintCallable)
    void RevertCachedAndUnconfirmedSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveControlMappings(const TArray<FAnyControlMapping>& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAxisMappings(const TArray<FInputAxisKeyMapping>& Value);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionMappings(const TArray<FInputActionKeyMapping>& Value);
    
    UFUNCTION(BlueprintPure)
    bool PageHasUnsavedChanges() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPrevTab();
    
    UFUNCTION(BlueprintCallable)
    void OnNextTab();
    
    UFUNCTION()
    void OnFSRQualitySelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCategoryChanged(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryButtonPressed(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NativeClampQualitySelectionToSafeValue();
    
    UFUNCTION(BlueprintPure)
    bool HasAnyUnsavedChanges() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleUnsafeQualitySelection();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FAnyControlMapping> FindConflicts(const FAnyControlMapping& Mapping) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyPageSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAllSettings();
    
};

