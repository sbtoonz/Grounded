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
	 * 		Name   -> PredefinedFunction ABP_Hedge_Leaf_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Hedge_Leaf_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hedge_Leaf_A.BP_Hedge_Leaf_A_C");
		return ptr;
	}

}


