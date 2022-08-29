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
	 * 		Name   -> Function BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Weed_Dandelion_C_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C.ReceiveBeginPlay");
		
		ABP_Weed_Dandelion_C_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_Weed_Dandelion_C_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C.Handle Death");
		
		ABP_Weed_Dandelion_C_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C.ExecuteUbergraph_BP_Weed_Dandelion_C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weed_Dandelion_C_C::ExecuteUbergraph_BP_Weed_Dandelion_C(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C.ExecuteUbergraph_BP_Weed_Dandelion_C");
		
		ABP_Weed_Dandelion_C_C_ExecuteUbergraph_BP_Weed_Dandelion_C_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weed_Dandelion_C_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weed_Dandelion_C_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weed_Dandelion_C.BP_Weed_Dandelion_C_C");
		return ptr;
	}

}


