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
	 * 		Name   -> PredefinedFunction UBP_CameraShake_M_Short_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CameraShake_M_Short_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraShake_M_Short.BP_CameraShake_M_Short_C");
		return ptr;
	}

}


