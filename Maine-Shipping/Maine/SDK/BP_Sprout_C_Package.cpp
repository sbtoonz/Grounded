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
	 * 		Name   -> Function BP_Sprout_C.BP_Sprout_C_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Sprout_C_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sprout_C.BP_Sprout_C_C.ReceiveBeginPlay");
		
		ABP_Sprout_C_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sprout_C.BP_Sprout_C_C.ExecuteUbergraph_BP_Sprout_C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sprout_C_C::ExecuteUbergraph_BP_Sprout_C(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sprout_C.BP_Sprout_C_C.ExecuteUbergraph_BP_Sprout_C");
		
		ABP_Sprout_C_C_ExecuteUbergraph_BP_Sprout_C_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sprout_C_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sprout_C_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sprout_C.BP_Sprout_C_C");
		return ptr;
	}

}


