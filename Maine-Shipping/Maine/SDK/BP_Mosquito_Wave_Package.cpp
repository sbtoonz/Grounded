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
	 * 		Name   -> PredefinedFunction ABP_Mosquito_Wave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mosquito_Wave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mosquito_Wave.BP_Mosquito_Wave_C");
		return ptr;
	}

}


