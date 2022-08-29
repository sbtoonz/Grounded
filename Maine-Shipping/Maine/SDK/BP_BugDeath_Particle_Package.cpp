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
	 * 		Name   -> Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.FadeOutDecal
	 * 		Flags  -> ()
	 */
	void ABP_BugDeath_Particle_C::FadeOutDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.FadeOutDecal");
		
		ABP_BugDeath_Particle_C_FadeOutDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.FadeDecalParentCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BugDeath_Particle_C::FadeDecalParentCall(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.FadeDecalParentCall");
		
		ABP_BugDeath_Particle_C_FadeDecalParentCall_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BugDeath_Particle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.ReceiveBeginPlay");
		
		ABP_BugDeath_Particle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.ExecuteUbergraph_BP_BugDeath_Particle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BugDeath_Particle_C::ExecuteUbergraph_BP_BugDeath_Particle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.ExecuteUbergraph_BP_BugDeath_Particle");
		
		ABP_BugDeath_Particle_C_ExecuteUbergraph_BP_BugDeath_Particle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BugDeath_Particle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BugDeath_Particle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BugDeath_Particle.BP_BugDeath_Particle_C");
		return ptr;
	}

}


