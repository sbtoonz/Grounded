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
	 * 		Name   -> PredefinedFunction ABP_Plant_Small_Leafy_B_Dry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Plant_Small_Leafy_B_Dry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Plant_Small_Leafy_B_Dry.BP_Plant_Small_Leafy_B_Dry_C");
		return ptr;
	}

}


