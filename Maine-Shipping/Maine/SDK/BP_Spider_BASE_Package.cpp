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
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.CreateEyeDMI
	 * 		Flags  -> ()
	 */
	void ABP_Spider_BASE_C::CreateEyeDMI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.CreateEyeDMI");
		
		ABP_Spider_BASE_C_CreateEyeDMI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Spider_BASE_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_0__FinishedFunc");
		
		ABP_Spider_BASE_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Spider_BASE_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_0__UpdateFunc");
		
		ABP_Spider_BASE_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Spider_BASE_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_1__FinishedFunc");
		
		ABP_Spider_BASE_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Spider_BASE_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_1__UpdateFunc");
		
		ABP_Spider_BASE_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.On Combat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Spider_BASE_C::On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.On Combat Change");
		
		ABP_Spider_BASE_C_On_Combat_Change_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spider_BASE_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Spider_BASE_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Spider_BASE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.ReceiveBeginPlay");
		
		ABP_Spider_BASE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.ArachnophobiaSafeModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spider_BASE_C::ArachnophobiaSafeModeChanged(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.ArachnophobiaSafeModeChanged");
		
		ABP_Spider_BASE_C_ArachnophobiaSafeModeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spider_BASE_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.ReceiveEndPlay");
		
		ABP_Spider_BASE_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spider_BASE.BP_Spider_BASE_C.ExecuteUbergraph_BP_Spider_BASE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spider_BASE_C::ExecuteUbergraph_BP_Spider_BASE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spider_BASE.BP_Spider_BASE_C.ExecuteUbergraph_BP_Spider_BASE");
		
		ABP_Spider_BASE_C_ExecuteUbergraph_BP_Spider_BASE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Spider_BASE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Spider_BASE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spider_BASE.BP_Spider_BASE_C");
		return ptr;
	}

}


