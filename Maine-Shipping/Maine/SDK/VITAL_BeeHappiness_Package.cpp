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
	 * 		Name   -> PredefinedFunction UVITAL_BeeHappiness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVITAL_BeeHappiness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VITAL_BeeHappiness.VITAL_BeeHappiness_C");
		return ptr;
	}

}


