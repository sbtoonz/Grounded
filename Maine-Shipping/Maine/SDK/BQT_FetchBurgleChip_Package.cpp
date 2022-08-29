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
	 * 		Name   -> PredefinedFunction UBQT_FetchBurgleChip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQT_FetchBurgleChip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQT_FetchBurgleChip.BQT_FetchBurgleChip_C");
		return ptr;
	}

}


