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
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Antlion_Pit_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.CheckLootConditionals");
		
		ABP_Antlion_Pit_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Antlion_Pit_C::Timeline_EyeColor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor__FinishedFunc");
		
		ABP_Antlion_Pit_C_Timeline_EyeColor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Antlion_Pit_C::Timeline_EyeColor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor__UpdateFunc");
		
		ABP_Antlion_Pit_C_Timeline_EyeColor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor02__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Antlion_Pit_C::Timeline_EyeColor02__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor02__FinishedFunc");
		
		ABP_Antlion_Pit_C_Timeline_EyeColor02__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor02__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Antlion_Pit_C::Timeline_EyeColor02__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.Timeline_EyeColor02__UpdateFunc");
		
		ABP_Antlion_Pit_C_Timeline_EyeColor02__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.On Combat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Antlion_Pit_C::On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.On Combat Change");
		
		ABP_Antlion_Pit_C_On_Combat_Change_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Antlion_Pit_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Antlion_Pit_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Antlion_Pit_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.ReceiveBeginPlay");
		
		ABP_Antlion_Pit_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Antlion_Pit.BP_Antlion_Pit_C.ExecuteUbergraph_BP_Antlion_Pit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Antlion_Pit_C::ExecuteUbergraph_BP_Antlion_Pit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Antlion_Pit.BP_Antlion_Pit_C.ExecuteUbergraph_BP_Antlion_Pit");
		
		ABP_Antlion_Pit_C_ExecuteUbergraph_BP_Antlion_Pit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Antlion_Pit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Antlion_Pit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Antlion_Pit.BP_Antlion_Pit_C");
		return ptr;
	}

}


