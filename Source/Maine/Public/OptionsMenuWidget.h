#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "GameFramework/PlayerInput.h"
#include "AnyControlMapping.h"
#include "GameFramework/PlayerInput.h"
#include "Types/SlateEnums.h"
#include "OptionsMenuWidget.generated.h"

class UOptionsDropdownSpeechVoiceAsset;
class UWidgetSwitcher;
class UScrollBox;
class UVerticalBox;
class UBottomButtonWidget;
class UWidget;
class ULocalizedTextBlock;
class ULabledSliderWidget;
class ULabeledToggle;
class ULabeledDropdownWidget;
class UOptionsKeybindingsPopulator;
class UBaseOptionsDropdownAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UOptionsMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* OptionTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBoxSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* DisplayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* KeyboardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* ControllerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* SoundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* HDRList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* AccessibilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* GameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULocalizedTextBlock* SettingsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* KeybindControlsParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* ArachnophobiaPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULocalizedTextBlock* SettingsDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBottomButtonWidget* ApplyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBottomButtonWidget* RevertButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBottomButtonWidget* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBottomButtonWidget* DefaultsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* AutosaveIntervalSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* AutosavesNumberSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ShowTutorialToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* InteractHighlightLevelDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ExtraWideInteractToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* LanguageDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ShowPlayerDistanceToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* WindowModeDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* ResolutionDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* QualitySettingsDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* FSRQualityDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* FramerateLimitDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* VSyncToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* GammaSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* MotionBlurSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ChromaticAberrationToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* FOVSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* ResolutionSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* HDRMaxBrightnessSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* HDRContrastSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* HDRUIBrightnessSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* HDRUIContrastSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* InvertXToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* InvertYToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* CrouchToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* SprintToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* KeyboardLevelViewOnSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ControllerLevelViewOnSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* MouseSensXSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* MouseSensYSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ControllerInvertLookXToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ControllerInvertLookYToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ControllerInvertMoveXToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ControllerInvertMoveYToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* GamepadCrouchToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* GamepadSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* RumbleToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* GamepadSensXSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* GamepadSensYSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* LeftJoystickInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* LeftJoystickOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* RightJoystickInnerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* RightJoystickOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* DefaultKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* HotPouchKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* ConstructionKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* UIKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* PhotoModeKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* DefaultControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* HotPouchControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* ConstructionControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* UIControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionsKeybindingsPopulator* PhotoModeControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* MasterSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* EffectsSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* AmbienceSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* MusicSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* UISoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* NarrationSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* VoiceSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* VoiceChatSoundSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* VoiceChatActivationDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* VoiceChatActivationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* ColorBlindDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* SubtitleDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* SubtitleSizeDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ReadToMeToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledDropdownWidget* ReadToMeVoiceDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* ReadToMeSpeedSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* LargeTextToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ChatTextToSpeechToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ChatSpeechToTextToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabledSliderWidget* ArachnophobiaSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* ChatBackgroundToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULabeledToggle* SubtitleBackgroundToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* WindowModeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* FramerateLimitAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* QualitySettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* FSRSettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* ColorBlindSettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* SubtitleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* SubtitleSizeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* InteractHighlightLevelAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseOptionsDropdownAsset* LanguageSettingAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOptionsDropdownSpeechVoiceAsset* ReadToMeVoiceOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PageHasUnsavedChanges() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPrevTab();
    
    UFUNCTION(BlueprintCallable)
    void OnNextTab();
    
    UFUNCTION()
    void OnFSRQualitySelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryChanged(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryButtonPressed(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NativeClampQualitySelectionToSafeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnsavedChanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUnsafeQualitySelection();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAnyControlMapping> FindConflicts(const FAnyControlMapping& Mapping) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyPageSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAllSettings();
    
};

