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
	 * 		Name   -> Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.OnRep_DeathTriggered
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Dead_C::OnRep_DeathTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.OnRep_DeathTriggered");
		
		ABP_BASE_GrassBlade_Dead_C_OnRep_DeathTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.TL_DissolveGrassBlade__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Dead_C::TL_DissolveGrassBlade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.TL_DissolveGrassBlade__FinishedFunc");
		
		ABP_BASE_GrassBlade_Dead_C_TL_DissolveGrassBlade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.TL_DissolveGrassBlade__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Dead_C::TL_DissolveGrassBlade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.TL_DissolveGrassBlade__UpdateFunc");
		
		ABP_BASE_GrassBlade_Dead_C_TL_DissolveGrassBlade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_BASE_GrassBlade_Dead_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.Handle Death");
		
		ABP_BASE_GrassBlade_Dead_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.HandleDeathEffects
	 * 		Flags  -> ()
	 */
	void ABP_BASE_GrassBlade_Dead_C::HandleDeathEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.HandleDeathEffects");
		
		ABP_BASE_GrassBlade_Dead_C_HandleDeathEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.ExecuteUbergraph_BP_BASE_GrassBlade_Dead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BASE_GrassBlade_Dead_C::ExecuteUbergraph_BP_BASE_GrassBlade_Dead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C.ExecuteUbergraph_BP_BASE_GrassBlade_Dead");
		
		ABP_BASE_GrassBlade_Dead_C_ExecuteUbergraph_BP_BASE_GrassBlade_Dead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BASE_GrassBlade_Dead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BASE_GrassBlade_Dead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C");
		return ptr;
	}

}


