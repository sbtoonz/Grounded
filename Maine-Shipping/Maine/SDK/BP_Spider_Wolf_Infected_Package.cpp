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
	 * 		Name   -> Function BP_Spider_Wolf_Infected.BP_Spider_Wolf_Infected_C.BndEvt__BP_Spider_Wolf_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spider_Wolf_Infected_C::BndEvt__BP_Spider_Wolf_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_Wolf_Infected.BP_Spider_Wolf_Infected_C.BndEvt__BP_Spider_Wolf_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Spider_Wolf_Infected_C_BndEvt__BP_Spider_Wolf_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_Wolf_Infected.BP_Spider_Wolf_Infected_C.ExecuteUbergraph_BP_Spider_Wolf_Infected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spider_Wolf_Infected_C::ExecuteUbergraph_BP_Spider_Wolf_Infected(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_Wolf_Infected.BP_Spider_Wolf_Infected_C.ExecuteUbergraph_BP_Spider_Wolf_Infected");
		
		ABP_Spider_Wolf_Infected_C_ExecuteUbergraph_BP_Spider_Wolf_Infected_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Spider_Wolf_Infected_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Spider_Wolf_Infected_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spider_Wolf_Infected.BP_Spider_Wolf_Infected_C");
		return ptr;
	}

}


