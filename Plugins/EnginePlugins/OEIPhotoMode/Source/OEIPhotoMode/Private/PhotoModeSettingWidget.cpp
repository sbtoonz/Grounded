#include "PhotoModeSettingWidget.h"

class AActor;
class UPhotoModeSettingWidget;

void UPhotoModeSettingWidget::SetValue(float Value) {
}

void UPhotoModeSettingWidget::SetSelectedIndex(int32 Index) {
}

void UPhotoModeSettingWidget::SetEquipmentVisibilityForActor(AActor* Actor, bool Visible) {
}

void UPhotoModeSettingWidget::SetEquipmentVisibility(bool Visible) {
}

void UPhotoModeSettingWidget::SetEnabledState(bool Enabled) {
}

void UPhotoModeSettingWidget::SetComboBoxOptions(const TArray<FLocString>& InOptions) {
}

void UPhotoModeSettingWidget::SetChecked(ECheckBoxState State) {
}

void UPhotoModeSettingWidget::RestorePrePhotoModeState() {
}

void UPhotoModeSettingWidget::RefreshSetting() {
}

void UPhotoModeSettingWidget::OnSliderValueChanged(float Value) {
}

void UPhotoModeSettingWidget::OnSettingChangedSlider(float Value) {
}

void UPhotoModeSettingWidget::OnSettingChangedComboBox(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UPhotoModeSettingWidget::OnSettingChangedCheckBox(bool bChecked) {
}

void UPhotoModeSettingWidget::OnPhotoModeSettingChanged(UPhotoModeSettingWidget* ChangedSetting) {
}



bool UPhotoModeSettingWidget::IsInputHovered() const {
    return false;
}

bool UPhotoModeSettingWidget::IsChecked() const {
    return false;
}

float UPhotoModeSettingWidget::GetValue() const {
    return 0.0f;
}

int32 UPhotoModeSettingWidget::GetSelectedIndex() const {
    return 0;
}

UPhotoModeSettingWidget::UPhotoModeSettingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Overlay = NULL;
    this->container = NULL;
    this->SettingTitleText = NULL;
    this->Slider = NULL;
    this->CheckBox = NULL;
    this->ComboBox = NULL;
    this->ValueText = NULL;
    this->ControlledSetting = EPhotoModeSetting::Custom0;
    this->ValueFormat = EPhotoModeValueFormat::PlainNumber;
    this->MaximumIntegralDigits = 3;
    this->MaximumFractionalDigits = 1;
    this->PrePhotoModeShowHideState = false;
}

