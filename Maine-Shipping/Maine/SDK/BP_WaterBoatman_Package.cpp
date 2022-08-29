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
	 * 		Name   -> Function BP_WaterBoatman.BP_WaterBoatman_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_WaterBoatman_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterBoatman.BP_WaterBoatman_C.CheckLootConditionals");
		
		ABP_WaterBoatman_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WaterBoatman.BP_WaterBoatman_C.Update Air Bubble Scale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WaterBoatman_C::Update_Air_Bubble_Scale(float NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterBoatman.BP_WaterBoatman_C.Update Air Bubble Scale");
		
		ABP_WaterBoatman_C_Update_Air_Bubble_Scale_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WaterBoatman.BP_WaterBoatman_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseLODActor*                               DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsKillingBlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WaterBoatman_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterBoatman.BP_WaterBoatman_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature");
		
		ABP_WaterBoatman_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_WaterBoatman.BP_WaterBoatman_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WaterBoatman_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterBoatman.BP_WaterBoatman_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_WaterBoatman_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WaterBoatman.BP_WaterBoatman_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_3_VitalChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VitalValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WaterBoatman_C::BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_3_VitalChangedDelegate__DelegateSignature(float VitalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterBoatman.BP_WaterBoatman_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_3_VitalChangedDelegate__DelegateSignature");
		
		ABP_WaterBoatman_C_BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_3_VitalChangedDelegate__DelegateSignature_Params params {};
		params.VitalValue = VitalValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WaterBoatman.BP_WaterBoatman_C.ExecuteUbergraph_BP_WaterBoatman
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WaterBoatman_C::ExecuteUbergraph_BP_WaterBoatman(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterBoatman.BP_WaterBoatman_C.ExecuteUbergraph_BP_WaterBoatman");
		
		ABP_WaterBoatman_C_ExecuteUbergraph_BP_WaterBoatman_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WaterBoatman_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WaterBoatman_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterBoatman.BP_WaterBoatman_C");
		return ptr;
	}

}


