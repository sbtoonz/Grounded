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
	 * 		Name   -> PredefinedFunction ABP_LadyBugInfectedAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LadyBugInfectedAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LadyBugInfectedAI.BP_LadyBugInfectedAI_C");
		return ptr;
	}

}


