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
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.GetDefragIcon
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_DefragButton_C::GetDefragIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.GetDefragIcon");
		
		UUI_DefragButton_C_GetDefragIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  TextElement                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     ButtonInner                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DefragButton_C::SetDisabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.SetDisabledStyle");
		
		UUI_DefragButton_C_SetDisabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextElement != nullptr)
			*TextElement = params.TextElement;
		if (ButtonInner != nullptr)
			*ButtonInner = params.ButtonInner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  TextElement                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     ButtonInner                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DefragButton_C::SetEnabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.SetEnabledStyle");
		
		UUI_DefragButton_C_SetEnabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextElement != nullptr)
			*TextElement = params.TextElement;
		if (ButtonInner != nullptr)
			*ButtonInner = params.ButtonInner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.GetSCABOSAccentOne
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_DefragButton_C::GetSCABOSAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.GetSCABOSAccentOne");
		
		UUI_DefragButton_C_GetSCABOSAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.GetGamepadButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_DefragButton_C::GetGamepadButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.GetGamepadButtonVisibility");
		
		UUI_DefragButton_C_GetGamepadButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.NormalButtonUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DefragButton_C::NormalButtonUnhover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.NormalButtonUnhover");
		
		UUI_DefragButton_C_NormalButtonUnhover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.NormalButtonHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DefragButton_C::NormalButtonHover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.NormalButtonHover");
		
		UUI_DefragButton_C_NormalButtonHover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.Construct");
		
		UUI_DefragButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DefragButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.Tick");
		
		UUI_DefragButton_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.SetIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DefragButton_C::SetIsValid(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.SetIsValid");
		
		UUI_DefragButton_C_SetIsValid_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_DefragButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.OnAddedToFocusPath");
		
		UUI_DefragButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.ExecuteUbergraph_UI_DefragButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DefragButton_C::ExecuteUbergraph_UI_DefragButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.ExecuteUbergraph_UI_DefragButton");
		
		UUI_DefragButton_C_ExecuteUbergraph_UI_DefragButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.OnFocused__DelegateSignature");
		
		UUI_DefragButton_C_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DefragButton.UI_DefragButton_C.OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_DefragButton_C::OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DefragButton.UI_DefragButton_C.OnNormalButtonClicked__DelegateSignature");
		
		UUI_DefragButton_C_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DefragButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DefragButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DefragButton.UI_DefragButton_C");
		return ptr;
	}

}


