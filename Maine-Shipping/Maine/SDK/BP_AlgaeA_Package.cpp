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
	 * 		Name   -> Function BP_AlgaeA.BP_AlgaeA_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AlgaeA_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AlgaeA.BP_AlgaeA_C.ReceiveBeginPlay");
		
		ABP_AlgaeA_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AlgaeA.BP_AlgaeA_C.ExecuteUbergraph_BP_AlgaeA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AlgaeA_C::ExecuteUbergraph_BP_AlgaeA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AlgaeA.BP_AlgaeA_C.ExecuteUbergraph_BP_AlgaeA");
		
		ABP_AlgaeA_C_ExecuteUbergraph_BP_AlgaeA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AlgaeA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AlgaeA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AlgaeA.BP_AlgaeA_C");
		return ptr;
	}

}


