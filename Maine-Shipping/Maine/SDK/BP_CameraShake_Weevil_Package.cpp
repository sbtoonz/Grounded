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
	 * 		Name   -> PredefinedFunction UBP_CameraShake_Weevil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CameraShake_Weevil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraShake_Weevil.BP_CameraShake_Weevil_C");
		return ptr;
	}

}


