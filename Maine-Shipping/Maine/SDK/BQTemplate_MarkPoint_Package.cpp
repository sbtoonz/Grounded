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
	 * 		Name   -> PredefinedFunction UBQTemplate_MarkPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQTemplate_MarkPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQTemplate_MarkPoint.BQTemplate_MarkPoint_C");
		return ptr;
	}

}


