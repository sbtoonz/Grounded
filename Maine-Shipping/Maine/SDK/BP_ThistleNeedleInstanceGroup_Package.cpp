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
	 * 		Name   -> PredefinedFunction ABP_ThistleNeedleInstanceGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ThistleNeedleInstanceGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThistleNeedleInstanceGroup.BP_ThistleNeedleInstanceGroup_C");
		return ptr;
	}

}


