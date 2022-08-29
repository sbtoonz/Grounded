﻿/**
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
	 * 		Name   -> PredefinedFunction USD_Mushroom_Grown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USD_Mushroom_Grown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SD_Mushroom_Grown.SD_Mushroom_Grown_C");
		return ptr;
	}

}


