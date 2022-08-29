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
	 * 		Name   -> PredefinedFunction UAB_Spider_Wolf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Spider_Wolf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Spider_Wolf.AB_Spider_Wolf_C");
		return ptr;
	}

}


