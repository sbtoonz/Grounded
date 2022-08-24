#include "CustomPropertiesWindowWidget.h"

class UCustomPropertyWidget;

void UCustomPropertiesWindowWidget::ResetToDefaults() {
}

void UCustomPropertiesWindowWidget::OnInputChanged(FName PropertyName, float PropertyValue) {
}

UCustomPropertyWidget* UCustomPropertiesWindowWidget::GetWidgetForProperty(FName Property) {
    return NULL;
}

UCustomPropertiesWindowWidget::UCustomPropertiesWindowWidget() {
    this->container = NULL;
    this->SettingsBox = NULL;
    this->CustomPropertyWidgetClass = NULL;
}

