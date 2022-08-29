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
	 * 		Name   -> Function BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_BuildingRelocateTracer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C.UserConstructionScript");
		
		ABP_BuildingRelocateTracer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BuildingRelocateTracer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C.ReceiveTick");
		
		ABP_BuildingRelocateTracer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C.ExecuteUbergraph_BP_BuildingRelocateTracer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BuildingRelocateTracer_C::ExecuteUbergraph_BP_BuildingRelocateTracer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C.ExecuteUbergraph_BP_BuildingRelocateTracer");
		
		ABP_BuildingRelocateTracer_C_ExecuteUbergraph_BP_BuildingRelocateTracer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BuildingRelocateTracer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BuildingRelocateTracer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildingRelocateTracer.BP_BuildingRelocateTracer_C");
		return ptr;
	}

}


