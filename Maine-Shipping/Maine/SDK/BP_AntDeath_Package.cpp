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
	 * 		Name   -> Function BP_AntDeath.BP_AntDeath_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AntDeath_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AntDeath.BP_AntDeath_C.ReceiveBeginPlay");
		
		ABP_AntDeath_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AntDeath.BP_AntDeath_C.ExecuteUbergraph_BP_AntDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AntDeath_C::ExecuteUbergraph_BP_AntDeath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AntDeath.BP_AntDeath_C.ExecuteUbergraph_BP_AntDeath");
		
		ABP_AntDeath_C_ExecuteUbergraph_BP_AntDeath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AntDeath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AntDeath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AntDeath.BP_AntDeath_C");
		return ptr;
	}

}


