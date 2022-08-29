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
	 * 		Name   -> PredefinedFunction UVITAL_Ant_Hunger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVITAL_Ant_Hunger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VITAL_Ant_Hunger.VITAL_Ant_Hunger_C");
		return ptr;
	}

}


