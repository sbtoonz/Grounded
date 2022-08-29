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
	 * 		Name   -> PredefinedFunction ABQOption_KillUnique_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABQOption_KillUnique_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQOption_KillUnique.BQOption_KillUnique_C");
		return ptr;
	}

}


