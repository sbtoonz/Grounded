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
	 * 		Name   -> PredefinedFunction ABP_Anarchis_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anarchis_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anarchis_3.BP_Anarchis_2_C");
		return ptr;
	}

}


