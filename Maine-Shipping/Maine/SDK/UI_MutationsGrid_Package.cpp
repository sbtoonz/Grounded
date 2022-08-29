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
	 * 		Name   -> PredefinedFunction UUI_MutationsGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MutationsGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MutationsGrid.UI_MutationsGrid_C");
		return ptr;
	}

}


