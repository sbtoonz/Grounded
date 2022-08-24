#include "PhotoModeSettingsGroupBase.h"

class UPhotoModeSettingWidget;

void UPhotoModeSettingsGroupBase::RefreshAllSettings() {
}

bool UPhotoModeSettingsGroupBase::IsHDRActive() const {
    return false;
}

bool UPhotoModeSettingsGroupBase::HasSetting(EPhotoModeSetting Setting) const {
    return false;
}

UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetSettingWidgetWithTag(EPhotoModeSetting Setting, FName InAssociatedTag) const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetSetting(EPhotoModeSetting Setting) const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetHoveredSetting() const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetFocusedSetting() const {
    return NULL;
}

UPhotoModeSettingWidget* UPhotoModeSettingsGroupBase::GetFirstSetting() const {
    return NULL;
}

UPhotoModeSettingsGroupBase::UPhotoModeSettingsGroupBase() : UUserWidget(FObjectInitializer::Get()) {
    this->container = NULL;
    this->SettingsBox = NULL;
    this->SettingGroup = EPhotoSettingsGroup::None;
}

