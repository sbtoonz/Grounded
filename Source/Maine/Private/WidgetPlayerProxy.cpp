#include "WidgetPlayerProxy.h"

class UItem;

TArray<UItem*> UWidgetPlayerProxy::GetInventoryAndEquippedItems() {
    return TArray<UItem*>();
}

TArray<UItem*> UWidgetPlayerProxy::GetInventoryAndEquippedAndHauledItems() {
    return TArray<UItem*>();
}

TArray<UItem*> UWidgetPlayerProxy::GetAllItemsAndNearbyItems() {
    return TArray<UItem*>();
}

UWidgetPlayerProxy::UWidgetPlayerProxy() {
    this->EquippedMainHandItem = NULL;
    this->EquippedOffHandItem = NULL;
    this->EquippedHeadItem = NULL;
    this->EquippedChestItem = NULL;
    this->EquippedArmsItem = NULL;
    this->EquippedLegsItem = NULL;
    this->EquippedGliderItem = NULL;
}

