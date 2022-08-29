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
	 * 		Name   -> Function BP_Firefly_StandIn.BP_Firefly_StandIn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Firefly_StandIn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firefly_StandIn.BP_Firefly_StandIn_C.ReceiveBeginPlay");
		
		ABP_Firefly_StandIn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firefly_StandIn.BP_Firefly_StandIn_C.ToggleVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firefly_StandIn_C::ToggleVFX(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firefly_StandIn.BP_Firefly_StandIn_C.ToggleVFX");
		
		ABP_Firefly_StandIn_C_ToggleVFX_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firefly_StandIn.BP_Firefly_StandIn_C.ExecuteUbergraph_BP_Firefly_StandIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firefly_StandIn_C::ExecuteUbergraph_BP_Firefly_StandIn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firefly_StandIn.BP_Firefly_StandIn_C.ExecuteUbergraph_BP_Firefly_StandIn");
		
		ABP_Firefly_StandIn_C_ExecuteUbergraph_BP_Firefly_StandIn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Firefly_StandIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firefly_StandIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Firefly_StandIn.BP_Firefly_StandIn_C");
		return ptr;
	}

}


