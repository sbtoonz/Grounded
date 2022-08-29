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
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.FocusOnChildTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FocusAdded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTimerRow_C::FocusOnChildTimer(bool* FocusAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.FocusOnChildTimer");
		
		UUI_StatusEffectTimerRow_C_FocusOnChildTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusAdded != nullptr)
			*FocusAdded = params.FocusAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.DetermineEffectsToDisplay
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimerRow_C::DetermineEffectsToDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.DetermineEffectsToDisplay");
		
		UUI_StatusEffectTimerRow_C_DetermineEffectsToDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnPossessedPlayerChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnPossessedPlayerChange");
		
		UUI_StatusEffectTimerRow_C_OnPossessedPlayerChange_Params params {};
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnStatusEffectAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnStatusEffectAdded(class AActor* Owner, class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnStatusEffectAdded");
		
		UUI_StatusEffectTimerRow_C_OnStatusEffectAdded_Params params {};
		params.Owner = Owner;
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnEffectRemoved(class AActor* Owner, class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectRemoved");
		
		UUI_StatusEffectTimerRow_C_OnEffectRemoved_Params params {};
		params.Owner = Owner;
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectAddedOrRemoved
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimerRow_C::OnEffectAddedOrRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectAddedOrRemoved");
		
		UUI_StatusEffectTimerRow_C_OnEffectAddedOrRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnSubEffectHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnSubEffectHovered(class UStatusEffect* Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnSubEffectHovered");
		
		UUI_StatusEffectTimerRow_C_OnSubEffectHovered_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.HandleAddStatusEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AddedThisFrame                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTimerRow_C::HandleAddStatusEffect(class UStatusEffect* StatusEffect, bool AddedThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.HandleAddStatusEffect");
		
		UUI_StatusEffectTimerRow_C_HandleAddStatusEffect_Params params {};
		params.StatusEffect = StatusEffect;
		params.AddedThisFrame = AddedThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnSubEffectFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnSubEffectFocused(class UStatusEffect* Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnSubEffectFocused");
		
		UUI_StatusEffectTimerRow_C_OnSubEffectFocused_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimerRow_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnGlobalColorChange");
		
		UUI_StatusEffectTimerRow_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimerRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.Construct");
		
		UUI_StatusEffectTimerRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnStatusEffectRemovalComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_StatusEffectTimer_C*                     UI_StatusEffectPip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnStatusEffectRemovalComplete(class UUI_StatusEffectTimer_C* UI_StatusEffectPip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnStatusEffectRemovalComplete");
		
		UUI_StatusEffectTimerRow_C_OnStatusEffectRemovalComplete_Params params {};
		params.UI_StatusEffectPip = UI_StatusEffectPip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.ExecuteUbergraph_UI_StatusEffectTimerRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::ExecuteUbergraph_UI_StatusEffectTimerRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.ExecuteUbergraph_UI_StatusEffectTimerRow");
		
		UUI_StatusEffectTimerRow_C_ExecuteUbergraph_UI_StatusEffectTimerRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnEffectFocused__DelegateSignature(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectFocused__DelegateSignature");
		
		UUI_StatusEffectTimerRow_C_OnEffectFocused__DelegateSignature_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnFocusedEffectLost__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimerRow_C::OnFocusedEffectLost__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnFocusedEffectLost__DelegateSignature");
		
		UUI_StatusEffectTimerRow_C_OnFocusedEffectLost__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimerRow_C::OnEffectHovered__DelegateSignature(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectHovered__DelegateSignature");
		
		UUI_StatusEffectTimerRow_C_OnEffectHovered__DelegateSignature_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusEffectTimerRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusEffectTimerRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C");
		return ptr;
	}

}


