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
	 * 		Name   -> PredefinedFunction UCrashLogging.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrashLogging::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEICrashLogging.CrashLogging");
		return ptr;
	}

}


