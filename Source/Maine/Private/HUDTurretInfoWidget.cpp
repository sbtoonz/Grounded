#include "HUDTurretInfoWidget.h"

class ATurretPawn;



void UHUDTurretInfoWidget::NotifyTurretPawnChanged(ATurretPawn* TurretPawn) {
}

UHUDTurretInfoWidget::UHUDTurretInfoWidget() {
    this->CurrentTurret = NULL;
}

