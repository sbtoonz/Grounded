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
	 * 		Name   -> Function BP_Mushroom_Roundcap_B.BP_Mushroom_Roundcap_B_C.HandleLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_Mushroom_Roundcap_B_C::HandleLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mushroom_Roundcap_B.BP_Mushroom_Roundcap_B_C.HandleLootSpawnVisuals");
		
		ABP_Mushroom_Roundcap_B_C_HandleLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mushroom_Roundcap_B.BP_Mushroom_Roundcap_B_C.ExecuteUbergraph_BP_Mushroom_Roundcap_B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mushroom_Roundcap_B_C::ExecuteUbergraph_BP_Mushroom_Roundcap_B(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mushroom_Roundcap_B.BP_Mushroom_Roundcap_B_C.ExecuteUbergraph_BP_Mushroom_Roundcap_B");
		
		ABP_Mushroom_Roundcap_B_C_ExecuteUbergraph_BP_Mushroom_Roundcap_B_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mushroom_Roundcap_B_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mushroom_Roundcap_B_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mushroom_Roundcap_B.BP_Mushroom_Roundcap_B_C");
		return ptr;
	}

}


