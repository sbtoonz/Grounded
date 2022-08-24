#include "ItemDisplayBuilding.h"
#include "InventoryComponent.h"

class UItem;

void AItemDisplayBuilding::MulticastRemoveItem_Implementation(UItem* Item) {
}
bool AItemDisplayBuilding::MulticastRemoveItem_Validate(UItem* Item) {
    return true;
}

void AItemDisplayBuilding::MulticastDisplayItem_Implementation(UItem* Item) {
}
bool AItemDisplayBuilding::MulticastDisplayItem_Validate(UItem* Item) {
    return true;
}

bool AItemDisplayBuilding::IsValidItem(UItem* Item) const {
    return false;
}

AItemDisplayBuilding::AItemDisplayBuilding() {
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}

