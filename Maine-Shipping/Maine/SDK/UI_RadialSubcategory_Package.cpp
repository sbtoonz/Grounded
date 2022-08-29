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
	 * 		Name   -> PredefinedFunction UUI_RadialSubcategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RadialSubcategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RadialSubcategory.UI_RadialSubcategory_C");
		return ptr;
	}

}


