#include "LabledSliderWidget.h"

float ULabledSliderWidget::ValueToNormalized(float Value) const {
    return 0.0f;
}

void ULabledSliderWidget::OnSliderValueChanged(float ChangedValue) {
}

void ULabledSliderWidget::OnSliderMouseCaptureEnd() {
}

float ULabledSliderWidget::NormalizedToValue(float Normalized) const {
    return 0.0f;
}

void ULabledSliderWidget::HandleSliderControllerCaptureEnd() {
}

void ULabledSliderWidget::HandleSliderControllerCaptureBegin() {
}

ULabledSliderWidget::ULabledSliderWidget() {
    this->ValueTextBlock = NULL;
    this->Slider = NULL;
    this->ApplyImmediately = false;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->StepSize = 0.10f;
    this->TextDisplayType = ETextDisplayType::Percentage;
}

