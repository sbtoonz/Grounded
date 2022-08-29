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
	 * 		Name   -> Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void UUI_BuildingVariantPip_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.UpdateColor");
		
		UUI_BuildingVariantPip_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuildingVariantPip_C::SetSelected(bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.SetSelected");
		
		UUI_BuildingVariantPip_C_SetSelected_Params params {};
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BuildingVariantPip_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.OnGlobalColorChange");
		
		UUI_BuildingVariantPip_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.ExecuteUbergraph_UI_BuildingVariantPip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingVariantPip_C::ExecuteUbergraph_UI_BuildingVariantPip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.ExecuteUbergraph_UI_BuildingVariantPip");
		
		UUI_BuildingVariantPip_C_ExecuteUbergraph_UI_BuildingVariantPip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildingVariantPip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildingVariantPip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingVariantPip.UI_BuildingVariantPip_C");
		return ptr;
	}

}


