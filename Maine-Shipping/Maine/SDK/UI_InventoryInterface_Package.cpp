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
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::GetSelectedItem(class UItem** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedItem");
		
		UUI_InventoryInterface_C_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.IsInventorySlotSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::IsInventorySlotSelected(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.IsInventorySlotSelected");
		
		UUI_InventoryInterface_C_IsInventorySlotSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.IsHotpouchSlotSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::IsHotpouchSlotSelected(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.IsHotpouchSlotSelected");
		
		UUI_InventoryInterface_C_IsHotpouchSlotSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedInventorySlotIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::GetSelectedInventorySlotIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedInventorySlotIndex");
		
		UUI_InventoryInterface_C_GetSelectedInventorySlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedHotpouchSlotIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::GetSelectedHotpouchSlotIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedHotpouchSlotIndex");
		
		UUI_InventoryInterface_C_GetSelectedHotpouchSlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetDescriptionDataForSelected
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::SetDescriptionDataForSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetDescriptionDataForSelected");
		
		UUI_InventoryInterface_C_SetDescriptionDataForSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_InventoryInterface_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.HandleKeyEventChord");
		
		UUI_InventoryInterface_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetLocalPlayerEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquipmentComponent*                         Inventory                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::GetLocalPlayerEquipment(class UEquipmentComponent** Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetLocalPlayerEquipment");
		
		UUI_InventoryInterface_C_GetLocalPlayerEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inventory != nullptr)
			*Inventory = params.Inventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetLocalPlayerInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::GetLocalPlayerInventory(class UInventoryComponent** Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetLocalPlayerInventory");
		
		UUI_InventoryInterface_C_GetLocalPlayerInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inventory != nullptr)
			*Inventory = params.Inventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetHalloween
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::GetHalloween()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetHalloween");
		
		UUI_InventoryInterface_C_GetHalloween_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.InitializeGearSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_InventoryGearSlot_C*                     Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::InitializeGearSlot(class UUI_InventoryGearSlot_C* Slot, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.InitializeGearSlot");
		
		UUI_InventoryInterface_C_InitializeGearSlot_Params params {};
		params.Slot = Slot;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_InventoryInterface_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnAnalogValueChanged");
		
		UUI_InventoryInterface_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.UpdateBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::UpdateBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.UpdateBottomButtons");
		
		UUI_InventoryInterface_C_UpdateBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnSplitStack
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OnSplitStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnSplitStack");
		
		UUI_InventoryInterface_C_OnSplitStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.CanShowContextMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::CanShowContextMenu(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.CanShowContextMenu");
		
		UUI_InventoryInterface_C_CanShowContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetStrongHandIconVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetStrongHandIconVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetStrongHandIconVis");
		
		UUI_InventoryInterface_C_GetStrongHandIconVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetWeakHandIconVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetWeakHandIconVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetWeakHandIconVis");
		
		UUI_InventoryInterface_C_GetWeakHandIconVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetHeadIconVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetHeadIconVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetHeadIconVis");
		
		UUI_InventoryInterface_C_GetHeadIconVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetBodyIconVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetBodyIconVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetBodyIconVis");
		
		UUI_InventoryInterface_C_GetBodyIconVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetLegsIconVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetLegsIconVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetLegsIconVis");
		
		UUI_InventoryInterface_C_GetLegsIconVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.CanUseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::CanUseItem(class UItem* Item, bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.CanUseItem");
		
		UUI_InventoryInterface_C_CanUseItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Can Repair Selected Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRepair                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::Can_Repair_Selected_Item(bool* CanRepair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Can Repair Selected Item");
		
		UUI_InventoryInterface_C_Can_Repair_Selected_Item_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanRepair != nullptr)
			*CanRepair = params.CanRepair;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.ItemHasDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasDurability                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::ItemHasDurability(bool* HasDurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.ItemHasDurability");
		
		UUI_InventoryInterface_C_ItemHasDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasDurability != nullptr)
			*HasDurability = params.HasDurability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetRepairVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetRepairVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetRepairVisibility");
		
		UUI_InventoryInterface_C_GetRepairVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetEquipmentText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       EquippedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  TextWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLocString                                  NoItemText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetEquipmentText(class UItem* EquippedItem, class UTextBlock* TextWidget, const struct FLocString& NoItemText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetEquipmentText");
		
		UUI_InventoryInterface_C_SetEquipmentText_Params params {};
		params.EquippedItem = EquippedItem;
		params.TextWidget = TextWidget;
		params.NoItemText = NoItemText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Get_DaysAliveText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_InventoryInterface_C::Get_DaysAliveText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Get_DaysAliveText_Text_1");
		
		UUI_InventoryInterface_C_Get_DaysAliveText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.IsSelectedHotBarSlotAssigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAssigned                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::IsSelectedHotBarSlotAssigned(bool* IsAssigned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.IsSelectedHotBarSlotAssigned");
		
		UUI_InventoryInterface_C_IsSelectedHotBarSlotAssigned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAssigned != nullptr)
			*IsAssigned = params.IsAssigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Assign Selected Item to Hot Bar Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::Assign_Selected_Item_to_Hot_Bar_Index(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Assign Selected Item to Hot Bar Index");
		
		UUI_InventoryInterface_C_Assign_Selected_Item_to_Hot_Bar_Index_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.CanUseSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::CanUseSelectedItem(bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.CanUseSelectedItem");
		
		UUI_InventoryInterface_C_CanUseSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Get_HotPocketBG_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::Get_HotPocketBG_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Get_HotPocketBG_ColorAndOpacity_1");
		
		UUI_InventoryInterface_C_Get_HotPocketBG_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetHotBarAssignVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetHotBarAssignVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetHotBarAssignVisibility");
		
		UUI_InventoryInterface_C_GetHotBarAssignVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.UpdateSlotsUsedText
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::UpdateSlotsUsedText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.UpdateSlotsUsedText");
		
		UUI_InventoryInterface_C_UpdateSlotsUsedText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateHotBarQuickSlots
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::PopulateHotBarQuickSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateHotBarQuickSlots");
		
		UUI_InventoryInterface_C_PopulateHotBarQuickSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetGlobalColorThree
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetGlobalColorThree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetGlobalColorThree");
		
		UUI_InventoryInterface_C_GetGlobalColorThree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_InventoryInterface_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetSubheaderColor");
		
		UUI_InventoryInterface_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetDefragTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_InventoryInterface_C::GetDefragTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetDefragTooltip");
		
		UUI_InventoryInterface_C_GetDefragTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetDefragVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetDefragVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetDefragVisibility");
		
		UUI_InventoryInterface_C_GetDefragVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.IsDefragEnabled
	 * 		Flags  -> ()
	 */
	bool UUI_InventoryInterface_C::IsDefragEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.IsDefragEnabled");
		
		UUI_InventoryInterface_C_IsDefragEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetBasicTextColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetBasicTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetBasicTextColor");
		
		UUI_InventoryInterface_C_GetBasicTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetSlotsTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_InventoryInterface_C::GetSlotsTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetSlotsTooltip");
		
		UUI_InventoryInterface_C_GetSlotsTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetDarkenerColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetDarkenerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetDarkenerColor");
		
		UUI_InventoryInterface_C_GetDarkenerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetEquipEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::GetEquipEnabled(bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetEquipEnabled");
		
		UUI_InventoryInterface_C_GetEquipEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.RefreshBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::RefreshBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.RefreshBottomButtons");
		
		UUI_InventoryInterface_C_RefreshBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetEnergyColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetEnergyColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetEnergyColor");
		
		UUI_InventoryInterface_C_GetEnergyColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetHealthColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetHealthColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetHealthColor");
		
		UUI_InventoryInterface_C_GetHealthColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetFoodColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetFoodColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetFoodColor");
		
		UUI_InventoryInterface_C_GetFoodColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_InventoryInterface_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetHeaderColor");
		
		UUI_InventoryInterface_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetWaterColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetWaterColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetWaterColor");
		
		UUI_InventoryInterface_C_GetWaterColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetStaminaColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetStaminaColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetStaminaColor");
		
		UUI_InventoryInterface_C_GetStaminaColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetSCABOSAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InventoryInterface_C::GetSCABOSAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetSCABOSAccentTwo");
		
		UUI_InventoryInterface_C_GetSCABOSAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.FindItemSlotMatchingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              StackableItemSlot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::FindItemSlotMatchingData(class UItem* Item, class UUI_BaseSlot_C** StackableItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.FindItemSlotMatchingData");
		
		UUI_InventoryInterface_C_FindItemSlotMatchingData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackableItemSlot != nullptr)
			*StackableItemSlot = params.StackableItemSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.InitializeItemSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseSlotWidget*                             ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::InitializeItemSlot(class UBaseSlotWidget* ItemSlot, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.InitializeItemSlot");
		
		UUI_InventoryInterface_C_InitializeItemSlot_Params params {};
		params.ItemSlot = ItemSlot;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedHotBarSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetSelectedHotBarSlot(int32_t Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedHotBarSlot");
		
		UUI_InventoryInterface_C_SetSelectedHotBarSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetUseVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetUseVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetUseVisibility");
		
		UUI_InventoryInterface_C_GetUseVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetDropVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InventoryInterface_C::GetDropVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetDropVisibility");
		
		UUI_InventoryInterface_C_GetDropVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedInventorySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetSelectedInventorySlot(int32_t Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedInventorySlot");
		
		UUI_InventoryInterface_C_SetSelectedInventorySlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetSelectedSlot(class UUI_ItemSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedSlot");
		
		UUI_InventoryInterface_C_SetSelectedSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateEquipment
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::PopulateEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateEquipment");
		
		UUI_InventoryInterface_C_PopulateEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.GetInventoryItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               Items                                                      (ConstParm, Parm, OutParm)
	 */
	void UUI_InventoryInterface_C::GetInventoryItems(TArray<class UItem*> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.GetInventoryItems");
		
		UUI_InventoryInterface_C_GetInventoryItems_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.ClearItemGrid
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::ClearItemGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.ClearItemGrid");
		
		UUI_InventoryInterface_C_ClearItemGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateItemGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RowMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColumnMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::PopulateItemGrid(int32_t RowMax, int32_t ColumnMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateItemGrid");
		
		UUI_InventoryInterface_C_PopulateItemGrid_Params params {};
		params.RowMax = RowMax;
		params.ColumnMax = ColumnMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Construct");
		
		UUI_InventoryInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.HandleItemSlotFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Item_Slot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::HandleItemSlotFocused(class UUI_BaseSlot_C* Item_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.HandleItemSlotFocused");
		
		UUI_InventoryInterface_C_HandleItemSlotFocused_Params params {};
		params.Item_Slot = Item_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnGearSlotSelected_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Item_Slot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnGearSlotSelected_Event(class UUI_BaseSlot_C* Item_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnGearSlotSelected_Event");
		
		UUI_InventoryInterface_C_OnGearSlotSelected_Event_Params params {};
		params.Item_Slot = Item_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.RefreshUI");
		
		UUI_InventoryInterface_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedItemByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetSelectedItemByIndex(int32_t SelectedSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedItemByIndex");
		
		UUI_InventoryInterface_C_SetSelectedItemByIndex_Params params {};
		params.SelectedSlot = SelectedSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnItemDoubleClick_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnItemDoubleClick_Event(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnItemDoubleClick_Event");
		
		UUI_InventoryInterface_C_OnItemDoubleClick_Event_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.On Use
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::On_Use()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.On Use");
		
		UUI_InventoryInterface_C_On_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.On Equip
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::On_Equip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.On Equip");
		
		UUI_InventoryInterface_C_On_Equip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.On Drop
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::On_Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.On Drop");
		
		UUI_InventoryInterface_C_On_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnUnequip
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OnUnequip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnUnequip");
		
		UUI_InventoryInterface_C_OnUnequip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Defrag
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::Defrag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Defrag");
		
		UUI_InventoryInterface_C_Defrag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotSelected_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnHotBarSlotSelected_Event(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotSelected_Event");
		
		UUI_InventoryInterface_C_OnHotBarSlotSelected_Event_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotAssigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnHotBarSlotAssigned(EHotBarQuickSlotType QuickSlotType, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotAssigned");
		
		UUI_InventoryInterface_C_OnHotBarSlotAssigned_Params params {};
		params.QuickSlotType = QuickSlotType;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OpenHotBarAssignWindow
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OpenHotBarAssignWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OpenHotBarAssignWindow");
		
		UUI_InventoryInterface_C_OpenHotBarAssignWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnHotBarSlotDoubleClick(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotDoubleClick");
		
		UUI_InventoryInterface_C_OnHotBarSlotDoubleClick_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InventoryInterface_C_BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.InspectSelectedItem
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::InspectSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.InspectSelectedItem");
		
		UUI_InventoryInterface_C_InspectSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.RepairSelectedItem
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::RepairSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.RepairSelectedItem");
		
		UUI_InventoryInterface_C_RepairSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnGlobalColorChange");
		
		UUI_InventoryInterface_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryInterface_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnUsingGamepadChanged");
		
		UUI_InventoryInterface_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.RouteActionByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseSlotWidget*                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                ActionTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::RouteActionByTag(class UBaseSlotWidget* Slot, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.RouteActionByTag");
		
		UUI_InventoryInterface_C_RouteActionByTag_Params params {};
		params.Slot = Slot;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnInventoryCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNumItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnInventoryCountChanged(int32_t NumItems, int32_t MaxNumItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnInventoryCountChanged");
		
		UUI_InventoryInterface_C_OnInventoryCountChanged_Params params {};
		params.NumItems = NumItems;
		params.MaxNumItems = MaxNumItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnInventoryChanged
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OnInventoryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnInventoryChanged");
		
		UUI_InventoryInterface_C_OnInventoryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.HandleOnSlotChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::HandleOnSlotChanged(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.HandleOnSlotChanged");
		
		UUI_InventoryInterface_C_HandleOnSlotChanged_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnDragDropOnPaperDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnDragDropOnPaperDoll(class UObject* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnDragDropOnPaperDoll");
		
		UUI_InventoryInterface_C_OnDragDropOnPaperDoll_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnDefragFocused
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OnDefragFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnDefragFocused");
		
		UUI_InventoryInterface_C_OnDefragFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnUnequipFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEquipmentChangeFailureFromFullInventoryStimulus   Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnUnequipFailure(EEquipmentChangeFailureFromFullInventoryStimulus Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnUnequipFailure");
		
		UUI_InventoryInterface_C_OnUnequipFailure_Params params {};
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.Destruct");
		
		UUI_InventoryInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedItemByHotbarIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetSelectedItemByHotbarIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedItemByHotbarIndex");
		
		UUI_InventoryInterface_C_SetSelectedItemByHotbarIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedByIndexHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetSelectedByIndexHelper(class UGridPanel* Grid, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedByIndexHelper");
		
		UUI_InventoryInterface_C_SetSelectedByIndexHelper_Params params {};
		params.Grid = Grid;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnEffectHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnEffectHovered(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnEffectHovered");
		
		UUI_InventoryInterface_C_OnEffectHovered_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnFocusedStatusEffectDestroyed
	 * 		Flags  -> ()
	 */
	void UUI_InventoryInterface_C::OnFocusedStatusEffectDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnFocusedStatusEffectDestroyed");
		
		UUI_InventoryInterface_C_OnFocusedStatusEffectDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.OnEffectFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::OnEffectFocused(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.OnEffectFocused");
		
		UUI_InventoryInterface_C_OnEffectFocused_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.SetStatusEffectToView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::SetStatusEffectToView(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.SetStatusEffectToView");
		
		UUI_InventoryInterface_C_SetStatusEffectToView_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryInterface.UI_InventoryInterface_C.ExecuteUbergraph_UI_InventoryInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryInterface_C::ExecuteUbergraph_UI_InventoryInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryInterface.UI_InventoryInterface_C.ExecuteUbergraph_UI_InventoryInterface");
		
		UUI_InventoryInterface_C_ExecuteUbergraph_UI_InventoryInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InventoryInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InventoryInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryInterface.UI_InventoryInterface_C");
		return ptr;
	}

}


