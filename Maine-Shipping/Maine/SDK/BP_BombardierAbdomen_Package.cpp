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
	 * 		Name   -> PredefinedFunction ABP_BombardierAbdomen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BombardierAbdomen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BombardierAbdomen.BP_BombardierAbdomen_C");
		return ptr;
	}

}


