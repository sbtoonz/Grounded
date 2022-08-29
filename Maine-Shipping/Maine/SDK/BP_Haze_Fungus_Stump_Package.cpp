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
	 * 		Name   -> Function BP_Haze_Fungus_Stump.BP_Haze_Fungus_Stump_C.CanRevertToFoliage
	 * 		Flags  -> ()
	 */
	ECanRevertToFoliageState ABP_Haze_Fungus_Stump_C::CanRevertToFoliage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus_Stump.BP_Haze_Fungus_Stump_C.CanRevertToFoliage");
		
		ABP_Haze_Fungus_Stump_C_CanRevertToFoliage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Haze_Fungus_Stump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Haze_Fungus_Stump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Haze_Fungus_Stump.BP_Haze_Fungus_Stump_C");
		return ptr;
	}

}


