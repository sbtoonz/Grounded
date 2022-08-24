#include "EquipmentComponent.h"
#include "Net/UnrealNetwork.h"

class UItem;
class UInventoryComponent;
class UHaulingComponent;

void UEquipmentComponent::SpawnVisuals(UItem* Item, FName Socket, EItemVisualsPriority Priority) {
}

void UEquipmentComponent::ServerUnequipItemSlot_Implementation(EEquipmentSlot Slot, bool ReaddToInventory, int32 TargetInventorySlot) {
}
bool UEquipmentComponent::ServerUnequipItemSlot_Validate(EEquipmentSlot Slot, bool ReaddToInventory, int32 TargetInventorySlot) {
    return true;
}

void UEquipmentComponent::ServerUnequipItem_Implementation(UItem* Equippable, bool ReaddToInventory, int32 TargetInventorySlot) {
}
bool UEquipmentComponent::ServerUnequipItem_Validate(UItem* Equippable, bool ReaddToInventory, int32 TargetInventorySlot) {
    return true;
}

void UEquipmentComponent::ServerRemoveItem_Implementation(UItem* Item, int32 Count) {
}
bool UEquipmentComponent::ServerRemoveItem_Validate(UItem* Item, int32 Count) {
    return true;
}

void UEquipmentComponent::ServerEquipPreviousMainHand_Implementation() {
}
bool UEquipmentComponent::ServerEquipPreviousMainHand_Validate() {
    return true;
}

void UEquipmentComponent::ServerEquipItemToSlot_Implementation(UItem* Equippable, EEquipmentSlot Slot) {
}
bool UEquipmentComponent::ServerEquipItemToSlot_Validate(UItem* Equippable, EEquipmentSlot Slot) {
    return true;
}

void UEquipmentComponent::ServerEquipItem_Implementation(UItem* Equippable) {
}
bool UEquipmentComponent::ServerEquipItem_Validate(UItem* Equippable) {
    return true;
}

void UEquipmentComponent::ServerDumpItem_Implementation(UItem* Item) {
}
bool UEquipmentComponent::ServerDumpItem_Validate(UItem* Item) {
    return true;
}

void UEquipmentComponent::ServerDropItem_Implementation(UItem* Item, int32 Count) {
}
bool UEquipmentComponent::ServerDropItem_Validate(UItem* Item, int32 Count) {
    return true;
}

void UEquipmentComponent::ServerDisarmWeapon_Implementation() {
}
bool UEquipmentComponent::ServerDisarmWeapon_Validate() {
    return true;
}

void UEquipmentComponent::ServerCreateAndEquipItemData_Implementation(FDataTableRowHandle RowData) {
}
bool UEquipmentComponent::ServerCreateAndEquipItemData_Validate(FDataTableRowHandle RowData) {
    return true;
}

void UEquipmentComponent::OnUnderwaterChanged(bool IsUnderwater) {
}

void UEquipmentComponent::OnRep_OffHand(UItem* LastEquippable) {
}

void UEquipmentComponent::OnRep_MainHand(UItem* LastEquippable) {
}

void UEquipmentComponent::OnRep_Legs(UItem* LastEquippable) {
}

void UEquipmentComponent::OnRep_Head(UItem* LastEquippable) {
}

void UEquipmentComponent::OnRep_Glider(UItem* LastEquippable) {
}

void UEquipmentComponent::OnRep_Chest(UItem* LastEquippable) {
}

void UEquipmentComponent::OnRep_Arms(UItem* LastEquippable) {
}

void UEquipmentComponent::OnItemEnhanced() {
}

void UEquipmentComponent::OnItemChanged() {
}

void UEquipmentComponent::OnHaulEnd(UHaulingComponent* Sender) {
}

void UEquipmentComponent::OnHaulBegin(UHaulingComponent* Sender) {
}

void UEquipmentComponent::OnCameraModeChanged(ECameraDisplayMode DisplayMode) {
}

UItem* UEquipmentComponent::LocalUnequipItemInSlot(EEquipmentSlot Slot, bool ReaddToInventory, int32 TargetInventorySlot, UInventoryComponent* ToFromInventory) {
    return NULL;
}

UItem* UEquipmentComponent::LocalUnequipItem(UItem* Equippable, bool ReaddToInventory, int32 TargetInventorySlot, UInventoryComponent* ToFromInventory) {
    return NULL;
}

void UEquipmentComponent::LocalEquipItemToSlot(UItem* Equippable, EEquipmentSlot Slot, UInventoryComponent* ToFromInventory) {
}

bool UEquipmentComponent::IsItemRowHandleEquipped(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UEquipmentComponent::IsItemEquipped(UItem* Item) const {
    return false;
}

bool UEquipmentComponent::HasSlot(EEquipmentSlot Slot) const {
    return false;
}

bool UEquipmentComponent::HasAnyItemEquipped() const {
    return false;
}

UItem* UEquipmentComponent::GetWeapon() const {
    return NULL;
}

int32 UEquipmentComponent::GetStance() const {
    return 0;
}

UItem* UEquipmentComponent::GetPreviousItemInSlot(EEquipmentSlot Slot) const {
    return NULL;
}

int32 UEquipmentComponent::GetOffhandStance() const {
    return 0;
}

EEquipmentSlot UEquipmentComponent::GetItemSlot(UItem* Item) const {
    return EEquipmentSlot::None;
}

UItem* UEquipmentComponent::GetItemInSlot(EEquipmentSlot Slot) const {
    return NULL;
}

int32 UEquipmentComponent::GetItemCount(FDataTableRowHandle ItemRowHandle) const {
    return 0;
}

TArray<EEquipmentSlot> UEquipmentComponent::GetEquipmentSlots() const {
    return TArray<EEquipmentSlot>();
}

float UEquipmentComponent::GetAverageEquippedTier() const {
    return 0.0f;
}

TArray<FDataTableRowHandle> UEquipmentComponent::GetActiveItemSetStatusEffects() const {
    return TArray<FDataTableRowHandle>();
}

bool UEquipmentComponent::EquipItemData(FDataTableRowHandle RowData) {
    return false;
}

bool UEquipmentComponent::DestroyVisuals(UItem* Item) {
    return false;
}

void UEquipmentComponent::ClientNotifyItemPowerDepleted_Implementation(UItem* Item) {
}

void UEquipmentComponent::ClientNotifyItemBroken_Implementation(UItem* Item, bool ItemDroppedInWorld) {
}

void UEquipmentComponent::ClientNotifyEquipmentChangeFailureFromFullInventory_Implementation(EEquipmentChangeFailureFromFullInventoryStimulus FailureStimulus) {
}

void UEquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEquipmentComponent, MainHand);
    DOREPLIFETIME(UEquipmentComponent, OffHand);
    DOREPLIFETIME(UEquipmentComponent, Head);
    DOREPLIFETIME(UEquipmentComponent, Chest);
    DOREPLIFETIME(UEquipmentComponent, Arms);
    DOREPLIFETIME(UEquipmentComponent, Legs);
    DOREPLIFETIME(UEquipmentComponent, Glider);
}

UEquipmentComponent::UEquipmentComponent() {
    this->bHasMainHand = true;
    this->bHasOffHand = true;
    this->bHasHead = true;
    this->bHasChest = true;
    this->bHasArms = true;
    this->bHasLegs = true;
    this->bHasGlider = true;
    this->MainHand = NULL;
    this->OffHand = NULL;
    this->Head = NULL;
    this->Chest = NULL;
    this->Arms = NULL;
    this->Legs = NULL;
    this->Glider = NULL;
    this->PreviousMainHandItem = NULL;
    this->PreviousOffHandItem = NULL;
    this->OwnerCharacter = NULL;
    this->InventoryComponent = NULL;
    this->HaulingComponent = NULL;
}

