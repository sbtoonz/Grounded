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
	 * 		Name   -> Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_VFX_MultiSystemAttack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.ReceiveBeginPlay");
		
		ABP_VFX_MultiSystemAttack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.KillParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VFX_MultiSystemAttack_C::KillParent(class UParticleSystemComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.KillParent");
		
		ABP_VFX_MultiSystemAttack_C_KillParent_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.ExecuteUbergraph_BP_VFX_MultiSystemAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VFX_MultiSystemAttack_C::ExecuteUbergraph_BP_VFX_MultiSystemAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.ExecuteUbergraph_BP_VFX_MultiSystemAttack");
		
		ABP_VFX_MultiSystemAttack_C_ExecuteUbergraph_BP_VFX_MultiSystemAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VFX_MultiSystemAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VFX_MultiSystemAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C");
		return ptr;
	}

}


