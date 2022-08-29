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
	 * 		Name   -> Function BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BASE_Weed_Dandelion_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C.ReceiveBeginPlay");
		
		ABP_BASE_Weed_Dandelion_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C.HandleLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_BASE_Weed_Dandelion_C::HandleLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C.HandleLootSpawnVisuals");
		
		ABP_BASE_Weed_Dandelion_C_HandleLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C.ExecuteUbergraph_BP_BASE_Weed_Dandelion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BASE_Weed_Dandelion_C::ExecuteUbergraph_BP_BASE_Weed_Dandelion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C.ExecuteUbergraph_BP_BASE_Weed_Dandelion");
		
		ABP_BASE_Weed_Dandelion_C_ExecuteUbergraph_BP_BASE_Weed_Dandelion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BASE_Weed_Dandelion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BASE_Weed_Dandelion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C");
		return ptr;
	}

}


