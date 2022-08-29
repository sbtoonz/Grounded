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
	 * 		Name   -> PredefinedFunction UVITAL_LarvaInfected_Sleepiness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVITAL_LarvaInfected_Sleepiness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VITAL_LarvaInfected_Sleepiness.VITAL_LarvaInfected_Sleepiness_C");
		return ptr;
	}

}


