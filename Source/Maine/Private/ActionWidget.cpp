#include "ActionWidget.h"

class UActionWidget;

bool UActionWidget::ShouldShowControl() const {
    return false;
}

void UActionWidget::SetShowMouseKeyboardControls(bool bValue) {
}

void UActionWidget::SetShowGamepadControls(bool bValue) {
}

void UActionWidget::SetAction(FName InActionName, bool bInAxisPositive) {
}

void UActionWidget::Refresh_Implementation() {
}

void UActionWidget::NativeOnUsingGamepadChanged(bool bIsUsingGamepad) {
}

bool UActionWidget::IsDisplayingSameButton(const UActionWidget* Other) const {
    return false;
}

void UActionWidget::HandleCultureChanged() {
}

void UActionWidget::HandleAxisMappingChanged(const FInputAxisKeyMapping& Value) {
}

void UActionWidget::HandleActionMappingChanged(const FInputActionKeyMapping& Value) {
}

FKey UActionWidget::GetFirstActionKey() const {
    return FKey{};
}

UActionWidget::UActionWidget() {
    this->KeyText = NULL;
    this->ButtonImage = NULL;
    this->bAxisPositive = true;
    this->bShowMouseKeyboardControls = true;
    this->bShowGamepadControls = true;
}

