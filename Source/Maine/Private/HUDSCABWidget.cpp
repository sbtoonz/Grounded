#include "HUDSCABWidget.h"

class USurvivalComponent;
class UHealthComponent;




void UHUDSCABWidget::UpdateRadarVisuals() {
}



void UHUDSCABWidget::OnHourChange(int32 NewHour, int32 NewDay) {
}

void UHUDSCABWidget::CheckWaterChange(USurvivalComponent* Sender, float OldValue, float NewValue) {
}

void UHUDSCABWidget::CheckStaminaRatio(float NewRatio) {
}

void UHUDSCABWidget::CheckHealthChange(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth) {
}

void UHUDSCABWidget::CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue) {
}

UHUDSCABWidget::UHUDSCABWidget() {
    this->SignalProcessAnim = NULL;
    this->SignalArrived = NULL;
    this->SignalAppear = NULL;
    this->CurrentNormalizedTime = 0.00f;
    this->LastTransmitterFrame = 0;
}

