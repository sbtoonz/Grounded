#include "HotBarQuickSlot.h"
#include "Net/UnrealNetwork.h"

class UItem;

void UHotBarQuickSlot::OnRep_PropertyChanged() {
}

void UHotBarQuickSlot::ChangeQuickSlotType(EHotBarQuickSlotType NewSlotType) {
}

void UHotBarQuickSlot::AssignItemKey(FHotBarQuickSlotItemTypeKey ItemKey) {
}

void UHotBarQuickSlot::AssignItem(UItem* Item) {
}

void UHotBarQuickSlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHotBarQuickSlot, QuickSlotType);
    DOREPLIFETIME(UHotBarQuickSlot, CurrentItem);
    DOREPLIFETIME(UHotBarQuickSlot, AssignedItemKey);
}

UHotBarQuickSlot::UHotBarQuickSlot() {
    this->QuickSlotType = EHotBarQuickSlotType::NONE;
    this->CurrentItem = NULL;
}

