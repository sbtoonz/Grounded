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
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.GetEffectWithLongestTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::GetEffectWithLongestTimer(class UStatusEffect** StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.GetEffectWithLongestTimer");
		
		UUI_StatusEffectTimer_C_GetEffectWithLongestTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusEffect != nullptr)
			*StatusEffect = params.StatusEffect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.UpdateStackText
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::UpdateStackText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.UpdateStackText");
		
		UUI_StatusEffectTimer_C_UpdateStackText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.GetFirstStatusEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::GetFirstStatusEffect(class UStatusEffect** StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.GetFirstStatusEffect");
		
		UUI_StatusEffectTimer_C_GetFirstStatusEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusEffect != nullptr)
			*StatusEffect = params.StatusEffect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.TryRemoveEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTimer_C::TryRemoveEffect(class UStatusEffect* StatusEffect, bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.TryRemoveEffect");
		
		UUI_StatusEffectTimer_C_TryRemoveEffect_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.TryAddEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AddedThisFrame                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EffectAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTimer_C::TryAddEffect(class UStatusEffect* StatusEffect, bool AddedThisFrame, bool* EffectAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.TryAddEffect");
		
		UUI_StatusEffectTimer_C_TryAddEffect_Params params {};
		params.StatusEffect = StatusEffect;
		params.AddedThisFrame = AddedThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EffectAdded != nullptr)
			*EffectAdded = params.EffectAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnGlobalColorChange");
		
		UUI_StatusEffectTimer_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.Tick");
		
		UUI_StatusEffectTimer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AddedThisFrame                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTimer_C::Initialize(class UStatusEffect* StatusEffect, bool AddedThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.Initialize");
		
		UUI_StatusEffectTimer_C_Initialize_Params params {};
		params.StatusEffect = StatusEffect;
		params.AddedThisFrame = AddedThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.HandleColorSet
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::HandleColorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.HandleColorSet");
		
		UUI_StatusEffectTimer_C_HandleColorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_StatusEffectTimer_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnAddedToFocusPath");
		
		UUI_StatusEffectTimer_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_StatusEffectTimer_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnRemovedFromFocusPath");
		
		UUI_StatusEffectTimer_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_StatusEffectTimer_C_BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_StatusEffectTimer_C_BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::PlayAnim(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.PlayAnim");
		
		UUI_StatusEffectTimer_C_PlayAnim_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.FocusOn
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::FocusOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.FocusOn");
		
		UUI_StatusEffectTimer_C_FocusOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.HandleRemove
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::HandleRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.HandleRemove");
		
		UUI_StatusEffectTimer_C_HandleRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnRemoveEffectComplete
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTimer_C::OnRemoveEffectComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnRemoveEffectComplete");
		
		UUI_StatusEffectTimer_C_OnRemoveEffectComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnTimerReset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::OnTimerReset(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnTimerReset");
		
		UUI_StatusEffectTimer_C_OnTimerReset_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.ExecuteUbergraph_UI_StatusEffectTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::ExecuteUbergraph_UI_StatusEffectTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.ExecuteUbergraph_UI_StatusEffectTimer");
		
		UUI_StatusEffectTimer_C_ExecuteUbergraph_UI_StatusEffectTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnEffectFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::OnEffectFocused__DelegateSignature(class UStatusEffect* Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnEffectFocused__DelegateSignature");
		
		UUI_StatusEffectTimer_C_OnEffectFocused__DelegateSignature_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnEffectHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::OnEffectHovered__DelegateSignature(class UStatusEffect* Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnEffectHovered__DelegateSignature");
		
		UUI_StatusEffectTimer_C_OnEffectHovered__DelegateSignature_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnStatusEffectComplete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_StatusEffectTimer_C*                     UI_StatusEffectPip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTimer_C::OnStatusEffectComplete__DelegateSignature(class UUI_StatusEffectTimer_C* UI_StatusEffectPip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnStatusEffectComplete__DelegateSignature");
		
		UUI_StatusEffectTimer_C_OnStatusEffectComplete__DelegateSignature_Params params {};
		params.UI_StatusEffectPip = UI_StatusEffectPip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusEffectTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusEffectTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusEffectTimer.UI_StatusEffectTimer_C");
		return ptr;
	}

}


