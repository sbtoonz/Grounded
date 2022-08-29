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
	 * 		Name   -> PredefinedFunction UVITAL_Bombardier_Happiness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVITAL_Bombardier_Happiness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VITAL_Bombardier_Happiness.VITAL_Bombardier_Happiness_C");
		return ptr;
	}

}


