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
	 * 		Name   -> Function BP_SmallPlantA.BP_SmallPlantA_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SmallPlantA_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SmallPlantA.BP_SmallPlantA_C.ReceiveBeginPlay");
		
		ABP_SmallPlantA_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SmallPlantA.BP_SmallPlantA_C.ExecuteUbergraph_BP_SmallPlantA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SmallPlantA_C::ExecuteUbergraph_BP_SmallPlantA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SmallPlantA.BP_SmallPlantA_C.ExecuteUbergraph_BP_SmallPlantA");
		
		ABP_SmallPlantA_C_ExecuteUbergraph_BP_SmallPlantA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SmallPlantA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SmallPlantA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallPlantA.BP_SmallPlantA_C");
		return ptr;
	}

}


