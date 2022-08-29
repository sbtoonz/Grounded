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
	 * 		Name   -> Function BP_AlgaeB.BP_AlgaeB_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AlgaeB_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AlgaeB.BP_AlgaeB_C.ReceiveBeginPlay");
		
		ABP_AlgaeB_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AlgaeB.BP_AlgaeB_C.ExecuteUbergraph_BP_AlgaeB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AlgaeB_C::ExecuteUbergraph_BP_AlgaeB(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AlgaeB.BP_AlgaeB_C.ExecuteUbergraph_BP_AlgaeB");
		
		ABP_AlgaeB_C_ExecuteUbergraph_BP_AlgaeB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AlgaeB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AlgaeB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AlgaeB.BP_AlgaeB_C");
		return ptr;
	}

}


