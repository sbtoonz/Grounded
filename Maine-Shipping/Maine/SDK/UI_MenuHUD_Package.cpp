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
	 * 		Name   -> PredefinedFunction AUI_MenuHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUI_MenuHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UI_MenuHUD.UI_MenuHUD_C");
		return ptr;
	}

}


