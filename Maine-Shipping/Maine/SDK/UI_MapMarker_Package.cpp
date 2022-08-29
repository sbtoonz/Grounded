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
	 * 		Name   -> Function UI_MapMarker.UI_MapMarker_C.GetDescriptionWindowIcon
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_MapMarker_C::GetDescriptionWindowIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapMarker.UI_MapMarker_C.GetDescriptionWindowIcon");
		
		UUI_MapMarker_C_GetDescriptionWindowIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapMarker.UI_MapMarker_C.RefreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_MapMarker_C::RefreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapMarker.UI_MapMarker_C.RefreshVisuals");
		
		UUI_MapMarker_C_RefreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapMarker.UI_MapMarker_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapMarker_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapMarker.UI_MapMarker_C.OnGlobalColorChange");
		
		UUI_MapMarker_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapMarker.UI_MapMarker_C.SetMarkerColor
	 * 		Flags  -> ()
	 */
	void UUI_MapMarker_C::SetMarkerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapMarker.UI_MapMarker_C.SetMarkerColor");
		
		UUI_MapMarker_C_SetMarkerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapMarker.UI_MapMarker_C.ExecuteUbergraph_UI_MapMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapMarker_C::ExecuteUbergraph_UI_MapMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapMarker.UI_MapMarker_C.ExecuteUbergraph_UI_MapMarker");
		
		UUI_MapMarker_C_ExecuteUbergraph_UI_MapMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapMarker.UI_MapMarker_C");
		return ptr;
	}

}


