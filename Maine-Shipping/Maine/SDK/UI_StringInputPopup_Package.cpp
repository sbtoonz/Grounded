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
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.SetLargeText
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::SetLargeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.SetLargeText");
		
		UUI_StringInputPopup_C_SetLargeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_StringInputPopup_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.GetDefaultUserFocus");
		
		UUI_StringInputPopup_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.SetCustomButtonsTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConfirmationButtonConfig                   Button1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FConfirmationButtonConfig                   Button2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StringInputPopup_C::SetCustomButtonsTwo(const struct FConfirmationButtonConfig& Button1, const struct FConfirmationButtonConfig& Button2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.SetCustomButtonsTwo");
		
		UUI_StringInputPopup_C_SetCustomButtonsTwo_Params params {};
		params.Button1 = Button1;
		params.Button2 = Button2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_StringInputPopup_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.HandleKeyEventChord");
		
		UUI_StringInputPopup_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TitleText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class FString                                      BodyText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsPassword                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StringInputPopup_C::Initialize(const class FString& TitleText, const class FString& BodyText, bool IsPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.Initialize");
		
		UUI_StringInputPopup_C_Initialize_Params params {};
		params.TitleText = TitleText;
		params.BodyText = BodyText;
		params.IsPassword = IsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_StringInputPopup_C_BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_StringInputPopup_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.HandleOkay
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::HandleOkay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.HandleOkay");
		
		UUI_StringInputPopup_C_HandleOkay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.HandleBack
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.HandleBack");
		
		UUI_StringInputPopup_C_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.OnGlobalColorChange");
		
		UUI_StringInputPopup_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.Construct");
		
		UUI_StringInputPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StringInputPopup_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.EventLargeFonts");
		
		UUI_StringInputPopup_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.Destruct");
		
		UUI_StringInputPopup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__YesButton_1_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::BndEvt__YesButton_1_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__YesButton_1_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_StringInputPopup_C_BndEvt__YesButton_1_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_StringInputPopup_C::BndEvt__InputBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UUI_StringInputPopup_C_BndEvt__InputBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.SetFocusToInputBox
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::SetFocusToInputBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.SetFocusToInputBox");
		
		UUI_StringInputPopup_C_SetFocusToInputBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StringInputPopup_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.OnUsingGamepadChanged");
		
		UUI_StringInputPopup_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__UI_StringInputPopup_InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StringInputPopup_C::BndEvt__UI_StringInputPopup_InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__UI_StringInputPopup_InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UUI_StringInputPopup_C_BndEvt__UI_StringInputPopup_InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.ExecuteUbergraph_UI_StringInputPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StringInputPopup_C::ExecuteUbergraph_UI_StringInputPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.ExecuteUbergraph_UI_StringInputPopup");
		
		UUI_StringInputPopup_C_ExecuteUbergraph_UI_StringInputPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StringInputPopup_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.OnCancel__DelegateSignature");
		
		UUI_StringInputPopup_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StringInputPopup.UI_StringInputPopup_C.OnAccept__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_StringInputPopup_C::OnAccept__DelegateSignature(const class FString& UserText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StringInputPopup.UI_StringInputPopup_C.OnAccept__DelegateSignature");
		
		UUI_StringInputPopup_C_OnAccept__DelegateSignature_Params params {};
		params.UserText = UserText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StringInputPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StringInputPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StringInputPopup.UI_StringInputPopup_C");
		return ptr;
	}

}


