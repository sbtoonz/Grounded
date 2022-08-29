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
	 * 		Name   -> Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_Rain_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.ReceiveBeginPlay");
		
		ABP_World_Droplet_Water_Rain_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_Rain_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.ReceiveTick");
		
		ABP_World_Droplet_Water_Rain_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.Dry Up
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_Rain_C::Dry_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.Dry Up");
		
		ABP_World_Droplet_Water_Rain_C_Dry_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.ExecuteUbergraph_BP_World_Droplet_Water_Rain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_Rain_C::ExecuteUbergraph_BP_World_Droplet_Water_Rain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C.ExecuteUbergraph_BP_World_Droplet_Water_Rain");
		
		ABP_World_Droplet_Water_Rain_C_ExecuteUbergraph_BP_World_Droplet_Water_Rain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_World_Droplet_Water_Rain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Droplet_Water_Rain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Droplet_Water_Rain.BP_World_Droplet_Water_Rain_C");
		return ptr;
	}

}


