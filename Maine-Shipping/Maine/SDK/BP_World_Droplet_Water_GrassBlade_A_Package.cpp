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
	 * 		Name   -> PredefinedFunction ABP_World_Droplet_Water_GrassBlade_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Droplet_Water_GrassBlade_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Droplet_Water_GrassBlade_A.BP_World_Droplet_Water_GrassBlade_A_C");
		return ptr;
	}

}


