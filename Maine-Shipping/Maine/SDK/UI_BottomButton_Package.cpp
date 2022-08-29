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
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.Set Format Text Param
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Param0                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_BottomButton_C::Set_Format_Text_Param(const class FText& Param0)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.Set Format Text Param");
		
		UUI_BottomButton_C_Set_Format_Text_Param_Params params {};
		params.Param0 = Param0;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.GetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::GetIsActive(bool* bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.GetIsActive");
		
		UUI_BottomButton_C_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bActive != nullptr)
			*bActive = params.bActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.IsChordForAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 Chord                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::IsChordForAction(const struct FInputChord& Chord, bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.IsChordForAction");
		
		UUI_BottomButton_C_IsChordForAction_Params params {};
		params.Chord = Chord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetTextBacking
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::SetTextBacking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetTextBacking");
		
		UUI_BottomButton_C_SetTextBacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetAbledness
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::SetAbledness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetAbledness");
		
		UUI_BottomButton_C_SetAbledness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetLargeFont
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::SetLargeFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetLargeFont");
		
		UUI_BottomButton_C_SetLargeFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetButtonConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConfirmationButtonConfig                   Config                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::SetButtonConfig(const struct FConfirmationButtonConfig& Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetButtonConfig");
		
		UUI_BottomButton_C_SetButtonConfig_Params params {};
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetLocalizedButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::SetLocalizedButtonText(const struct FLocString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetLocalizedButtonText");
		
		UUI_BottomButton_C_SetLocalizedButtonText_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetInputName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::SetInputName(const class FName& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetInputName");
		
		UUI_BottomButton_C_SetInputName_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.GetNarration");
		
		UUI_BottomButton_C_GetNarration_Params params {};
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunks != nullptr)
			*Chunks = params.Chunks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.ShouldShowHintOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::ShouldShowHintOnly(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.ShouldShowHintOnly");
		
		UUI_BottomButton_C_ShouldShowHintOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetDownState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  TextElement                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     ButtonInner                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::SetDownState(class UTextBlock** TextElement, class UButton** ButtonInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetDownState");
		
		UUI_BottomButton_C_SetDownState_Params params {};
		
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
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  TextElement                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     ButtonInner                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::SetDisabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetDisabledStyle");
		
		UUI_BottomButton_C_SetDisabledStyle_Params params {};
		
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
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  TextElement                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     ButtonInner                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::SetEnabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.SetEnabledStyle");
		
		UUI_BottomButton_C_SetEnabledStyle_Params params {};
		
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
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.NormalButtonUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::NormalButtonUnhover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.NormalButtonUnhover");
		
		UUI_BottomButton_C_NormalButtonUnhover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.NormalButtonHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::NormalButtonHover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.NormalButtonHover");
		
		UUI_BottomButton_C_NormalButtonHover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.OnSetIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::OnSetIsValid(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.OnSetIsValid");
		
		UUI_BottomButton_C_OnSetIsValid_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.OnUsingGamepadChanged");
		
		UUI_BottomButton_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.OnGlobalColorChange");
		
		UUI_BottomButton_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.PreConstruct");
		
		UUI_BottomButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BottomButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.OnAddedToFocusPath");
		
		UUI_BottomButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BottomButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.OnRemovedFromFocusPath");
		
		UUI_BottomButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.Construct");
		
		UUI_BottomButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.EventLargeFonts");
		
		UUI_BottomButton_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.Destruct");
		
		UUI_BottomButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.EventBackgroundToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BottomButton_C::EventBackgroundToggle(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.EventBackgroundToggle");
		
		UUI_BottomButton_C_EventBackgroundToggle_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.ExecuteUbergraph_UI_BottomButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BottomButton_C::ExecuteUbergraph_UI_BottomButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.ExecuteUbergraph_UI_BottomButton");
		
		UUI_BottomButton_C_ExecuteUbergraph_UI_BottomButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BottomButton.UI_BottomButton_C.OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BottomButton_C::OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BottomButton.UI_BottomButton_C.OnNormalButtonClicked__DelegateSignature");
		
		UUI_BottomButton_C_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BottomButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BottomButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BottomButton.UI_BottomButton_C");
		return ptr;
	}

}


