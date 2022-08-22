#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"

class UInventoryComponent;
class UItem;

bool UInventoryComponent::TryCraftItem(FDataTableRowHandle RecipeRowHandle, bool bEquip, int32 CraftCount) {
    return false;
}

void UInventoryComponent::ServerTransferItemTo_Implementation(UItem* Item, UInventoryComponent* ToInventory, int32 Count) {
}
bool UInventoryComponent::ServerTransferItemTo_Validate(UItem* Item, UInventoryComponent* ToInventory, int32 Count) {
    return true;
}

void UInventoryComponent::ServerTransferItemFrom_Implementation(UItem* Item, UInventoryComponent* FromInventory, int32 Count) {
}
bool UInventoryComponent::ServerTransferItemFrom_Validate(UItem* Item, UInventoryComponent* FromInventory, int32 Count) {
    return true;
}

void UInventoryComponent::ServerTransferAllTo_Implementation(UInventoryComponent* ToInventory, bool IsNewItem) {
}
bool UInventoryComponent::ServerTransferAllTo_Validate(UInventoryComponent* ToInventory, bool IsNewItem) {
    return true;
}

void UInventoryComponent::ServerTransferAllFrom_Implementation(UInventoryComponent* FromInventory, bool IsNewItem) {
}
bool UInventoryComponent::ServerTransferAllFrom_Validate(UInventoryComponent* FromInventory, bool IsNewItem) {
    return true;
}

void UInventoryComponent::ServerSwapItemSlotsBetweenInventories_Implementation(UItem* Item1, int32 Index1, UInventoryComponent* Inventory2, UItem* Item2, int32 Index2) {
}
bool UInventoryComponent::ServerSwapItemSlotsBetweenInventories_Validate(UItem* Item1, int32 Index1, UInventoryComponent* Inventory2, UItem* Item2, int32 Index2) {
    return true;
}

void UInventoryComponent::ServerSwapItemSlots_Implementation(UInventoryComponent* SourceInventory, UItem* Item1, int32 Index1, UItem* Item2, int32 Index2) {
}
bool UInventoryComponent::ServerSwapItemSlots_Validate(UInventoryComponent* SourceInventory, UItem* Item1, int32 Index1, UItem* Item2, int32 Index2) {
    return true;
}

void UInventoryComponent::ServerRemoveItemMatchingItemData_Implementation(FDataTableRowHandle ItemDataRowHandle, int32 Count) {
}
bool UInventoryComponent::ServerRemoveItemMatchingItemData_Validate(FDataTableRowHandle ItemDataRowHandle, int32 Count) {
    return true;
}

void UInventoryComponent::ServerRemoveItemAtIndex_Implementation(int32 Index, int32 Count) {
}
bool UInventoryComponent::ServerRemoveItemAtIndex_Validate(int32 Index, int32 Count) {
    return true;
}

void UInventoryComponent::ServerRemoveItem_Implementation(UItem* Item, int32 Count) {
}
bool UInventoryComponent::ServerRemoveItem_Validate(UItem* Item, int32 Count) {
    return true;
}

void UInventoryComponent::ServerRemoveAllItems_Implementation() {
}
bool UInventoryComponent::ServerRemoveAllItems_Validate() {
    return true;
}

void UInventoryComponent::ServerMergeItemStacks_Implementation(UInventoryComponent* SourceInventory, UItem* SourceItem, UItem* DestinationItem) {
}
bool UInventoryComponent::ServerMergeItemStacks_Validate(UInventoryComponent* SourceInventory, UItem* SourceItem, UItem* DestinationItem) {
    return true;
}

void UInventoryComponent::ServerDropItem_Implementation(UItem* Item, int32 Count) {
}
bool UInventoryComponent::ServerDropItem_Validate(UItem* Item, int32 Count) {
    return true;
}

void UInventoryComponent::ServerDefragInventory_Implementation(bool SingleItem) {
}
bool UInventoryComponent::ServerDefragInventory_Validate(bool SingleItem) {
    return true;
}

void UInventoryComponent::ServerCreateAndDropItem_Implementation(FDataTableRowHandle ItemRowHandle) {
}
bool UInventoryComponent::ServerCreateAndDropItem_Validate(FDataTableRowHandle ItemRowHandle) {
    return true;
}

void UInventoryComponent::ServerCreateAndAddItem_Implementation(FDataTableRowHandle ItemRowHandle, int32 Count) {
}
bool UInventoryComponent::ServerCreateAndAddItem_Validate(FDataTableRowHandle ItemRowHandle, int32 Count) {
    return true;
}

void UInventoryComponent::ServerCraftRecipeForInventory_Implementation(FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory, UItem* RecipeModItem) {
}
bool UInventoryComponent::ServerCraftRecipeForInventory_Validate(FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory, UItem* RecipeModItem) {
    return true;
}

void UInventoryComponent::ServerCraftRecipeDataForInventory_Implementation(FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory, FDataTableRowHandle RecipeModRowHandle) {
}
bool UInventoryComponent::ServerCraftRecipeDataForInventory_Validate(FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory, FDataTableRowHandle RecipeModRowHandle) {
    return true;
}

void UInventoryComponent::ServerCraftRecipe_Implementation(FDataTableRowHandle RecipeRowHandle, bool bEquip, int32 CraftCount) {
}
bool UInventoryComponent::ServerCraftRecipe_Validate(FDataTableRowHandle RecipeRowHandle, bool bEquip, int32 CraftCount) {
    return true;
}

void UInventoryComponent::ServerAddItem_Implementation(UItem* Item, bool IsNewItem) {
}
bool UInventoryComponent::ServerAddItem_Validate(UItem* Item, bool IsNewItem) {
    return true;
}

int32 UInventoryComponent::RemoveItem_Implementation(UItem* Item, int32 Count) {
    return 0;
}

UItem* UInventoryComponent::PopRandomItem() {
    return NULL;
}

UItem* UInventoryComponent::PopItem() {
    return NULL;
}

void UInventoryComponent::OnRep_Items(const TArray<UItem*>& PreviousItems) {
}

void UInventoryComponent::OnItemsChanged() {
}

void UInventoryComponent::OnItemEnhanced() {
}

void UInventoryComponent::OnItemChanged() {
}

void UInventoryComponent::NotifyItemSpoiled(FDataTableRowHandle OriginalItemHandle, FDataTableRowHandle SpoiledResultHandle) {
}

bool UInventoryComponent::IsSlotAvailable(int32 SlotIndex) const {
    return false;
}

bool UInventoryComponent::IsInventoryFull() const {
    return false;
}

bool UInventoryComponent::IsInventoryEmpty() const {
    return false;
}

bool UInventoryComponent::HasRequirements(const TArray<FRecipeRequirements>& Requirements) {
    return false;
}

bool UInventoryComponent::HasAnySpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const {
    return false;
}

bool UInventoryComponent::HasAnySpaceForItem(UItem* Item) const {
    return false;
}

int32 UInventoryComponent::GetTotalItemCount() {
    return 0;
}

int32 UInventoryComponent::GetNextAvailableInventorySlot() const {
    return 0;
}

int32 UInventoryComponent::GetMaxSize() const {
    return 0;
}

int32 UInventoryComponent::GetMaxAllowedSpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const {
    return 0;
}

int32 UInventoryComponent::GetMaxAllowedSpaceForItem(UItem* Item) const {
    return 0;
}

TArray<UItem*> UInventoryComponent::GetItemsIncludingEquipment() {
    return TArray<UItem*>();
}

TArray<UItem*> UInventoryComponent::GetItems_Implementation() const {
    return TArray<UItem*>();
}

UItem* UInventoryComponent::GetItemInSlot(int32 Index) const {
    return NULL;
}

int32 UInventoryComponent::GetItemCountMatchingHotBarKeyIncludingEquipment(FHotBarQuickSlotItemTypeKey ItemKey, bool IncludeBrokenItems) {
    return 0;
}

int32 UInventoryComponent::GetItemCountIncludingEquipment(FDataTableRowHandle ItemRowHandle, bool IncludeBrokenItems) {
    return 0;
}

int32 UInventoryComponent::GetItemCountForHotBarKey(FHotBarQuickSlotItemTypeKey ItemKey, bool IncludeBrokenItems) {
    return 0;
}

int32 UInventoryComponent::GetItemCountByName(FName ItemName) const {
    return 0;
}

int32 UInventoryComponent::GetItemCount(FDataTableRowHandle ItemRowHandle, bool IncludeBrokenItems) {
    return 0;
}

UItem* UInventoryComponent::GetItem(FName ItemName) const {
    return NULL;
}

int32 UInventoryComponent::GetExistingStackSpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const {
    return 0;
}

int32 UInventoryComponent::GetEmptySlots() const {
    return 0;
}

FTransform UInventoryComponent::GetDropItemTransform_Implementation(const UItem* Item, FVector Offset) {
    return FTransform{};
}

UItem* UInventoryComponent::FindPartialItemStackForItemHandle(FDataTableRowHandle ItemRowHandle) const {
    return NULL;
}

UItem* UInventoryComponent::FindPartialItemStackForItem(UItem* Item) const {
    return NULL;
}

int32 UInventoryComponent::ContainsItemOfType(FDataTableRowHandle ItemRowHandle) const {
    return 0;
}

bool UInventoryComponent::ContainsItem(UItem* Item) const {
    return false;
}

void UInventoryComponent::ClientOnItemStashFailue_Implementation() {
}

void UInventoryComponent::ClientOnItemStashed_Implementation(FDataTableRowHandle ItemRowHandle, int32 Count) {
}

void UInventoryComponent::ClientOnItemSpoiled_Implementation(FDataTableRowHandle OriginalItemHandle, FDataTableRowHandle SpoiledResultHandle) {
}

void UInventoryComponent::ClientOnItemRemoved_Implementation(FDataTableRowHandle ItemRowHandle) {
}

void UInventoryComponent::ClientOnItemAdded_Implementation(FDataTableRowHandle ItemRowHandle, bool IsNewItem, int32 NewCount) {
}

void UInventoryComponent::ClientNotifyCraftedWithFullInventory_Implementation(FDataTableRowHandle ItemRowHandle) {
}

bool UInventoryComponent::CanTransferAllFrom(UInventoryComponent* FromInventory) const {
    return false;
}

bool UInventoryComponent::CanCraftRecipe(FDataTableRowHandle ItemRowHandle) {
    return false;
}

bool UInventoryComponent::CanAddItems_Implementation(const TArray<UItem*>& InItems) const {
    return false;
}

bool UInventoryComponent::CanAddItemRowHandles_Implementation(const TArray<FDataTableRowHandle>& ItemRowHandles) const {
    return false;
}

bool UInventoryComponent::CanAddItemRowHandle_Implementation(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UInventoryComponent::CanAddItem_Implementation(UItem* Item) const {
    return false;
}

void UInventoryComponent::AddItem_Implementation(UItem* Item, bool bIsNewItem) {
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, Items);
}

UInventoryComponent::UInventoryComponent() {
    this->AttractionComponent = NULL;
    this->MaxSize = 0;
    this->bAllowStacking = true;
    this->bExposedToAI = true;
    this->bAllowHauledItems = false;
    this->bAllowAddItems = true;
    this->bBlockOnItemAddedBroadcast = false;
    this->bSuspendItemSpoiling = false;
    this->TakeItemTemplate = NULL;
    this->DumpItemTemplate = NULL;
}

