#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass InventoryFunctions.InventoryFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInventoryFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetInventoryRowsNeeded(class APlayerController* Player, int32_t RowSize, class UObject* __WorldContext, int32_t* Rows);
		void CanCraft(const struct FDataTableRowHandle& RecipeRowHandle, TArray<class UItem*>* Items, class UObject* __WorldContext, bool* Craftable);
		void GetBaseSlotInPanel(class UPanelWidget* Panel, int32_t Index, class UObject* __WorldContext, class UUI_BaseSlot_C** BaseSlot);
		void HandleInventoryToInventoryItemSwap(class UInventoryComponent* SourceInventory, class UItem* Item1, class UUI_ItemSlot_C* ItemSlot1, int32_t SlotIndex1, class UInventoryComponent* DestinationInventory, class UItem* Item2, class UUI_ItemSlot_C* ItemSlot2, int32_t SlotIndex2, class UObject* __WorldContext, bool* Success);
		void HandleSwapItemSlots(class UInventoryComponent* SourceInventory, class UItem* Item1, class UUI_ItemSlot_C* ItemSlot1, int32_t SlotIndex1, class UItem* Item2, class UUI_ItemSlot_C* ItemSlot2, int32_t SlotIndex2, class UObject* __WorldContext);
		void GetItemInItemListSlot(TArray<class UItem*>* ItemList, int32_t Index, class UObject* __WorldContext, class UItem** Item);
		void GetItemSlotInPanel(class UPanelWidget* Panel, int32_t Index, class UObject* __WorldContext, class UUI_ItemSlot_C** ItemSlot);
		void PopulateInventoryWithHotBar(class UGridPanel* HotBarGrid, class UObject* __WorldContext);
		void RefreshInventoryGrid(TArray<class UItem*>* ItemList, class UGridPanel* GridPanel, int32_t RowMax, int32_t ColumnMax, int32_t ItemStartIndex, class UObject* __WorldContext);
		void CreateItemSlotForRowHandle(const struct FDataTableRowHandle& ItemRowHandle, class UObject* __WorldContext, class UUI_BaseSlot_C** ItemSlot);
		void CreateItemSlotForItem(class UItem* Item, class UObject* __WorldContext, class UUI_ItemSlot_C** ItemSlot);
		void PlaceSlotInGrid(class UUI_BaseSlot_C* Slot, class UGridPanel* GridPanel, int32_t InsertIndex, int32_t MaxColumnsInGrid, class UObject* __WorldContext);
		void PopulateInventoryGrid(class UObject* Container, class UGridPanel* GridPanel, TArray<class UItem*>* ItemList, int32_t RowMax, int32_t ColumnMax, int32_t ItemStartIndex, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
