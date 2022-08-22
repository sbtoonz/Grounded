#include "BaseSettingsWidget.h"

void UBaseSettingsWidget::SetLocalizedInfo(FLocString InDisplayString, FLocString InDescString) {
}

void UBaseSettingsWidget::SetCacheAndConfirm(bool bState) {
}

void UBaseSettingsWidget::SetApplyImmediately(bool bState) {
}

void UBaseSettingsWidget::NotifyHovered() {
}

void UBaseSettingsWidget::NotifyFocused() {
}

bool UBaseSettingsWidget::IsCacheAndConfirmSetting() {
    return false;
}

bool UBaseSettingsWidget::GetShowKeybindingControls() const {
    return false;
}

UBaseSettingsWidget::UBaseSettingsWidget() {
    this->TitleTextBlock = NULL;
    this->bShowKeybindingControls = false;
    this->bApplyImmediately = false;
    this->bCacheAndConfirm = false;
    this->PlatformSetting = EPlatformToggleSetting::All;
}

