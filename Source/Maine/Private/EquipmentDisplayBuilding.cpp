#include "EquipmentDisplayBuilding.h"
#include "EquipmentComponent.h"
#include "InventoryComponent.h"

class UItem;
class UMeshComponent;
class USkeletalMeshComponent;

bool AEquipmentDisplayBuilding::IsValidItem(UItem* Item) const {
    return false;
}

bool AEquipmentDisplayBuilding::IsValidEquipmentSlot(EEquipmentSlot Slot) const {
    return false;
}

UMeshComponent* AEquipmentDisplayBuilding::GetEquipmentMeshComponent_Implementation() const {
    return NULL;
}

USkeletalMeshComponent* AEquipmentDisplayBuilding::GetArmorMeshComponent_Implementation(EEquipmentSlot Slot) const {
    return NULL;
}

AEquipmentDisplayBuilding::AEquipmentDisplayBuilding() {
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("EquipmentComponent"));
}

