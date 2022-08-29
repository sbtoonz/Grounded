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
	 * 		Name   -> Function BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C.NotifySpawned
	 * 		Flags  -> ()
	 */
	void ABP_World_Mushroom_Grown_C::NotifySpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C.NotifySpawned");
		
		ABP_World_Mushroom_Grown_C_NotifySpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C.Multicast Notify Spawned
	 * 		Flags  -> ()
	 */
	void ABP_World_Mushroom_Grown_C::Multicast_Notify_Spawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C.Multicast Notify Spawned");
		
		ABP_World_Mushroom_Grown_C_Multicast_Notify_Spawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C.ExecuteUbergraph_BP_World_Mushroom_Grown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Mushroom_Grown_C::ExecuteUbergraph_BP_World_Mushroom_Grown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C.ExecuteUbergraph_BP_World_Mushroom_Grown");
		
		ABP_World_Mushroom_Grown_C_ExecuteUbergraph_BP_World_Mushroom_Grown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_World_Mushroom_Grown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Mushroom_Grown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Mushroom_Grown.BP_World_Mushroom_Grown_C");
		return ptr;
	}

}


