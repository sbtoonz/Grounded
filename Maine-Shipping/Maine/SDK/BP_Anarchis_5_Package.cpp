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
	 * 		Name   -> PredefinedFunction ABP_Anarchis_4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anarchis_4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anarchis_5.BP_Anarchis_4_C");
		return ptr;
	}

}


