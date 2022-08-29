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
	 * 		Name   -> Function BP_World_Petal_Red.BP_World_Petal_Red_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_World_Petal_Red_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Petal_Red.BP_World_Petal_Red_C.UserConstructionScript");
		
		ABP_World_Petal_Red_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_World_Petal_Red_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Petal_Red_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Petal_Red.BP_World_Petal_Red_C");
		return ptr;
	}

}


