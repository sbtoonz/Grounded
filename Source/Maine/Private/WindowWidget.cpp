#include "WindowWidget.h"

class UWidget;

void UWindowWidget::SetFramerateLimitOnWidgetStackChanged() {
}

void UWindowWidget::SetDefaultUserFocus() {
}

void UWindowWidget::ResetWidget_Implementation() {
}

void UWindowWidget::RefreshWidget_Implementation() {
}


EWindowInputMode UWindowWidget::GetInputMode() const {
    return EWindowInputMode::UI;
}

UWidget* UWindowWidget::GetDefaultUserFocus_Implementation() const {
    return NULL;
}

void UWindowWidget::CloseWindow() {
}

UWindowWidget::UWindowWidget() {
    this->bLimitsFramerate = false;
    this->bHidesHUD = true;
    this->bShowsCursor = true;
    this->PauseBehavior = EWindowPauseBehavior::DoNotPause;
    this->bIsPopUpWindow = false;
    this->bIsFullscreenWindow = false;
    this->bGarbageCollectOnClose = true;
    this->bCacheOnClose = false;
    this->bForceThirdPerson = true;
    this->bShowPlayerIsBusy = true;
    this->bRefreshOnOwnerInventoryChange = false;
    this->bResetOnOwnerInventoryChange = false;
    this->InputMode = EWindowInputMode::UI;
}

