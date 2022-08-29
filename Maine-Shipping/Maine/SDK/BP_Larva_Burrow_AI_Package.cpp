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
	 * 		Name   -> PredefinedFunction ABP_Larva_Burrow_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Larva_Burrow_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Larva_Burrow_AI.BP_Larva_Burrow_AI_C");
		return ptr;
	}

}


