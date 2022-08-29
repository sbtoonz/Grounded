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
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Weevil_Evil_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.CheckLootConditionals");
		
		ABP_Weevil_Evil_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.ShowHuskMesh
	 * 		Flags  -> ()
	 */
	void ABP_Weevil_Evil_C::ShowHuskMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.ShowHuskMesh");
		
		ABP_Weevil_Evil_C_ShowHuskMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Weevil_Evil_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.UserConstructionScript");
		
		ABP_Weevil_Evil_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.BndEvt__AttackHandlerComponent_K2Node_ComponentBoundEvent_0_HandleAttackEffectsDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         AttackDataRowHandle                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_Weevil_Evil_C::BndEvt__AttackHandlerComponent_K2Node_ComponentBoundEvent_0_HandleAttackEffectsDelegate__DelegateSignature(const struct FDataTableRowHandle& AttackDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.BndEvt__AttackHandlerComponent_K2Node_ComponentBoundEvent_0_HandleAttackEffectsDelegate__DelegateSignature");
		
		ABP_Weevil_Evil_C_BndEvt__AttackHandlerComponent_K2Node_ComponentBoundEvent_0_HandleAttackEffectsDelegate__DelegateSignature_Params params {};
		params.AttackDataRowHandle = AttackDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Weevil_Evil_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.ReceiveBeginPlay");
		
		ABP_Weevil_Evil_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.StartChargeUp
	 * 		Flags  -> ()
	 */
	void ABP_Weevil_Evil_C::StartChargeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.StartChargeUp");
		
		ABP_Weevil_Evil_C_StartChargeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weevil_Evil_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Weevil_Evil_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weevil_Evil.BP_Weevil_Evil_C.ExecuteUbergraph_BP_Weevil_Evil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weevil_Evil_C::ExecuteUbergraph_BP_Weevil_Evil(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weevil_Evil.BP_Weevil_Evil_C.ExecuteUbergraph_BP_Weevil_Evil");
		
		ABP_Weevil_Evil_C_ExecuteUbergraph_BP_Weevil_Evil_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weevil_Evil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weevil_Evil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weevil_Evil.BP_Weevil_Evil_C");
		return ptr;
	}

}


