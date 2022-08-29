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
	 * 		Name   -> Function BP_GrassBlade_E.BP_GrassBlade_E_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GrassBlade_E_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBlade_E.BP_GrassBlade_E_C.ReceiveBeginPlay");
		
		ABP_GrassBlade_E_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrassBlade_E.BP_GrassBlade_E_C.HandleLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_GrassBlade_E_C::HandleLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBlade_E.BP_GrassBlade_E_C.HandleLootSpawnVisuals");
		
		ABP_GrassBlade_E_C_HandleLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrassBlade_E.BP_GrassBlade_E_C.ExecuteUbergraph_BP_GrassBlade_E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrassBlade_E_C::ExecuteUbergraph_BP_GrassBlade_E(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBlade_E.BP_GrassBlade_E_C.ExecuteUbergraph_BP_GrassBlade_E");
		
		ABP_GrassBlade_E_C_ExecuteUbergraph_BP_GrassBlade_E_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GrassBlade_E_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrassBlade_E_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrassBlade_E.BP_GrassBlade_E_C");
		return ptr;
	}

}


