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
	 * 		Name   -> PredefinedFunction ABP_GrassBlade_Dead_D_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrassBlade_Dead_D_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrassBlade_Dead_D.BP_GrassBlade_Dead_D_C");
		return ptr;
	}

}


