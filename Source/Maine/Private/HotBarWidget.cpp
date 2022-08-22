#include "HotBarWidget.h"

void UHotBarWidget::OnSelectedItemChanged() {
}


UHotBarWidget::UHotBarWidget() {
    this->SelectedSlot = 0;
    this->CurrentPage = 0;
    this->bUsingHotBar = false;
}

