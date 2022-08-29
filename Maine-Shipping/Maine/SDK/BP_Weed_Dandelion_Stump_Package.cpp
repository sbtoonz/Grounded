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
	 * 		Name   -> Function BP_Weed_Dandelion_Stump.BP_Weed_Dandelion_Stump_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Weed_Dandelion_Stump_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Dandelion_Stump.BP_Weed_Dandelion_Stump_C.ReceiveBeginPlay");
		
		ABP_Weed_Dandelion_Stump_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weed_Dandelion_Stump.BP_Weed_Dandelion_Stump_C.ExecuteUbergraph_BP_Weed_Dandelion_Stump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weed_Dandelion_Stump_C::ExecuteUbergraph_BP_Weed_Dandelion_Stump(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Dandelion_Stump.BP_Weed_Dandelion_Stump_C.ExecuteUbergraph_BP_Weed_Dandelion_Stump");
		
		ABP_Weed_Dandelion_Stump_C_ExecuteUbergraph_BP_Weed_Dandelion_Stump_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weed_Dandelion_Stump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weed_Dandelion_Stump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weed_Dandelion_Stump.BP_Weed_Dandelion_Stump_C");
		return ptr;
	}

}


