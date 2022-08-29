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
	 * 		Name   -> Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.SetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingSlotOverlay_C::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.SetSelectedIndex");
		
		UUI_BuildingSlotOverlay_C_SetSelectedIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingSlotOverlay_C::SetCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.SetCount");
		
		UUI_BuildingSlotOverlay_C_SetCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BuildingSlotOverlay_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.OnGlobalColorChange");
		
		UUI_BuildingSlotOverlay_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.ExecuteUbergraph_UI_BuildingSlotOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingSlotOverlay_C::ExecuteUbergraph_UI_BuildingSlotOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C.ExecuteUbergraph_UI_BuildingSlotOverlay");
		
		UUI_BuildingSlotOverlay_C_ExecuteUbergraph_UI_BuildingSlotOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildingSlotOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildingSlotOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingSlotOverlay.UI_BuildingSlotOverlay_C");
		return ptr;
	}

}


