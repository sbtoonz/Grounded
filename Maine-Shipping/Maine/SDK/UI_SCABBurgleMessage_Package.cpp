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
	 * 		Name   -> Function UI_SCABBurgleMessage.UI_SCABBurgleMessage_C.GetDay
	 * 		Flags  -> ()
	 */
	class FText UUI_SCABBurgleMessage_C::GetDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABBurgleMessage.UI_SCABBurgleMessage_C.GetDay");
		
		UUI_SCABBurgleMessage_C_GetDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABBurgleMessage.UI_SCABBurgleMessage_C.GetTime
	 * 		Flags  -> ()
	 */
	class FText UUI_SCABBurgleMessage_C::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABBurgleMessage.UI_SCABBurgleMessage_C.GetTime");
		
		UUI_SCABBurgleMessage_C_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SCABBurgleMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SCABBurgleMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SCABBurgleMessage.UI_SCABBurgleMessage_C");
		return ptr;
	}

}


