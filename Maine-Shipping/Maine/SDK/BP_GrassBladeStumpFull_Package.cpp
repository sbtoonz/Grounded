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
	 * 		Name   -> Function BP_GrassBladeStumpFull.BP_GrassBladeStumpFull_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GrassBladeStumpFull_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBladeStumpFull.BP_GrassBladeStumpFull_C.ReceiveBeginPlay");
		
		ABP_GrassBladeStumpFull_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrassBladeStumpFull.BP_GrassBladeStumpFull_C.ExecuteUbergraph_BP_GrassBladeStumpFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrassBladeStumpFull_C::ExecuteUbergraph_BP_GrassBladeStumpFull(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBladeStumpFull.BP_GrassBladeStumpFull_C.ExecuteUbergraph_BP_GrassBladeStumpFull");
		
		ABP_GrassBladeStumpFull_C_ExecuteUbergraph_BP_GrassBladeStumpFull_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GrassBladeStumpFull_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrassBladeStumpFull_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrassBladeStumpFull.BP_GrassBladeStumpFull_C");
		return ptr;
	}

}


