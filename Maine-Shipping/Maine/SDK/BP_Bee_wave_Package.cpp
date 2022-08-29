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
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Bee_wave_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.CheckLootConditionals");
		
		ABP_Bee_wave_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.ToggleWingsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Bee_wave_C::ToggleWingsVisibility(bool IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.ToggleWingsVisibility");
		
		ABP_Bee_wave_C_ToggleWingsVisibility_Params params {};
		params.IsFlying = IsFlying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_0__FinishedFunc");
		
		ABP_Bee_wave_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_0__UpdateFunc");
		
		ABP_Bee_wave_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_1__FinishedFunc");
		
		ABP_Bee_wave_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_1__UpdateFunc");
		
		ABP_Bee_wave_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_2__FinishedFunc");
		
		ABP_Bee_wave_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_2__UpdateFunc");
		
		ABP_Bee_wave_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_3__FinishedFunc");
		
		ABP_Bee_wave_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_3__UpdateFunc");
		
		ABP_Bee_wave_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_4__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_4__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_4__FinishedFunc");
		
		ABP_Bee_wave_C_Timeline_4__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.Timeline_4__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::Timeline_4__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.Timeline_4__UpdateFunc");
		
		ABP_Bee_wave_C_Timeline_4__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Bee_wave_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.ReceiveBeginPlay");
		
		ABP_Bee_wave_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.On Combat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Bee_wave_C::On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.On Combat Change");
		
		ABP_Bee_wave_C_On_Combat_Change_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bee_wave_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.K2_OnMovementModeChanged");
		
		ABP_Bee_wave_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VitalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bee_wave_C::BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature(float VitalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature");
		
		ABP_Bee_wave_C_BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature_Params params {};
		params.VitalValue = VitalValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseLODActor*                               DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsKillingBlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Bee_wave_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature");
		
		ABP_Bee_wave_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature_Params params {};
		params.Damage = Damage;
		params.DamageInfo = DamageInfo;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.IsKillingBlow = IsKillingBlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.HandleLootEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bee_wave_C::HandleLootEffects(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.HandleLootEffects");
		
		ABP_Bee_wave_C_HandleLootEffects_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bee_wave_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Bee_wave_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.MulticastHandleWingVIsuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bee_wave_C::MulticastHandleWingVIsuals(EMovementMode MovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.MulticastHandleWingVIsuals");
		
		ABP_Bee_wave_C_MulticastHandleWingVIsuals_Params params {};
		params.MovementMode = MovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bee_wave.BP_Bee_wave_C.ExecuteUbergraph_BP_Bee_wave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bee_wave_C::ExecuteUbergraph_BP_Bee_wave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bee_wave.BP_Bee_wave_C.ExecuteUbergraph_BP_Bee_wave");
		
		ABP_Bee_wave_C_ExecuteUbergraph_BP_Bee_wave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Bee_wave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Bee_wave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bee_wave.BP_Bee_wave_C");
		return ptr;
	}

}


