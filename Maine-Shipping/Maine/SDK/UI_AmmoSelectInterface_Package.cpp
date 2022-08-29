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
	 * 		Name   -> Function UI_AmmoSelectInterface.UI_AmmoSelectInterface_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_AmmoSelectInterface_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AmmoSelectInterface.UI_AmmoSelectInterface_C.GetDefaultUserFocus");
		
		UUI_AmmoSelectInterface_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AmmoSelectInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AmmoSelectInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AmmoSelectInterface.UI_AmmoSelectInterface_C");
		return ptr;
	}

}


