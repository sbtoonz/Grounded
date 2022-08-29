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
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.RefreshBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::RefreshBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.RefreshBottomButtons");
		
		UUI_KeyItems_C_RefreshBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.ClearSelectedItem
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::ClearSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.ClearSelectedItem");
		
		UUI_KeyItems_C_ClearSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.RefreshUI");
		
		UUI_KeyItems_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.SetCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItems_C::SetCategory(const struct FGameplayTag& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.SetCategory");
		
		UUI_KeyItems_C_SetCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.DisplayItemDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItems_C::DisplayItemDetails(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.DisplayItemDetails");
		
		UUI_KeyItems_C_DisplayItemDetails_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_KeyItems_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.HandleKeyEventChord");
		
		UUI_KeyItems_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.Propagate Right Thumbstick Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnalogInputEvent                           Input_Event                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              SpeedMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventReply                                 EventReply                                                 (Parm, OutParm)
	 */
	void UUI_KeyItems_C::Propagate_Right_Thumbstick_Event(const struct FAnalogInputEvent& Input_Event, float SpeedMultiplier, struct FEventReply* EventReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.Propagate Right Thumbstick Event");
		
		UUI_KeyItems_C_Propagate_Right_Thumbstick_Event_Params params {};
		params.Input_Event = Input_Event;
		params.SpeedMultiplier = SpeedMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventReply != nullptr)
			*EventReply = params.EventReply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.GoToItemEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_KeyItems_C::GoToItemEntry(const struct FDataTableRowHandle& RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.GoToItemEntry");
		
		UUI_KeyItems_C_GoToItemEntry_Params params {};
		params.RowHandle = RowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.UseItemVisibility
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::UseItemVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.UseItemVisibility");
		
		UUI_KeyItems_C_UseItemVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.UseSelectedItem
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::UseSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.UseSelectedItem");
		
		UUI_KeyItems_C_UseSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.GetUseButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_KeyItems_C::GetUseButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.GetUseButtonVisibility");
		
		UUI_KeyItems_C_GetUseButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_KeyItems_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.GetHeaderColor");
		
		UUI_KeyItems_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_KeyItems_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.GetAccentTwo");
		
		UUI_KeyItems_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.GetBasicColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_KeyItems_C::GetBasicColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.GetBasicColor");
		
		UUI_KeyItems_C_GetBasicColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.OnKeyItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyItemCollection_C*                     ItemCollection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItems_C::OnKeyItemSelected(class UUI_KeyItemCollection_C* ItemCollection, class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.OnKeyItemSelected");
		
		UUI_KeyItems_C_OnKeyItemSelected_Params params {};
		params.ItemCollection = ItemCollection;
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.OnButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyItemCollection_C*                     ItemCollection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItems_C::OnButtonClicked(class UUI_KeyItemCollection_C* ItemCollection, class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.OnButtonClicked");
		
		UUI_KeyItems_C_OnButtonClicked_Params params {};
		params.ItemCollection = ItemCollection;
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_KeyItems_C_BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.InspectSelectedItem
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::InspectSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.InspectSelectedItem");
		
		UUI_KeyItems_C_InspectSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_KeyItems_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_KeyItems_C_BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_KeyItems_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.OnGlobalColorChange");
		
		UUI_KeyItems_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItems.UI_KeyItems_C.ExecuteUbergraph_UI_KeyItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItems_C::ExecuteUbergraph_UI_KeyItems(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItems.UI_KeyItems_C.ExecuteUbergraph_UI_KeyItems");
		
		UUI_KeyItems_C_ExecuteUbergraph_UI_KeyItems_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KeyItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KeyItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KeyItems.UI_KeyItems_C");
		return ptr;
	}

}


