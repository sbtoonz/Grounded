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
	 * 		Name   -> Function UI_ShortcutsInterface.UI_ShortcutsInterface_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_ShortcutsInterface_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutsInterface.UI_ShortcutsInterface_C.GetDefaultUserFocus");
		
		UUI_ShortcutsInterface_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShortcutsInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShortcutsInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShortcutsInterface.UI_ShortcutsInterface_C");
		return ptr;
	}

}


