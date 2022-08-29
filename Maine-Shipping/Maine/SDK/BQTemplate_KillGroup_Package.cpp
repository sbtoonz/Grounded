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
	 * 		Name   -> PredefinedFunction UBQTemplate_KillGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQTemplate_KillGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQTemplate_KillGroup.BQTemplate_KillGroup_C");
		return ptr;
	}

}


