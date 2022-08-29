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
	 * 		Name   -> Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_InventoryHotpouch_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnGlobalColorChange");
		
		UUI_InventoryHotpouch_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_InventoryHotpouch_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnInitialized");
		
		UUI_InventoryHotpouch_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.HandleSlotFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryHotpouch_C::HandleSlotFocused(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.HandleSlotFocused");
		
		UUI_InventoryHotpouch_C_HandleSlotFocused_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.ExecuteUbergraph_UI_InventoryHotpouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryHotpouch_C::ExecuteUbergraph_UI_InventoryHotpouch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.ExecuteUbergraph_UI_InventoryHotpouch");
		
		UUI_InventoryHotpouch_C_ExecuteUbergraph_UI_InventoryHotpouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnSlotFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryHotpouch_C::OnSlotFocused__DelegateSignature(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnSlotFocused__DelegateSignature");
		
		UUI_InventoryHotpouch_C_OnSlotFocused__DelegateSignature_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InventoryHotpouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InventoryHotpouch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryHotpouch.UI_InventoryHotpouch_C");
		return ptr;
	}

}


