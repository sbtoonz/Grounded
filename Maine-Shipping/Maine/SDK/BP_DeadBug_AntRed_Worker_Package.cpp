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
	 * 		Name   -> PredefinedFunction ABP_DeadBug_AntRed_Worker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DeadBug_AntRed_Worker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeadBug_AntRed_Worker.BP_DeadBug_AntRed_Worker_C");
		return ptr;
	}

}


