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
	 * 		Name   -> Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Control_Panel_Standing_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.UserConstructionScript");
		
		ABP_Control_Panel_Standing_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Control_Panel_Standing_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ReceiveBeginPlay");
		
		ABP_Control_Panel_Standing_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ImplementableOnLightTimelineFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimelineDirection                                 TimelineDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Control_Panel_Standing_C::ImplementableOnLightTimelineFinished(ETimelineDirection TimelineDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ImplementableOnLightTimelineFinished");
		
		ABP_Control_Panel_Standing_C_ImplementableOnLightTimelineFinished_Params params {};
		params.TimelineDirection = TimelineDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ExecuteUbergraph_BP_Control_Panel_Standing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Control_Panel_Standing_C::ExecuteUbergraph_BP_Control_Panel_Standing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ExecuteUbergraph_BP_Control_Panel_Standing");
		
		ABP_Control_Panel_Standing_C_ExecuteUbergraph_BP_Control_Panel_Standing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Control_Panel_Standing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Control_Panel_Standing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Control_Panel_Standing.BP_Control_Panel_Standing_C");
		return ptr;
	}

}


