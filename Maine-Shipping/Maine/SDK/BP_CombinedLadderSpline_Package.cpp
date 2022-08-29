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
	 * 		Name   -> PredefinedFunction ABP_CombinedLadderSpline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CombinedLadderSpline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CombinedLadderSpline.BP_CombinedLadderSpline_C");
		return ptr;
	}

}


