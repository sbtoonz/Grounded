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
	 * 		Name   -> PredefinedFunction ABP_Ladybug_Infected_Lab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ladybug_Infected_Lab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ladybug_Infected_Lab.BP_Ladybug_Infected_Lab_C");
		return ptr;
	}

}


