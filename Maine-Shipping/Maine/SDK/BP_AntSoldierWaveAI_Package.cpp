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
	 * 		Name   -> PredefinedFunction ABP_AntSoldierWaveAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AntSoldierWaveAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AntSoldierWaveAI.BP_AntSoldierWaveAI_C");
		return ptr;
	}

}


