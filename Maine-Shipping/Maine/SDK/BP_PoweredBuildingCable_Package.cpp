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
	 * 		Name   -> Function BP_PoweredBuildingCable.BP_PoweredBuildingCable_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PoweredBuildingCable_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PoweredBuildingCable.BP_PoweredBuildingCable_C.UserConstructionScript");
		
		ABP_PoweredBuildingCable_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PoweredBuildingCable.BP_PoweredBuildingCable_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PoweredBuildingCable_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PoweredBuildingCable.BP_PoweredBuildingCable_C.ReceiveTick");
		
		ABP_PoweredBuildingCable_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PoweredBuildingCable.BP_PoweredBuildingCable_C.ExecuteUbergraph_BP_PoweredBuildingCable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PoweredBuildingCable_C::ExecuteUbergraph_BP_PoweredBuildingCable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PoweredBuildingCable.BP_PoweredBuildingCable_C.ExecuteUbergraph_BP_PoweredBuildingCable");
		
		ABP_PoweredBuildingCable_C_ExecuteUbergraph_BP_PoweredBuildingCable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PoweredBuildingCable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PoweredBuildingCable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PoweredBuildingCable.BP_PoweredBuildingCable_C");
		return ptr;
	}

}


