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
	 * 		Name   -> PredefinedFunction USG_ThistleNeedle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USG_ThistleNeedle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SG_ThistleNeedle.SG_ThistleNeedle_C");
		return ptr;
	}

}


