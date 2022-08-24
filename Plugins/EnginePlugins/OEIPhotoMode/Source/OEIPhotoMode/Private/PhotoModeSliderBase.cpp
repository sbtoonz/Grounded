#include "PhotoModeSliderBase.h"

void UPhotoModeSliderBase::OnFocusChanged(bool HasFocus) {
}

void UPhotoModeSliderBase::OnCaptureEnd() {
}

void UPhotoModeSliderBase::OnCaptureBegin() {
}

void UPhotoModeSliderBase::HandleValueChanged(float NewValue) {
}

UPhotoModeSliderBase::UPhotoModeSliderBase() {
    this->Focused = false;
    this->PreviousValue = 0.00f;
}

