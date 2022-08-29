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
	 * 		Name   -> PredefinedFunction ABP_SurvivalPlayerCharacter_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SurvivalPlayerCharacter_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalPlayerCharacter_Female.BP_SurvivalPlayerCharacter_Female_C");
		return ptr;
	}

}


