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
	 * 		Name   -> Function BP_Mushroom_Roundcap_A.BP_Mushroom_Roundcap_A_C.HandleLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_Mushroom_Roundcap_A_C::HandleLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mushroom_Roundcap_A.BP_Mushroom_Roundcap_A_C.HandleLootSpawnVisuals");
		
		ABP_Mushroom_Roundcap_A_C_HandleLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mushroom_Roundcap_A.BP_Mushroom_Roundcap_A_C.ExecuteUbergraph_BP_Mushroom_Roundcap_A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mushroom_Roundcap_A_C::ExecuteUbergraph_BP_Mushroom_Roundcap_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mushroom_Roundcap_A.BP_Mushroom_Roundcap_A_C.ExecuteUbergraph_BP_Mushroom_Roundcap_A");
		
		ABP_Mushroom_Roundcap_A_C_ExecuteUbergraph_BP_Mushroom_Roundcap_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mushroom_Roundcap_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mushroom_Roundcap_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mushroom_Roundcap_A.BP_Mushroom_Roundcap_A_C");
		return ptr;
	}

}


