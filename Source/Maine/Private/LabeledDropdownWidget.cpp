#include "LabeledDropdownWidget.h"

void ULabeledDropdownWidget::OnSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void ULabeledDropdownWidget::InitManual(int32 SelectedIndex) {
}

void ULabeledDropdownWidget::Init(const TArray<FString>& Options, int32 SelectedIndex) {
}

ULabeledDropdownWidget::ULabeledDropdownWidget() {
    this->DropdownSelection = NULL;
    this->DropDownAsset = NULL;
    this->LastConfirmedValue = 0;
}

