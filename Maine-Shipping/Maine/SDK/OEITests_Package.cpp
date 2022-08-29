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
	 * 		Name   -> PredefinedFunction UOEIBootTimeTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIBootTimeTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEITests.OEIBootTimeTest");
		return ptr;
	}

}


