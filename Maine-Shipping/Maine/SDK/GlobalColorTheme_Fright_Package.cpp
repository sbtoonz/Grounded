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
	 * 		Name   -> PredefinedFunction UGlobalColorTheme_Fright_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalColorTheme_Fright_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalColorTheme_Fright.GlobalColorTheme_Fright_C");
		return ptr;
	}

}

