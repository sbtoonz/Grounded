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
	 * 		Name   -> Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.GetDescriptionWindowIcon
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_MapPlayerWaypoint_C::GetDescriptionWindowIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.GetDescriptionWindowIcon");
		
		UUI_MapPlayerWaypoint_C_GetDescriptionWindowIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.RefreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_MapPlayerWaypoint_C::RefreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.RefreshVisuals");
		
		UUI_MapPlayerWaypoint_C_RefreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.ExecuteUbergraph_UI_MapPlayerWaypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPlayerWaypoint_C::ExecuteUbergraph_UI_MapPlayerWaypoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.ExecuteUbergraph_UI_MapPlayerWaypoint");
		
		UUI_MapPlayerWaypoint_C_ExecuteUbergraph_UI_MapPlayerWaypoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapPlayerWaypoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapPlayerWaypoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C");
		return ptr;
	}

}


