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
	 * 		Name   -> PredefinedFunction ABP_Clover_Flower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Clover_Flower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Clover_Flower.BP_Clover_Flower_C");
		return ptr;
	}

}


