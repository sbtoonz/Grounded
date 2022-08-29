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
	 * 		Name   -> Function BP_Weed_Spiky_A.BP_Weed_Spiky_A_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Weed_Spiky_A_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Spiky_A.BP_Weed_Spiky_A_C.ReceiveBeginPlay");
		
		ABP_Weed_Spiky_A_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weed_Spiky_A.BP_Weed_Spiky_A_C.HandleLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_Weed_Spiky_A_C::HandleLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Spiky_A.BP_Weed_Spiky_A_C.HandleLootSpawnVisuals");
		
		ABP_Weed_Spiky_A_C_HandleLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weed_Spiky_A.BP_Weed_Spiky_A_C.ExecuteUbergraph_BP_Weed_Spiky_A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weed_Spiky_A_C::ExecuteUbergraph_BP_Weed_Spiky_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Spiky_A.BP_Weed_Spiky_A_C.ExecuteUbergraph_BP_Weed_Spiky_A");
		
		ABP_Weed_Spiky_A_C_ExecuteUbergraph_BP_Weed_Spiky_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weed_Spiky_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weed_Spiky_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weed_Spiky_A.BP_Weed_Spiky_A_C");
		return ptr;
	}

}


