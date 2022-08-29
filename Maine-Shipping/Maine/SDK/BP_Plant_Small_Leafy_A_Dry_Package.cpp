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
	 * 		Name   -> Function BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Plant_Small_Leafy_A_Dry_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C.ReceiveBeginPlay");
		
		ABP_Plant_Small_Leafy_A_Dry_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C.SpawnParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Plant_Small_Leafy_A_Dry_C::SpawnParticles(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C.SpawnParticles");
		
		ABP_Plant_Small_Leafy_A_Dry_C_SpawnParticles_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C.ExecuteUbergraph_BP_Plant_Small_Leafy_A_Dry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Plant_Small_Leafy_A_Dry_C::ExecuteUbergraph_BP_Plant_Small_Leafy_A_Dry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C.ExecuteUbergraph_BP_Plant_Small_Leafy_A_Dry");
		
		ABP_Plant_Small_Leafy_A_Dry_C_ExecuteUbergraph_BP_Plant_Small_Leafy_A_Dry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Plant_Small_Leafy_A_Dry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Plant_Small_Leafy_A_Dry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Plant_Small_Leafy_A_Dry.BP_Plant_Small_Leafy_A_Dry_C");
		return ptr;
	}

}


