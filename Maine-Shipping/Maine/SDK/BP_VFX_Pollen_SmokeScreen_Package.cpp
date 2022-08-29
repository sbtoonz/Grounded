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
	 * 		Name   -> PredefinedFunction ABP_VFX_Pollen_SmokeScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VFX_Pollen_SmokeScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VFX_Pollen_SmokeScreen.BP_VFX_Pollen_SmokeScreen_C");
		return ptr;
	}

}


