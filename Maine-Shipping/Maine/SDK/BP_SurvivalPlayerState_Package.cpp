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
	 * 		Name   -> Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerState_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.UserConstructionScript");
		
		ABP_SurvivalPlayerState_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.ReceiveBeginPlay");
		
		ABP_SurvivalPlayerState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.TriggerPersonalMolarQuestAfterDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerState_C::TriggerPersonalMolarQuestAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.TriggerPersonalMolarQuestAfterDelay");
		
		ABP_SurvivalPlayerState_C_TriggerPersonalMolarQuestAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.ExecuteUbergraph_BP_SurvivalPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerState_C::ExecuteUbergraph_BP_SurvivalPlayerState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerState.BP_SurvivalPlayerState_C.ExecuteUbergraph_BP_SurvivalPlayerState");
		
		ABP_SurvivalPlayerState_C_ExecuteUbergraph_BP_SurvivalPlayerState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SurvivalPlayerState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SurvivalPlayerState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalPlayerState.BP_SurvivalPlayerState_C");
		return ptr;
	}

}


