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
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_StatusInterface_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.HandleKeyEventChord");
		
		UUI_StatusInterface_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.GetDuplicateEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStatusEffectType                                  StatusEffectType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_EffectListItem_C*                        UI_Status_Effect_Widget                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::GetDuplicateEffect(EStatusEffectType StatusEffectType, class UUI_EffectListItem_C** UI_Status_Effect_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.GetDuplicateEffect");
		
		UUI_StatusInterface_C_GetDuplicateEffect_Params params {};
		params.StatusEffectType = StatusEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UI_Status_Effect_Widget != nullptr)
			*UI_Status_Effect_Widget = params.UI_Status_Effect_Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.RefreshStatusEffects
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::RefreshStatusEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.RefreshStatusEffects");
		
		UUI_StatusInterface_C_RefreshStatusEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.RefreshEquippedPerks
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::RefreshEquippedPerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.RefreshEquippedPerks");
		
		UUI_StatusInterface_C_RefreshEquippedPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.UnequipPerkSlot
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::UnequipPerkSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.UnequipPerkSlot");
		
		UUI_StatusInterface_C_UnequipPerkSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.EquipPerkSlot
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::EquipPerkSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.EquipPerkSlot");
		
		UUI_StatusInterface_C_EquipPerkSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.CanUnequipPerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanEquip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusInterface_C::CanUnequipPerkSlot(bool* CanEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.CanUnequipPerkSlot");
		
		UUI_StatusInterface_C_CanUnequipPerkSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanEquip != nullptr)
			*CanEquip = params.CanEquip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.CanEquipPerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanEquip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusInterface_C::CanEquipPerkSlot(bool* CanEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.CanEquipPerkSlot");
		
		UUI_StatusInterface_C_CanEquipPerkSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanEquip != nullptr)
			*CanEquip = params.CanEquip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.RefreshDescription
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::RefreshDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.RefreshDescription");
		
		UUI_StatusInterface_C_RefreshDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.PopulatePerks
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::PopulatePerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.PopulatePerks");
		
		UUI_StatusInterface_C_PopulatePerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.RefreshPerks
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::RefreshPerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.RefreshPerks");
		
		UUI_StatusInterface_C_RefreshPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.RefreshBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::RefreshBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.RefreshBottomButtons");
		
		UUI_StatusInterface_C_RefreshBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.RefreshUI");
		
		UUI_StatusInterface_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.Construct");
		
		UUI_StatusInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_StatusInterface_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UnequipButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::BndEvt__UnequipButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UnequipButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_StatusInterface_C_BndEvt__UnequipButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_StatusInterface_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.OnSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PerkSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::OnSelectionChanged(class UUI_PerkSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.OnSelectionChanged");
		
		UUI_StatusInterface_C_OnSelectionChanged_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.OnGlobalColorChange");
		
		UUI_StatusInterface_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.Destruct");
		
		UUI_StatusInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.OnPerksChanged
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::OnPerksChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.OnPerksChanged");
		
		UUI_StatusInterface_C_OnPerksChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.OnPerkDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PerkSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::OnPerkDoubleClick(class UUI_PerkSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.OnPerkDoubleClick");
		
		UUI_StatusInterface_C_OnPerkDoubleClick_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.OnStatusEffectsChanged
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::OnStatusEffectsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.OnStatusEffectsChanged");
		
		UUI_StatusInterface_C_OnStatusEffectsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_3_OnEffectHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_3_OnEffectHovered__DelegateSignature(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_3_OnEffectHovered__DelegateSignature");
		
		UUI_StatusInterface_C_BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_3_OnEffectHovered__DelegateSignature_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_4_OnEffectFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatuEffect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_4_OnEffectFocused__DelegateSignature(class UStatusEffect* StatuEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_4_OnEffectFocused__DelegateSignature");
		
		UUI_StatusInterface_C_BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_4_OnEffectFocused__DelegateSignature_Params params {};
		params.StatuEffect = StatuEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.SetStatusEffectToView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::SetStatusEffectToView(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.SetStatusEffectToView");
		
		UUI_StatusInterface_C_SetStatusEffectToView_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_5_OnFocusedEffectLost__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_5_OnFocusedEffectLost__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_5_OnFocusedEffectLost__DelegateSignature");
		
		UUI_StatusInterface_C_BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_5_OnFocusedEffectLost__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.OnStatusEffectFocusLost
	 * 		Flags  -> ()
	 */
	void UUI_StatusInterface_C::OnStatusEffectFocusLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.OnStatusEffectFocusLost");
		
		UUI_StatusInterface_C_OnStatusEffectFocusLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusInterface.UI_StatusInterface_C.ExecuteUbergraph_UI_StatusInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusInterface_C::ExecuteUbergraph_UI_StatusInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusInterface.UI_StatusInterface_C.ExecuteUbergraph_UI_StatusInterface");
		
		UUI_StatusInterface_C_ExecuteUbergraph_UI_StatusInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusInterface.UI_StatusInterface_C");
		return ptr;
	}

}


