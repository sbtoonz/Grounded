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
	 * 		Name   -> PredefinedFunction ABP_StinkBugLeg_L_Front_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StinkBugLeg_L_Front_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StinkBugLeg_L_Front.BP_StinkBugLeg_L_Front_C");
		return ptr;
	}

}


