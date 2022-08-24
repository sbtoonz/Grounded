#include "HUDMarkerWidget.h"

void UHUDMarkerWidget::UpdateMarkerPosition() {
}

void UHUDMarkerWidget::UpdateMarkerFade() {
}

void UHUDMarkerWidget::UpdateMarkerDistance() {
}

void UHUDMarkerWidget::UpdateBuildingMarkerHealth() {
}

bool UHUDMarkerWidget::ShouldShowMarkerProgressBar() {
    return false;
}

bool UHUDMarkerWidget::ShouldShowMarkerArrow() {
    return false;
}

bool UHUDMarkerWidget::ShouldMarkerLockToScreen() {
    return false;
}

bool UHUDMarkerWidget::ShouldFadeMarkerAtEdge() {
    return false;
}


float UHUDMarkerWidget::GetMarkerScreenEdgeAlpha() {
    return 0.0f;
}

float UHUDMarkerWidget::GetMarkerLifetimeFade() {
    return 0.0f;
}

UHUDMarkerWidget::UHUDMarkerWidget() {
    this->MarkerData = NULL;
    this->MarkerOpacity = 0.00f;
    this->MarkerDistance = 0.00f;
    this->MarkerDistanceTruncated = 0;
    this->DistanceText = NULL;
    this->OuterBox = NULL;
    this->ArrowRotationOverlay = NULL;
    this->ArrowIcon = NULL;
    this->ProgressFillbar = NULL;
}

