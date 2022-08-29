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
	 * 		Name   -> PredefinedFunction ABP_Wood_Splinter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Wood_Splinter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wood_Splinter.BP_Wood_Splinter_C");
		return ptr;
	}

}


