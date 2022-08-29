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
	 * 		Name   -> Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.LightTurnOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BreakerID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerConverterPondLab_C::LightTurnOn(int32_t BreakerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.LightTurnOn");
		
		ABP_PowerConverterPondLab_C_LightTurnOn_Params params {};
		params.BreakerID = BreakerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.BndEvt__ConditionalToggle_AllBreakersOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PowerConverterPondLab_C::BndEvt__ConditionalToggle_AllBreakersOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.BndEvt__ConditionalToggle_AllBreakersOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature");
		
		ABP_PowerConverterPondLab_C_BndEvt__ConditionalToggle_AllBreakersOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.ToggleConnectedFans
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToggleOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PowerConverterPondLab_C::ToggleConnectedFans(bool ToggleOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.ToggleConnectedFans");
		
		ABP_PowerConverterPondLab_C_ToggleConnectedFans_Params params {};
		params.ToggleOn = ToggleOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.ExecuteUbergraph_BP_PowerConverterPondLab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerConverterPondLab_C::ExecuteUbergraph_BP_PowerConverterPondLab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.ExecuteUbergraph_BP_PowerConverterPondLab");
		
		ABP_PowerConverterPondLab_C_ExecuteUbergraph_BP_PowerConverterPondLab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PowerConverterPondLab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PowerConverterPondLab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PowerConverterPondLab.BP_PowerConverterPondLab_C");
		return ptr;
	}

}


