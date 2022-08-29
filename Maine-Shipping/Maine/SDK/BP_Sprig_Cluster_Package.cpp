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
	 * 		Name   -> Function BP_Sprig_Cluster.BP_Sprig_Cluster_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Sprig_Cluster_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sprig_Cluster.BP_Sprig_Cluster_C.ReceiveBeginPlay");
		
		ABP_Sprig_Cluster_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sprig_Cluster.BP_Sprig_Cluster_C.ExecuteUbergraph_BP_Sprig_Cluster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sprig_Cluster_C::ExecuteUbergraph_BP_Sprig_Cluster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sprig_Cluster.BP_Sprig_Cluster_C.ExecuteUbergraph_BP_Sprig_Cluster");
		
		ABP_Sprig_Cluster_C_ExecuteUbergraph_BP_Sprig_Cluster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sprig_Cluster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sprig_Cluster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sprig_Cluster.BP_Sprig_Cluster_C");
		return ptr;
	}

}


