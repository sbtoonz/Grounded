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
	 * 		Name   -> Function BP_Termite_WaveAI.BP_Termite_WaveAI_C.ExecuteUbergraph_BP_Termite_WaveAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Termite_WaveAI_C::ExecuteUbergraph_BP_Termite_WaveAI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Termite_WaveAI.BP_Termite_WaveAI_C.ExecuteUbergraph_BP_Termite_WaveAI");
		
		ABP_Termite_WaveAI_C_ExecuteUbergraph_BP_Termite_WaveAI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Termite_WaveAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Termite_WaveAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Termite_WaveAI.BP_Termite_WaveAI_C");
		return ptr;
	}

}

