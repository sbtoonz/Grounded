#include "PhotoModeComboBoxBase.h"

void UPhotoModeComboBoxBase::SetBrushes(FSlateBrush InNormalImage, FSlateBrush InHoveredFocusedImage, FSlateBrush InPressedStyle) {
}

void UPhotoModeComboBoxBase::OnFocusChanged(bool HasFocus) {
}

UPhotoModeComboBoxBase::UPhotoModeComboBoxBase() {
    this->Focused = false;
}

