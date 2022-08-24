#include "BaseSlotWidget.h"

class UItem;

void UBaseSlotWidget::OnItemRefChanged(UItem* Item) {
}


bool UBaseSlotWidget::GetIsSelected() const {
    return false;
}


void UBaseSlotWidget::EvaluateItemIsNewVisuals() {
}

UBaseSlotWidget::UBaseSlotWidget() {
    this->bSelected = false;
    this->ItemButton = NULL;
    this->TooltipAnchor = NULL;
}

