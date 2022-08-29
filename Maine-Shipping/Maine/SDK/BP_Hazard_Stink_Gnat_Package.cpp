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
	 * 		Name   -> PredefinedFunction ABP_Hazard_Stink_Gnat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Hazard_Stink_Gnat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hazard_Stink_Gnat.BP_Hazard_Stink_Gnat_C");
		return ptr;
	}

}


