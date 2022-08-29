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
	 * 		Name   -> PredefinedFunction ABP_Rock_Clay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rock_Clay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rock_Clay.BP_Rock_Clay_C");
		return ptr;
	}

}


