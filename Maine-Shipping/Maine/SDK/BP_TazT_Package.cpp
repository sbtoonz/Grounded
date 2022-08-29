﻿/**
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
	 * 		Name   -> Function BP_TazT.BP_TazT_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_TazT_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.CheckLootConditionals");
		
		ABP_TazT_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.TL_SirenFade__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TazT_C::TL_SirenFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.TL_SirenFade__FinishedFunc");
		
		ABP_TazT_C_TL_SirenFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.TL_SirenFade__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TazT_C::TL_SirenFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.TL_SirenFade__UpdateFunc");
		
		ABP_TazT_C_TL_SirenFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.SirenToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TazT_C::SirenToggle(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.SirenToggle");
		
		ABP_TazT_C_SirenToggle_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHealthStateChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealthState                                       NewHealthState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TazT_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHealthStateChangedDelegate__DelegateSignature(EHealthState NewHealthState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHealthStateChangedDelegate__DelegateSignature");
		
		ABP_TazT_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHealthStateChangedDelegate__DelegateSignature_Params params {};
		params.NewHealthState = NewHealthState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TazT_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_TazT_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.HandleLootEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TazT_C::HandleLootEffects(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.HandleLootEffects");
		
		ABP_TazT_C_HandleLootEffects_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TazT_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.ReceiveBeginPlay");
		
		ABP_TazT_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TazT.BP_TazT_C.ExecuteUbergraph_BP_TazT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TazT_C::ExecuteUbergraph_BP_TazT(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TazT.BP_TazT_C.ExecuteUbergraph_BP_TazT");
		
		ABP_TazT_C_ExecuteUbergraph_BP_TazT_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TazT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TazT_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TazT.BP_TazT_C");
		return ptr;
	}

}


