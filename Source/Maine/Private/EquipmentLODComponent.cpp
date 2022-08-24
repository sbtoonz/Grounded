#include "EquipmentLODComponent.h"

class UItem;

bool UEquipmentLODComponent::HasSlot(EEquipmentSlot Slot) const {
    return false;
}

UItem* UEquipmentLODComponent::GetItemInSlot(EEquipmentSlot Slot) const {
    return NULL;
}

TArray<EEquipmentSlot> UEquipmentLODComponent::GetEquipmentSlots() const {
    return TArray<EEquipmentSlot>();
}

UEquipmentLODComponent::UEquipmentLODComponent() {
    this->ProxyEquipmentComponent = NULL;
    this->FullEquipmentComponent = NULL;
}

