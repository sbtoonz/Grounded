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
	 * 		Name   -> PredefinedFunction ABP_GrassBlade_Burned_D3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrassBlade_Burned_D3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrassBlade_Burned_D3.BP_GrassBlade_Burned_D3_C");
		return ptr;
	}

}

