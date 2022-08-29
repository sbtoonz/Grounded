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
	 * 		Name   -> PredefinedFunction UAB_Weevil_Evil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Weevil_Evil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Weevil_Evil.AB_Weevil_Evil_C");
		return ptr;
	}

}


