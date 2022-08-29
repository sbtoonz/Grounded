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
	 * 		Name   -> Function BP_Eelgrass_D.BP_Eelgrass_D_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Eelgrass_D_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Eelgrass_D.BP_Eelgrass_D_C.ReceiveBeginPlay");
		
		ABP_Eelgrass_D_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Eelgrass_D.BP_Eelgrass_D_C.ExecuteUbergraph_BP_Eelgrass_D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Eelgrass_D_C::ExecuteUbergraph_BP_Eelgrass_D(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Eelgrass_D.BP_Eelgrass_D_C.ExecuteUbergraph_BP_Eelgrass_D");
		
		ABP_Eelgrass_D_C_ExecuteUbergraph_BP_Eelgrass_D_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Eelgrass_D_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Eelgrass_D_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Eelgrass_D.BP_Eelgrass_D_C");
		return ptr;
	}

}

