#include "ProximityInventoryComponent.h"

class UItem;

int32 UProximityInventoryComponent::RemoveItem_Implementation(UItem* Item, int32 Count) {
    return 0;
}

void UProximityInventoryComponent::OnInventoryChanged() {
}

int32 UProximityInventoryComponent::GetNumNearbyInventories(bool bOnlyIncludeStorageInventories) const {
    return 0;
}

TArray<UItem*> UProximityInventoryComponent::GetItems_Implementation() const {
    return TArray<UItem*>();
}

void UProximityInventoryComponent::ClearInventories() {
}

void UProximityInventoryComponent::CacheInventories() {
}

UProximityInventoryComponent::UProximityInventoryComponent() {
    this->Radius = 1000.00f;
}

