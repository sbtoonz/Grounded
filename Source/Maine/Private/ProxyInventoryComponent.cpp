#include "ProxyInventoryComponent.h"

class UItem;

bool UProxyInventoryComponent::IsInventoryFull() const {
    return false;
}

bool UProxyInventoryComponent::IsInventoryEmpty() const {
    return false;
}

UItem* UProxyInventoryComponent::FindPartialItemStackForItemHandle(FDataTableRowHandle ItemRowHandle) const {
    return NULL;
}

UItem* UProxyInventoryComponent::FindPartialItemStackForItem(UItem* Item) const {
    return NULL;
}

UProxyInventoryComponent::UProxyInventoryComponent() {
    this->MaxSize = 0;
}

