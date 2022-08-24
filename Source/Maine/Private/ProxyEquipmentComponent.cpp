#include "ProxyEquipmentComponent.h"

class UItem;

bool UProxyEquipmentComponent::HasSlot(EEquipmentSlot Slot) const {
    return false;
}

UItem* UProxyEquipmentComponent::GetItemInSlot(EEquipmentSlot Slot) const {
    return NULL;
}

TArray<EEquipmentSlot> UProxyEquipmentComponent::GetEquipmentSlots() const {
    return TArray<EEquipmentSlot>();
}

UProxyEquipmentComponent::UProxyEquipmentComponent() {
}

