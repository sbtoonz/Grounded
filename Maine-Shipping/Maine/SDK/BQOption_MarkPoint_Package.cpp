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
	 * 		Name   -> Function BQOption_MarkPoint.BQOption_MarkPoint_C.GetLocationName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABQOption_MarkPoint_C::GetLocationName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQOption_MarkPoint.BQOption_MarkPoint_C.GetLocationName");
		
		ABQOption_MarkPoint_C_GetLocationName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABQOption_MarkPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABQOption_MarkPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQOption_MarkPoint.BQOption_MarkPoint_C");
		return ptr;
	}

}


