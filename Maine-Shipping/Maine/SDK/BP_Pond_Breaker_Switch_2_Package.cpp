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
	 * 		Name   -> Function BP_Pond_Breaker_Switch_2.BP_Pond_Breaker_Switch_1_C.ToggleIsOnGlobalVariableImplementation
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_1_C::ToggleIsOnGlobalVariableImplementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_2.BP_Pond_Breaker_Switch_1_C.ToggleIsOnGlobalVariableImplementation");
		
		ABP_Pond_Breaker_Switch_1_C_ToggleIsOnGlobalVariableImplementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_2.BP_Pond_Breaker_Switch_1_C.ExecuteUbergraph_BP_Pond_Breaker_Switch_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pond_Breaker_Switch_1_C::ExecuteUbergraph_BP_Pond_Breaker_Switch_2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_2.BP_Pond_Breaker_Switch_1_C.ExecuteUbergraph_BP_Pond_Breaker_Switch_2");
		
		ABP_Pond_Breaker_Switch_1_C_ExecuteUbergraph_BP_Pond_Breaker_Switch_2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Pond_Breaker_Switch_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Pond_Breaker_Switch_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pond_Breaker_Switch_2.BP_Pond_Breaker_Switch_1_C");
		return ptr;
	}

}


