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
	 * 		Name   -> PredefinedFunction UBP_RelaxedModeSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RelaxedModeSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RelaxedModeSettings.BP_RelaxedModeSettings_C");
		return ptr;
	}

}


