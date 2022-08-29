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
	 * 		Name   -> PredefinedFunction UBP_DiggingDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DiggingDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DiggingDamage.BP_DiggingDamage_C");
		return ptr;
	}

}


