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
	 * 		Name   -> PredefinedFunction UVITAL_Weevil_Hunger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVITAL_Weevil_Hunger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VITAL_Weevil_Hunger.VITAL_Weevil_Hunger_C");
		return ptr;
	}

}


