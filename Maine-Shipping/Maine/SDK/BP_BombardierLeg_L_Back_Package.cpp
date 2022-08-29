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
	 * 		Name   -> PredefinedFunction ABP_BombardierLeg_L_Back_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BombardierLeg_L_Back_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BombardierLeg_L_Back.BP_BombardierLeg_L_Back_C");
		return ptr;
	}

}


