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
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryGearSlot_C::IsSelected(bool* IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.IsSelected");
		
		UUI_InventoryGearSlot_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSelected != nullptr)
			*IsSelected = params.IsSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.ShowStatusEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       EquippedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryGearSlot_C::ShowStatusEffects(class UItem* EquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.ShowStatusEffects");
		
		UUI_InventoryGearSlot_C_ShowStatusEffects_Params params {};
		params.EquippedItem = EquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.InitializeGearSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquipmentComponent*                         OwningComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       EquippedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryGearSlot_C::InitializeGearSlot(class UEquipmentComponent* OwningComponent, class UItem* EquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.InitializeGearSlot");
		
		UUI_InventoryGearSlot_C_InitializeGearSlot_Params params {};
		params.OwningComponent = OwningComponent;
		params.EquippedItem = EquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.SetGearText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       EquippedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryGearSlot_C::SetGearText(class UItem* EquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.SetGearText");
		
		UUI_InventoryGearSlot_C_SetGearText_Params params {};
		params.EquippedItem = EquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_InventoryGearSlot_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.OnGlobalColorChange");
		
		UUI_InventoryGearSlot_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryGearSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.PreConstruct");
		
		UUI_InventoryGearSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.ExecuteUbergraph_UI_InventoryGearSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryGearSlot_C::ExecuteUbergraph_UI_InventoryGearSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.ExecuteUbergraph_UI_InventoryGearSlot");
		
		UUI_InventoryGearSlot_C_ExecuteUbergraph_UI_InventoryGearSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InventoryGearSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InventoryGearSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryGearSlot.UI_InventoryGearSlot_C");
		return ptr;
	}

}


