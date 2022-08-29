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
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_HotBarQuickSlotPicker_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.HandleKeyEventChord");
		
		UUI_HotBarQuickSlotPicker_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_HotBarQuickSlotPicker_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetDefaultUserFocus");
		
		UUI_HotBarQuickSlotPicker_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.SetStartingFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_HotBarQuickSlotPicker_C::SetStartingFocus(EHotBarQuickSlotType QuickSlotType, const struct FDataTableRowHandle& ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.SetStartingFocus");
		
		UUI_HotBarQuickSlotPicker_C_SetStartingFocus_Params params {};
		params.QuickSlotType = QuickSlotType;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.PopulateCategoryGrid
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::PopulateCategoryGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.PopulateCategoryGrid");
		
		UUI_HotBarQuickSlotPicker_C_PopulateCategoryGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.IsItemSlotInGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                ItemGrid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_HotBarQuickSlotPicker_C::IsItemSlotInGrid(class UPanelWidget* ItemGrid, class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.IsItemSlotInGrid");
		
		UUI_HotBarQuickSlotPicker_C_IsItemSlotInGrid_Params params {};
		params.ItemGrid = ItemGrid;
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.SetSelectedSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  ItemGrid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::SetSelectedSlot(class UGridPanel* ItemGrid, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.SetSelectedSlot");
		
		UUI_HotBarQuickSlotPicker_C_SetSelectedSlot_Params params {};
		params.ItemGrid = ItemGrid;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::RefreshBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshBottomButtons");
		
		UUI_HotBarQuickSlotPicker_C_RefreshBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetSCABBaseColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetSCABBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetSCABBaseColor");
		
		UUI_HotBarQuickSlotPicker_C_GetSCABBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetGlobalBGDarkener
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetGlobalBGDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetGlobalBGDarkener");
		
		UUI_HotBarQuickSlotPicker_C_GetGlobalBGDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetGlobalBG
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetGlobalBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetGlobalBG");
		
		UUI_HotBarQuickSlotPicker_C_GetGlobalBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetAccentTwo");
		
		UUI_HotBarQuickSlotPicker_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetAccentOne
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetAccentOne");
		
		UUI_HotBarQuickSlotPicker_C_GetAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetHeaderColor");
		
		UUI_HotBarQuickSlotPicker_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarQuickSlotPicker_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetSubheaderColor");
		
		UUI_HotBarQuickSlotPicker_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshAll
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::RefreshAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshAll");
		
		UUI_HotBarQuickSlotPicker_C_RefreshAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  ItemGrid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumRows                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumColumns                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::RefreshInventory(class UGridPanel* ItemGrid, int32_t NumRows, int32_t NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshInventory");
		
		UUI_HotBarQuickSlotPicker_C_RefreshInventory_Params params {};
		params.ItemGrid = ItemGrid;
		params.NumRows = NumRows;
		params.NumColumns = NumColumns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ClearInventoryGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  ItemGrid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::ClearInventoryGrid(class UGridPanel* ItemGrid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ClearInventoryGrid");
		
		UUI_HotBarQuickSlotPicker_C_ClearInventoryGrid_Params params {};
		params.ItemGrid = ItemGrid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.TransferItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::TransferItem(class AActor* From, class AActor* To, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.TransferItem");
		
		UUI_HotBarQuickSlotPicker_C_TransferItem_Params params {};
		params.From = From;
		params.To = To;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ClearSelectedItem
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::ClearSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ClearSelectedItem");
		
		UUI_HotBarQuickSlotPicker_C_ClearSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.UpdateButtonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlayerInventoryItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceHide                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HotBarQuickSlotPicker_C::UpdateButtonVisibility(bool IsPlayerInventoryItem, bool ForceHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.UpdateButtonVisibility");
		
		UUI_HotBarQuickSlotPicker_C_UpdateButtonVisibility_Params params {};
		params.IsPlayerInventoryItem = IsPlayerInventoryItem;
		params.ForceHide = ForceHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetInventoryItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UItem*>                               Items                                                      (Parm, OutParm)
	 */
	void UUI_HotBarQuickSlotPicker_C::GetInventoryItems(class AActor* OwnerActor, TArray<class UItem*>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetInventoryItems");
		
		UUI_HotBarQuickSlotPicker_C_GetInventoryItems_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.PopulateInventoryGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UItem*>                               OwnerInventoryList                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UGridPanel*                                  ItemGrid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumRows                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumColumns                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::PopulateInventoryGrid(class UObject* Container, TArray<class UItem*>* OwnerInventoryList, class UGridPanel* ItemGrid, int32_t NumRows, int32_t NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.PopulateInventoryGrid");
		
		UUI_HotBarQuickSlotPicker_C_PopulateInventoryGrid_Params params {};
		params.Container = Container;
		params.ItemGrid = ItemGrid;
		params.NumRows = NumRows;
		params.NumColumns = NumColumns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerInventoryList != nullptr)
			*OwnerInventoryList = params.OwnerInventoryList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.Construct");
		
		UUI_HotBarQuickSlotPicker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::OnItemSelected(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnItemSelected");
		
		UUI_HotBarQuickSlotPicker_C_OnItemSelected_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_HotBarQuickSlotPicker_C_BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature");
		
		UUI_HotBarQuickSlotPicker_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshWidget
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::RefreshWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshWidget");
		
		UUI_HotBarQuickSlotPicker_C_RefreshWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnItemDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::OnItemDoubleClick(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnItemDoubleClick");
		
		UUI_HotBarQuickSlotPicker_C_OnItemDoubleClick_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.HandleSelection
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::HandleSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.HandleSelection");
		
		UUI_HotBarQuickSlotPicker_C_HandleSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.Destruct");
		
		UUI_HotBarQuickSlotPicker_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HotBarQuickSlotPicker_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnGlobalColorChange");
		
		UUI_HotBarQuickSlotPicker_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ExecuteUbergraph_UI_HotBarQuickSlotPicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::ExecuteUbergraph_UI_HotBarQuickSlotPicker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ExecuteUbergraph_UI_HotBarQuickSlotPicker");
		
		UUI_HotBarQuickSlotPicker_C_ExecuteUbergraph_UI_HotBarQuickSlotPicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnQuickItemTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarQuickSlotPicker_C::OnQuickItemTypeSelected__DelegateSignature(EHotBarQuickSlotType QuickSlotType, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnQuickItemTypeSelected__DelegateSignature");
		
		UUI_HotBarQuickSlotPicker_C_OnQuickItemTypeSelected__DelegateSignature_Params params {};
		params.QuickSlotType = QuickSlotType;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HotBarQuickSlotPicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HotBarQuickSlotPicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C");
		return ptr;
	}

}


