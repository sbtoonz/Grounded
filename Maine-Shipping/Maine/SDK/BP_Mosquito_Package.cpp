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
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Mosquito_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.CheckLootConditionals");
		
		ABP_Mosquito_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.ToggleWingsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Mosquito_C::ToggleWingsVisibility(bool IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.ToggleWingsVisibility");
		
		ABP_Mosquito_C_ToggleWingsVisibility_Params params {};
		params.IsFlying = IsFlying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.Timeline_wingFlap__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::Timeline_wingFlap__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.Timeline_wingFlap__FinishedFunc");
		
		ABP_Mosquito_C_Timeline_wingFlap__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.Timeline_wingFlap__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::Timeline_wingFlap__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.Timeline_wingFlap__UpdateFunc");
		
		ABP_Mosquito_C_Timeline_wingFlap__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.Timeline_0__FinishedFunc");
		
		ABP_Mosquito_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.Timeline_0__UpdateFunc");
		
		ABP_Mosquito_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.Timeline_1__FinishedFunc");
		
		ABP_Mosquito_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.Timeline_1__UpdateFunc");
		
		ABP_Mosquito_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.BloodFill__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::BloodFill__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.BloodFill__FinishedFunc");
		
		ABP_Mosquito_C_BloodFill__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.BloodFill__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::BloodFill__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.BloodFill__UpdateFunc");
		
		ABP_Mosquito_C_BloodFill__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.WingSFX__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::WingSFX__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.WingSFX__FinishedFunc");
		
		ABP_Mosquito_C_WingSFX__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.WingSFX__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::WingSFX__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.WingSFX__UpdateFunc");
		
		ABP_Mosquito_C_WingSFX__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Mosquito_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.ReceiveBeginPlay");
		
		ABP_Mosquito_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.On Combat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Mosquito_C::On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.On Combat Change");
		
		ABP_Mosquito_C_On_Combat_Change_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosquito_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Mosquito_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.OnAttackHit_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttack*                                     Attack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosquito_C::OnAttackHit_Event(class UAttack* Attack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.OnAttackHit_Event");
		
		ABP_Mosquito_C_OnAttackHit_Event_Params params {};
		params.Attack = Attack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VitalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosquito_C::BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature(float VitalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature");
		
		ABP_Mosquito_C_BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature_Params params {};
		params.VitalValue = VitalValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosquito_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.K2_OnMovementModeChanged");
		
		ABP_Mosquito_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.MulticastHandleMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosquito_C::MulticastHandleMovementMode(EMovementMode MovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.MulticastHandleMovementMode");
		
		ABP_Mosquito_C_MulticastHandleMovementMode_Params params {};
		params.MovementMode = MovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosquito.BP_Mosquito_C.ExecuteUbergraph_BP_Mosquito
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosquito_C::ExecuteUbergraph_BP_Mosquito(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mosquito.BP_Mosquito_C.ExecuteUbergraph_BP_Mosquito");
		
		ABP_Mosquito_C_ExecuteUbergraph_BP_Mosquito_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mosquito_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mosquito_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mosquito.BP_Mosquito_C");
		return ptr;
	}

}


