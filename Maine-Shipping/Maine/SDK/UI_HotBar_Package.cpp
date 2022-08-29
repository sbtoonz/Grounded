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
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetAccentThree
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::GetAccentThree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetAccentThree");
		
		UUI_HotBar_C_GetAccentThree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::GetInventory(class UInventoryComponent** Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetInventory");
		
		UUI_HotBar_C_GetInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inventory != nullptr)
			*Inventory = params.Inventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetHotBarVisCheck
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HotBar_C::GetHotBarVisCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetHotBarVisCheck");
		
		UUI_HotBar_C_GetHotBarVisCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_HotPocketBG_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::Get_HotPocketBG_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_HotPocketBG_ColorAndOpacity_1");
		
		UUI_HotBar_C_Get_HotPocketBG_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_ItemName_ShadowColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::Get_ItemName_ShadowColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_ItemName_ShadowColorAndOpacity_1");
		
		UUI_HotBar_C_Get_ItemName_ShadowColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_BPIcon_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HotBar_C::Get_BPIcon_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_BPIcon_Visibility_1");
		
		UUI_HotBar_C_Get_BPIcon_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetInventoryBarVisibilty
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HotBar_C::GetInventoryBarVisibilty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetInventoryBarVisibilty");
		
		UUI_HotBar_C_GetInventoryBarVisibilty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetHotBarVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HotBar_C::GetHotBarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetHotBarVisibility");
		
		UUI_HotBar_C_GetHotBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::GetSelectedItem(class UItem** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetSelectedItem");
		
		UUI_HotBar_C_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetDarkener
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::GetDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetDarkener");
		
		UUI_HotBar_C_GetDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_MouseM_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::Get_MouseM_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_MouseM_ColorAndOpacity_1");
		
		UUI_HotBar_C_Get_MouseM_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBar_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetColorAndOpacity_1");
		
		UUI_HotBar_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_KeyFrame_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::Get_KeyFrame_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_KeyFrame_ColorAndOpacity_1");
		
		UUI_HotBar_C_Get_KeyFrame_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetTitleBarColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBar_C::GetTitleBarColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetTitleBarColor");
		
		UUI_HotBar_C_GetTitleBarColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetSelectedInventorySlotIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InventorySlotIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::GetSelectedInventorySlotIndex(int32_t* InventorySlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetSelectedInventorySlotIndex");
		
		UUI_HotBar_C_GetSelectedInventorySlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventorySlotIndex != nullptr)
			*InventorySlotIndex = params.InventorySlotIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_PageNumber_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_HotBar_C::Get_PageNumber_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_PageNumber_Text_1");
		
		UUI_HotBar_C_Get_PageNumber_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetInventoryItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               InventoryItems                                             (Parm, OutParm)
	 */
	void UUI_HotBar_C::GetInventoryItems(TArray<class UItem*>* InventoryItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetInventoryItems");
		
		UUI_HotBar_C_GetInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryItems != nullptr)
			*InventoryItems = params.InventoryItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Refresh");
		
		UUI_HotBar_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_ItemName_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBar_C::Get_ItemName_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_ItemName_ColorAndOpacity_1");
		
		UUI_HotBar_C_Get_ItemName_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetSelectedItemName
	 * 		Flags  -> ()
	 */
	class FText UUI_HotBar_C::GetSelectedItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetSelectedItemName");
		
		UUI_HotBar_C_GetSelectedItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_DropControls_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UUI_HotBar_C::Get_DropControls_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_DropControls_bIsEnabled_1");
		
		UUI_HotBar_C_Get_DropControls_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Get_EquipUseControls_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UUI_HotBar_C::Get_EquipUseControls_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Get_EquipUseControls_bIsEnabled_1");
		
		UUI_HotBar_C_Get_EquipUseControls_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.GetText_1
	 * 		Flags  -> ()
	 */
	class FText UUI_HotBar_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.GetText_1");
		
		UUI_HotBar_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.Construct");
		
		UUI_HotBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.ActivateFocusedAnimation
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::ActivateFocusedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.ActivateFocusedAnimation");
		
		UUI_HotBar_C_ActivateFocusedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.DeactivateFocusedAnimation
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::DeactivateFocusedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.DeactivateFocusedAnimation");
		
		UUI_HotBar_C_DeactivateFocusedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.OnEquipmentChanged
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::OnEquipmentChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.OnEquipmentChanged");
		
		UUI_HotBar_C_OnEquipmentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.OnInventoryChanged
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::OnInventoryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.OnInventoryChanged");
		
		UUI_HotBar_C_OnInventoryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.SelectNextSlot
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::SelectNextSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.SelectNextSlot");
		
		UUI_HotBar_C_SelectNextSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.SelectSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::SelectSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.SelectSlot");
		
		UUI_HotBar_C_SelectSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.SelectPreviousSlot
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::SelectPreviousSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.SelectPreviousSlot");
		
		UUI_HotBar_C_SelectPreviousSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.RefreshSelectedStates
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::RefreshSelectedStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.RefreshSelectedStates");
		
		UUI_HotBar_C_RefreshSelectedStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.SelectCurrentSlot
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::SelectCurrentSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.SelectCurrentSlot");
		
		UUI_HotBar_C_SelectCurrentSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.DropCurrentSlot
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::DropCurrentSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.DropCurrentSlot");
		
		UUI_HotBar_C_DropCurrentSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::BindPlayerEvents(class ASurvivalPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.BindPlayerEvents");
		
		UUI_HotBar_C_BindPlayerEvents_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.IncrementPage
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::IncrementPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.IncrementPage");
		
		UUI_HotBar_C_IncrementPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.BindPlayerStateEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::BindPlayerStateEvents(class ASurvivalPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.BindPlayerStateEvents");
		
		UUI_HotBar_C_BindPlayerStateEvents_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.OnGlobalColorChange");
		
		UUI_HotBar_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.NewSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::NewSelectedItem(class UItem* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.NewSelectedItem");
		
		UUI_HotBar_C_NewSelectedItem_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HotBar_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.OnUsingGamepadChanged");
		
		UUI_HotBar_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.CooldownEndAnim
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::CooldownEndAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.CooldownEndAnim");
		
		UUI_HotBar_C_CooldownEndAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.CooldownBeginAnim
	 * 		Flags  -> ()
	 */
	void UUI_HotBar_C::CooldownBeginAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.CooldownBeginAnim");
		
		UUI_HotBar_C_CooldownBeginAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.OnSittingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSitting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HotBar_C::OnSittingChanged(bool bIsSitting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.OnSittingChanged");
		
		UUI_HotBar_C_OnSittingChanged_Params params {};
		params.bIsSitting = bIsSitting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBar.UI_HotBar_C.ExecuteUbergraph_UI_HotBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBar_C::ExecuteUbergraph_UI_HotBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBar.UI_HotBar_C.ExecuteUbergraph_UI_HotBar");
		
		UUI_HotBar_C_ExecuteUbergraph_UI_HotBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HotBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HotBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HotBar.UI_HotBar_C");
		return ptr;
	}

}


