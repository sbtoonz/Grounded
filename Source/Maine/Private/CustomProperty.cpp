#include "CustomProperty.h"

FCustomProperty::FCustomProperty() {
    this->InputType = ECustomPropertyInputType::Slider;
    this->DefaultValue = 0.00f;
    this->SliderMinValue = 0.00f;
    this->SliderMaxValue = 0.00f;
    this->SliderStepSize = 0.00f;
    this->ValueFormat = ECustomPropertyValueFormat::PlainNumber;
}

