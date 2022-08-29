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
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Larva_Burrow_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.CheckLootConditionals");
		
		ABP_Larva_Burrow_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.HandleBurrowAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBurrowState                                       BurrowState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Larva_Burrow_C::HandleBurrowAudio(EBurrowState BurrowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.HandleBurrowAudio");
		
		ABP_Larva_Burrow_C_HandleBurrowAudio_Params params {};
		params.BurrowState = BurrowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Larva_Burrow_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_0__FinishedFunc");
		
		ABP_Larva_Burrow_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Larva_Burrow_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_0__UpdateFunc");
		
		ABP_Larva_Burrow_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Larva_Burrow_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_1__FinishedFunc");
		
		ABP_Larva_Burrow_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Larva_Burrow_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.Timeline_1__UpdateFunc");
		
		ABP_Larva_Burrow_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Larva_Burrow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.ReceiveBeginPlay");
		
		ABP_Larva_Burrow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.BndEvt__BurrowComponent_K2Node_ComponentBoundEvent_2_BurrowStateChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBurrowState                                       BurrowState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Larva_Burrow_C::BndEvt__BurrowComponent_K2Node_ComponentBoundEvent_2_BurrowStateChangedDelegate__DelegateSignature(EBurrowState BurrowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.BndEvt__BurrowComponent_K2Node_ComponentBoundEvent_2_BurrowStateChangedDelegate__DelegateSignature");
		
		ABP_Larva_Burrow_C_BndEvt__BurrowComponent_K2Node_ComponentBoundEvent_2_BurrowStateChangedDelegate__DelegateSignature_Params params {};
		params.BurrowState = BurrowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.On Combat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Larva_Burrow_C::On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.On Combat Change");
		
		ABP_Larva_Burrow_C_On_Combat_Change_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Larva_Burrow_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Larva_Burrow_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Larva_Burrow.BP_Larva_Burrow_C.ExecuteUbergraph_BP_Larva_Burrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Larva_Burrow_C::ExecuteUbergraph_BP_Larva_Burrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Larva_Burrow.BP_Larva_Burrow_C.ExecuteUbergraph_BP_Larva_Burrow");
		
		ABP_Larva_Burrow_C_ExecuteUbergraph_BP_Larva_Burrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Larva_Burrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Larva_Burrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Larva_Burrow.BP_Larva_Burrow_C");
		return ptr;
	}

}


