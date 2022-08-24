#include "PhotoModeCheckBoxBase.h"

void UPhotoModeCheckBoxBase::SetBrushes(FSlateBrush InCheckedImage, FSlateBrush InUncheckedImage, FSlateBrush InCheckedPressedImage, FSlateBrush InUncheckedPressedImage, FSlateBrush InHoveredFocusedCheckedImage, FSlateBrush InHoveredFocusedUncheckedImage) {
}

void UPhotoModeCheckBoxBase::OnFocusChanged(bool HasFocus) {
}

UPhotoModeCheckBoxBase::UPhotoModeCheckBoxBase() {
    this->Focused = false;
}

