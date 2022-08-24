#include "SliderSettings.h"

FSliderSettings::FSliderSettings() {
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->StepSize = 0.00f;
    this->ValueFormat = EPhotoModeValueFormat::PlainNumber;
}

