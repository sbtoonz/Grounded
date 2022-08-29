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
	 * 		Name   -> PredefinedFunction UAB_Ant_Soldier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Ant_Soldier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Ant_Soldier.AB_Ant_Soldier_C");
		return ptr;
	}

}


