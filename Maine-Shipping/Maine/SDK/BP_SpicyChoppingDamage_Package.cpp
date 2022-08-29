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
	 * 		Name   -> PredefinedFunction UBP_SpicyChoppingDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpicyChoppingDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpicyChoppingDamage.BP_SpicyChoppingDamage_C");
		return ptr;
	}

}


