#include "CustomPropertyWidget.h"


void UCustomPropertyWidget::SetEnabledState(bool Enabled) {
}

void UCustomPropertyWidget::SetComboBoxOptions(const TArray<FLocString>& InOptions) {
}

void UCustomPropertyWidget::ResetToDefaults() {
}

void UCustomPropertyWidget::OnSliderValueChanged(float Value) {
}

void UCustomPropertyWidget::OnSettingChangedSlider(float Value) {
}

void UCustomPropertyWidget::OnSettingChangedComboBox(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UCustomPropertyWidget::OnSettingChangedCheckBox(bool bChecked) {
}


UCustomPropertyWidget::UCustomPropertyWidget() {
    this->Overlay = NULL;
    this->container = NULL;
    this->SettingTitleText = NULL;
    this->Slider = NULL;
    this->CheckBoxSizeBox = NULL;
    this->CheckBox = NULL;
    this->ComboBox = NULL;
    this->ValueText = NULL;
    this->MaximumIntegralDigits = 3;
    this->MaximumFractionalDigits = 1;
}

