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
	 * 		Name   -> Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.OnRep_DeathTriggered
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Burned_C::OnRep_DeathTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.OnRep_DeathTriggered");
		
		ABP_BASE_GrassBlade_Burned_C_OnRep_DeathTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Burned_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.Timeline_0__FinishedFunc");
		
		ABP_BASE_GrassBlade_Burned_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Burned_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.Timeline_0__UpdateFunc");
		
		ABP_BASE_GrassBlade_Burned_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.HandleDeathEffects
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Burned_C::HandleDeathEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.HandleDeathEffects");
		
		ABP_BASE_GrassBlade_Burned_C_HandleDeathEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_BASE_GrassBlade_Burned_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.Handle Death");
		
		ABP_BASE_GrassBlade_Burned_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.ExecuteUbergraph_BP_BASE_GrassBlade_Burned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BASE_GrassBlade_Burned_C::ExecuteUbergraph_BP_BASE_GrassBlade_Burned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C.ExecuteUbergraph_BP_BASE_GrassBlade_Burned");
		
		ABP_BASE_GrassBlade_Burned_C_ExecuteUbergraph_BP_BASE_GrassBlade_Burned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BASE_GrassBlade_Burned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BASE_GrassBlade_Burned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C");
		return ptr;
	}

}


