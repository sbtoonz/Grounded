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
	 * 		Name   -> Function BP_Hazard_Stink.BP_Hazard_Stink_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Hazard_Stink_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hazard_Stink.BP_Hazard_Stink_C.ReceiveBeginPlay");
		
		ABP_Hazard_Stink_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Hazard_Stink.BP_Hazard_Stink_C.EndVFX
	 * 		Flags  -> ()
	 */
	void ABP_Hazard_Stink_C::EndVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hazard_Stink.BP_Hazard_Stink_C.EndVFX");
		
		ABP_Hazard_Stink_C_EndVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Hazard_Stink.BP_Hazard_Stink_C.ExecuteUbergraph_BP_Hazard_Stink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Hazard_Stink_C::ExecuteUbergraph_BP_Hazard_Stink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hazard_Stink.BP_Hazard_Stink_C.ExecuteUbergraph_BP_Hazard_Stink");
		
		ABP_Hazard_Stink_C_ExecuteUbergraph_BP_Hazard_Stink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Hazard_Stink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Hazard_Stink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hazard_Stink.BP_Hazard_Stink_C");
		return ptr;
	}

}


