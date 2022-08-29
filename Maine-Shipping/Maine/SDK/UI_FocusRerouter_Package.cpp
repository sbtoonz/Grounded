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
	 * 		Name   -> PredefinedFunction UUI_FocusRerouter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FocusRerouter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FocusRerouter.UI_FocusRerouter_C");
		return ptr;
	}

}


