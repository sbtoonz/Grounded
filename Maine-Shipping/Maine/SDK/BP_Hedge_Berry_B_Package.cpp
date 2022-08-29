﻿/**
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
	 * 		Name   -> Function BP_Hedge_Berry_B.BP_Hedge_Berry_B_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Hedge_Berry_B_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hedge_Berry_B.BP_Hedge_Berry_B_C.ReceiveBeginPlay");
		
		ABP_Hedge_Berry_B_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Hedge_Berry_B.BP_Hedge_Berry_B_C.ExecuteUbergraph_BP_Hedge_Berry_B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Hedge_Berry_B_C::ExecuteUbergraph_BP_Hedge_Berry_B(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hedge_Berry_B.BP_Hedge_Berry_B_C.ExecuteUbergraph_BP_Hedge_Berry_B");
		
		ABP_Hedge_Berry_B_C_ExecuteUbergraph_BP_Hedge_Berry_B_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Hedge_Berry_B_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Hedge_Berry_B_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hedge_Berry_B.BP_Hedge_Berry_B_C");
		return ptr;
	}

}

