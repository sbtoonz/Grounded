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
	 * 		Name   -> PredefinedFunction ABP_DeadBug_Bombardier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DeadBug_Bombardier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeadBug_Bombardier.BP_DeadBug_Bombardier_C");
		return ptr;
	}

}


