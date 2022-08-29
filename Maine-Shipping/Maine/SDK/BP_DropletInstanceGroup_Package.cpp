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
	 * 		Name   -> PredefinedFunction ABP_DropletInstanceGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DropletInstanceGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DropletInstanceGroup.BP_DropletInstanceGroup_C");
		return ptr;
	}

}

