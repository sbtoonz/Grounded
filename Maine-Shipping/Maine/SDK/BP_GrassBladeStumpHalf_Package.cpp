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
	 * 		Name   -> Function BP_GrassBladeStumpHalf.BP_GrassBladeStumpHalf_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GrassBladeStumpHalf_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBladeStumpHalf.BP_GrassBladeStumpHalf_C.ReceiveBeginPlay");
		
		ABP_GrassBladeStumpHalf_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrassBladeStumpHalf.BP_GrassBladeStumpHalf_C.ExecuteUbergraph_BP_GrassBladeStumpHalf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrassBladeStumpHalf_C::ExecuteUbergraph_BP_GrassBladeStumpHalf(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrassBladeStumpHalf.BP_GrassBladeStumpHalf_C.ExecuteUbergraph_BP_GrassBladeStumpHalf");
		
		ABP_GrassBladeStumpHalf_C_ExecuteUbergraph_BP_GrassBladeStumpHalf_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GrassBladeStumpHalf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrassBladeStumpHalf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrassBladeStumpHalf.BP_GrassBladeStumpHalf_C");
		return ptr;
	}

}


