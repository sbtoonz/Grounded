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
	 * 		Name   -> Function BP_BerryDestroy_Particle.BP_BerryDestroy_Particle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BerryDestroy_Particle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BerryDestroy_Particle.BP_BerryDestroy_Particle_C.ReceiveBeginPlay");
		
		ABP_BerryDestroy_Particle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BerryDestroy_Particle.BP_BerryDestroy_Particle_C.ExecuteUbergraph_BP_BerryDestroy_Particle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BerryDestroy_Particle_C::ExecuteUbergraph_BP_BerryDestroy_Particle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BerryDestroy_Particle.BP_BerryDestroy_Particle_C.ExecuteUbergraph_BP_BerryDestroy_Particle");
		
		ABP_BerryDestroy_Particle_C_ExecuteUbergraph_BP_BerryDestroy_Particle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BerryDestroy_Particle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BerryDestroy_Particle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BerryDestroy_Particle.BP_BerryDestroy_Particle_C");
		return ptr;
	}

}


