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
	 * 		Name   -> Function BP_Backpack_Player_Female02.BP_Backpack_Player_Female02_C.GetShouldShowHUDMarker
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Player_Female02_C::GetShouldShowHUDMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Backpack_Player_Female02.BP_Backpack_Player_Female02_C.GetShouldShowHUDMarker");
		
		ABP_Backpack_Player_Female02_C_GetShouldShowHUDMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Backpack_Player_Female02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Backpack_Player_Female02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Backpack_Player_Female02.BP_Backpack_Player_Female02_C");
		return ptr;
	}

}


