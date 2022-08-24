#include "HungerReadoutWidget.h"

class USurvivalComponent;


void UHungerReadoutWidget::CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue) {
}

UHungerReadoutWidget::UHungerReadoutWidget() {
    this->LastPlayerHunger = 1.00f;
    this->CurrentDisplayedHunger = 1.00f;
    this->HungerRatio = 0.00f;
}

