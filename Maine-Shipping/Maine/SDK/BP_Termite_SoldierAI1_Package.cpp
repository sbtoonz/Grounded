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
	 * 		Name   -> Function BP_Termite_SoldierAI1.BP_Termite_SoldierAI1_C.ExecuteUbergraph_BP_Termite_SoldierAI1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Termite_SoldierAI1_C::ExecuteUbergraph_BP_Termite_SoldierAI1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Termite_SoldierAI1.BP_Termite_SoldierAI1_C.ExecuteUbergraph_BP_Termite_SoldierAI1");
		
		ABP_Termite_SoldierAI1_C_ExecuteUbergraph_BP_Termite_SoldierAI1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Termite_SoldierAI1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Termite_SoldierAI1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Termite_SoldierAI1.BP_Termite_SoldierAI1_C");
		return ptr;
	}

}


