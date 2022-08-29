/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.GetInventoryRowsNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RowSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rows                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::GetInventoryRowsNeeded(class APlayerController* Player, int32_t RowSize, class UObject* __WorldContext, int32_t* Rows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.GetInventoryRowsNeeded");
		
		UInventoryFunctions_C_GetInventoryRowsNeeded_Params params {};
		params.Player = Player;
		params.RowSize = RowSize;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rows != nullptr)
			*Rows = params.Rows;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.CanCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		TArray<class UItem*>                               Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Craftable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctions_C::CanCraft(const struct FDataTableRowHandle& RecipeRowHandle, TArray<class UItem*>* Items, class UObject* __WorldContext, bool* Craftable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.CanCraft");
		
		UInventoryFunctions_C_CanCraft_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (Craftable != nullptr)
			*Craftable = params.Craftable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.GetBaseSlotInPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              BaseSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::GetBaseSlotInPanel(class UPanelWidget* Panel, int32_t Index, class UObject* __WorldContext, class UUI_BaseSlot_C** BaseSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.GetBaseSlotInPanel");
		
		UInventoryFunctions_C_GetBaseSlotInPanel_Params params {};
		params.Panel = Panel;
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseSlot != nullptr)
			*BaseSlot = params.BaseSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.HandleInventoryToInventoryItemSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         SourceInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ItemSlot_C*                              ItemSlot1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryComponent*                         DestinationInventory                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ItemSlot_C*                              ItemSlot2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctions_C::HandleInventoryToInventoryItemSwap(class UInventoryComponent* SourceInventory, class UItem* Item1, class UUI_ItemSlot_C* ItemSlot1, int32_t SlotIndex1, class UInventoryComponent* DestinationInventory, class UItem* Item2, class UUI_ItemSlot_C* ItemSlot2, int32_t SlotIndex2, class UObject* __WorldContext, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.HandleInventoryToInventoryItemSwap");
		
		UInventoryFunctions_C_HandleInventoryToInventoryItemSwap_Params params {};
		params.SourceInventory = SourceInventory;
		params.Item1 = Item1;
		params.ItemSlot1 = ItemSlot1;
		params.SlotIndex1 = SlotIndex1;
		params.DestinationInventory = DestinationInventory;
		params.Item2 = Item2;
		params.ItemSlot2 = ItemSlot2;
		params.SlotIndex2 = SlotIndex2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.HandleSwapItemSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         SourceInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ItemSlot_C*                              ItemSlot1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ItemSlot_C*                              ItemSlot2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::HandleSwapItemSlots(class UInventoryComponent* SourceInventory, class UItem* Item1, class UUI_ItemSlot_C* ItemSlot1, int32_t SlotIndex1, class UItem* Item2, class UUI_ItemSlot_C* ItemSlot2, int32_t SlotIndex2, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.HandleSwapItemSlots");
		
		UInventoryFunctions_C_HandleSwapItemSlots_Params params {};
		params.SourceInventory = SourceInventory;
		params.Item1 = Item1;
		params.ItemSlot1 = ItemSlot1;
		params.SlotIndex1 = SlotIndex1;
		params.Item2 = Item2;
		params.ItemSlot2 = ItemSlot2;
		params.SlotIndex2 = SlotIndex2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.GetItemInItemListSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::GetItemInItemListSlot(TArray<class UItem*>* ItemList, int32_t Index, class UObject* __WorldContext, class UItem** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.GetItemInItemListSlot");
		
		UInventoryFunctions_C_GetItemInItemListSlot_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.GetItemSlotInPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ItemSlot_C*                              ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::GetItemSlotInPanel(class UPanelWidget* Panel, int32_t Index, class UObject* __WorldContext, class UUI_ItemSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.GetItemSlotInPanel");
		
		UInventoryFunctions_C_GetItemSlotInPanel_Params params {};
		params.Panel = Panel;
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSlot != nullptr)
			*ItemSlot = params.ItemSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.PopulateInventoryWithHotBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  HotBarGrid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::PopulateInventoryWithHotBar(class UGridPanel* HotBarGrid, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.PopulateInventoryWithHotBar");
		
		UInventoryFunctions_C_PopulateInventoryWithHotBar_Params params {};
		params.HotBarGrid = HotBarGrid;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.RefreshInventoryGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UGridPanel*                                  GridPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RowMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColumnMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemStartIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::RefreshInventoryGrid(TArray<class UItem*>* ItemList, class UGridPanel* GridPanel, int32_t RowMax, int32_t ColumnMax, int32_t ItemStartIndex, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.RefreshInventoryGrid");
		
		UInventoryFunctions_C_RefreshInventoryGrid_Params params {};
		params.GridPanel = GridPanel;
		params.RowMax = RowMax;
		params.ColumnMax = ColumnMax;
		params.ItemStartIndex = ItemStartIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.CreateItemSlotForRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::CreateItemSlotForRowHandle(const struct FDataTableRowHandle& ItemRowHandle, class UObject* __WorldContext, class UUI_BaseSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.CreateItemSlotForRowHandle");
		
		UInventoryFunctions_C_CreateItemSlotForRowHandle_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSlot != nullptr)
			*ItemSlot = params.ItemSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.CreateItemSlotForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ItemSlot_C*                              ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::CreateItemSlotForItem(class UItem* Item, class UObject* __WorldContext, class UUI_ItemSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.CreateItemSlotForItem");
		
		UInventoryFunctions_C_CreateItemSlotForItem_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSlot != nullptr)
			*ItemSlot = params.ItemSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.PlaceSlotInGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  GridPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InsertIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxColumnsInGrid                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::PlaceSlotInGrid(class UUI_BaseSlot_C* Slot, class UGridPanel* GridPanel, int32_t InsertIndex, int32_t MaxColumnsInGrid, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.PlaceSlotInGrid");
		
		UInventoryFunctions_C_PlaceSlotInGrid_Params params {};
		params.Slot = Slot;
		params.GridPanel = GridPanel;
		params.InsertIndex = InsertIndex;
		params.MaxColumnsInGrid = MaxColumnsInGrid;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctions.InventoryFunctions_C.PopulateInventoryGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  GridPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UItem*>                               ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RowMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColumnMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemStartIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctions_C::PopulateInventoryGrid(class UObject* Container, class UGridPanel* GridPanel, TArray<class UItem*>* ItemList, int32_t RowMax, int32_t ColumnMax, int32_t ItemStartIndex, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctions.InventoryFunctions_C.PopulateInventoryGrid");
		
		UInventoryFunctions_C_PopulateInventoryGrid_Params params {};
		params.Container = Container;
		params.GridPanel = GridPanel;
		params.RowMax = RowMax;
		params.ColumnMax = ColumnMax;
		params.ItemStartIndex = ItemStartIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InventoryFunctions.InventoryFunctions_C");
		return ptr;
	}

}


