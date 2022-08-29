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
	 * 		Name   -> PredefinedFunction ABP_DeadBug_StinkBug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DeadBug_StinkBug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeadBug_StinkBug.BP_DeadBug_StinkBug_C");
		return ptr;
	}

}


