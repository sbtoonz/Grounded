#include "BuildingHealthWidget.h"

void UBuildingHealthWidget::ShowBar() {
}

void UBuildingHealthWidget::HideBar() {
}



UBuildingHealthWidget::UBuildingHealthWidget() {
    this->HealthHolder = NULL;
    this->HealthBar = NULL;
    this->HideDelay = 0.00f;
    this->TargetActor = NULL;
    this->HealthComponent = NULL;
    this->bShowingBar = false;
}

