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
	 * 		Name   -> PredefinedFunction UAB_Termite_Soldier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Termite_Soldier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Termite_Soldier.AB_Termite_Soldier_C");
		return ptr;
	}

}


