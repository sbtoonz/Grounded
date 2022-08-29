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
	 * 		Name   -> Function BP_VFX_DeadInsect_Loot.BP_VFX_DeadInsect_Loot_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_VFX_DeadInsect_Loot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_DeadInsect_Loot.BP_VFX_DeadInsect_Loot_C.ReceiveBeginPlay");
		
		ABP_VFX_DeadInsect_Loot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFX_DeadInsect_Loot.BP_VFX_DeadInsect_Loot_C.ExecuteUbergraph_BP_VFX_DeadInsect_Loot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VFX_DeadInsect_Loot_C::ExecuteUbergraph_BP_VFX_DeadInsect_Loot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_DeadInsect_Loot.BP_VFX_DeadInsect_Loot_C.ExecuteUbergraph_BP_VFX_DeadInsect_Loot");
		
		ABP_VFX_DeadInsect_Loot_C_ExecuteUbergraph_BP_VFX_DeadInsect_Loot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VFX_DeadInsect_Loot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VFX_DeadInsect_Loot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VFX_DeadInsect_Loot.BP_VFX_DeadInsect_Loot_C");
		return ptr;
	}

}


