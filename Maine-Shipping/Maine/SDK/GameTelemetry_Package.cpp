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
	 * 		Name   -> PredefinedFunction UTelemetryHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetryHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameTelemetry.TelemetryHelper");
		return ptr;
	}

}


