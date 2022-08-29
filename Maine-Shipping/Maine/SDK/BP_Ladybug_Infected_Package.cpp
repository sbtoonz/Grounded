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
	 * 		Name   -> Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Ladybug_Infected_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.CheckLootConditionals");
		
		ABP_Ladybug_Infected_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Ladybug_Infected_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.ReceiveBeginPlay");
		
		ABP_Ladybug_Infected_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.HandleLootEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ladybug_Infected_C::HandleLootEffects(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.HandleLootEffects");
		
		ABP_Ladybug_Infected_C_HandleLootEffects_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.On Combat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Ladybug_Infected_C::On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.On Combat Change");
		
		ABP_Ladybug_Infected_C_On_Combat_Change_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ladybug_Infected_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_Ladybug_Infected_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.ExecuteUbergraph_BP_Ladybug_Infected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ladybug_Infected_C::ExecuteUbergraph_BP_Ladybug_Infected(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ladybug_Infected.BP_Ladybug_Infected_C.ExecuteUbergraph_BP_Ladybug_Infected");
		
		ABP_Ladybug_Infected_C_ExecuteUbergraph_BP_Ladybug_Infected_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ladybug_Infected_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ladybug_Infected_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ladybug_Infected.BP_Ladybug_Infected_C");
		return ptr;
	}

}


