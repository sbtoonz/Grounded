#include "PhotoModeSettingsBase.h"

class UPhotoModeSettingWidget;
class UPhotoModeSettingsGroupBase;

void UPhotoModeSettingsBase::RefreshAllSettings() {
}

void UPhotoModeSettingsBase::GoToPreviousGroup() {
}

void UPhotoModeSettingsBase::GoToNextGroup() {
}

void UPhotoModeSettingsBase::GoToGroupByIndex(int32 Index) {
}

UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetSettingWidgetWithTag(EPhotoModeSetting Setting, FName InAssociatedTag) const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetSettingWidget(EPhotoModeSetting Setting) const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetHoveredSetting() const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsBase::GetFocusedSetting() const {
    return NULL;
}

UPhotoModeSettingsGroupBase* UPhotoModeSettingsBase::GetCurrentSettingsGroup() const {
    return NULL;
}

UPhotoModeSettingsBase::UPhotoModeSettingsBase() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleText = NULL;
    this->SettingsGroupSwitcher = NULL;
    this->MouseDownInWidget = false;
}

