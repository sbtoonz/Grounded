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
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.LocalPlayerWieldingBomb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RockInteract_C::LocalPlayerWieldingBomb(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.LocalPlayerWieldingBomb");
		
		UUI_RockInteract_C_LocalPlayerWieldingBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.UpdateActionVerb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DamageFlags                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RockInteract_C::UpdateActionVerb(int32_t DamageFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.UpdateActionVerb");
		
		UUI_RockInteract_C_UpdateActionVerb_Params params {};
		params.DamageFlags = DamageFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.UpdateTierNugget
	 * 		Flags  -> ()
	 */
	void UUI_RockInteract_C::UpdateTierNugget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.UpdateTierNugget");
		
		UUI_RockInteract_C_UpdateTierNugget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.ShowWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        WarningText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_RockInteract_C::ShowWarning(const class FText& WarningText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.ShowWarning");
		
		UUI_RockInteract_C_ShowWarning_Params params {};
		params.WarningText = WarningText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_RockInteract_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.GetWarningColor");
		
		UUI_RockInteract_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_RockInteract_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.GetHeaderColor");
		
		UUI_RockInteract_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    SurvivalPlayerCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RockInteract_C::BindPlayerEvents(class ASurvivalPlayerCharacter* SurvivalPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.BindPlayerEvents");
		
		UUI_RockInteract_C_BindPlayerEvents_Params params {};
		params.SurvivalPlayerCharacter = SurvivalPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RockInteract_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.PreConstruct");
		
		UUI_RockInteract_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.OnIneffectiveAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECannotDamageReason                                CannotDamageReason                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FailedDamageTypeFlags                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RockInteract_C::OnIneffectiveAttack(ECannotDamageReason CannotDamageReason, int32_t FailedDamageTypeFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.OnIneffectiveAttack");
		
		UUI_RockInteract_C_OnIneffectiveAttack_Params params {};
		params.CannotDamageReason = CannotDamageReason;
		params.FailedDamageTypeFlags = FailedDamageTypeFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RockInteract_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.OnGlobalColorChange");
		
		UUI_RockInteract_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.OnInteractWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        WarningText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_RockInteract_C::OnInteractWarning(class UObject* Interactable, const class FText& WarningText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.OnInteractWarning");
		
		UUI_RockInteract_C_OnInteractWarning_Params params {};
		params.Interactable = Interactable;
		params.WarningText = WarningText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.UpdateAttackResolutionChanged
	 * 		Flags  -> ()
	 */
	void UUI_RockInteract_C::UpdateAttackResolutionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.UpdateAttackResolutionChanged");
		
		UUI_RockInteract_C_UpdateAttackResolutionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.UpdateInteractionTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RockInteract_C::UpdateInteractionTargetChanged(class UObject* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.UpdateInteractionTargetChanged");
		
		UUI_RockInteract_C_UpdateInteractionTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RockInteract.UI_RockInteract_C.ExecuteUbergraph_UI_RockInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RockInteract_C::ExecuteUbergraph_UI_RockInteract(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RockInteract.UI_RockInteract_C.ExecuteUbergraph_UI_RockInteract");
		
		UUI_RockInteract_C_ExecuteUbergraph_UI_RockInteract_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RockInteract_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RockInteract_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RockInteract.UI_RockInteract_C");
		return ptr;
	}

}


