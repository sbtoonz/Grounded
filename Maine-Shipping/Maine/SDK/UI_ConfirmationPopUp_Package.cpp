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
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetLargeText
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::SetLargeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetLargeText");
		
		UUI_ConfirmationPopUp_C_SetLargeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_ConfirmationPopUp_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.GetDefaultUserFocus");
		
		UUI_ConfirmationPopUp_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetButtonsOK
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::SetButtonsOK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetButtonsOK");
		
		UUI_ConfirmationPopUp_C_SetButtonsOK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetCustomButtonsTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConfirmationButtonConfig                   Button1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FConfirmationButtonConfig                   Button2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationPopUp_C::SetCustomButtonsTwo(const struct FConfirmationButtonConfig& Button1, const struct FConfirmationButtonConfig& Button2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetCustomButtonsTwo");
		
		UUI_ConfirmationPopUp_C_SetCustomButtonsTwo_Params params {};
		params.Button1 = Button1;
		params.Button2 = Button2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_ConfirmationPopUp_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleKeyEventChord");
		
		UUI_ConfirmationPopUp_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TitleText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class FString                                      BodyText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               OkButtonOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ConfirmationPopUp_C::SetText(const class FString& TitleText, const class FString& BodyText, bool OkButtonOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetText");
		
		UUI_ConfirmationPopUp_C_SetText_Params params {};
		params.TitleText = TitleText;
		params.BodyText = BodyText;
		params.OkButtonOnly = OkButtonOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_ConfirmationPopUp_C_BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_ConfirmationPopUp_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleOkay
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::HandleOkay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleOkay");
		
		UUI_ConfirmationPopUp_C_HandleOkay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleBack
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleBack");
		
		UUI_ConfirmationPopUp_C_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_ConfirmationPopUp_C_BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationPopUp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Tick");
		
		UUI_ConfirmationPopUp_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnGlobalColorChange");
		
		UUI_ConfirmationPopUp_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Construct");
		
		UUI_ConfirmationPopUp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ConfirmationPopUp_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.EventLargeFonts");
		
		UUI_ConfirmationPopUp_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Destruct");
		
		UUI_ConfirmationPopUp_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.ExecuteUbergraph_UI_ConfirmationPopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationPopUp_C::ExecuteUbergraph_UI_ConfirmationPopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.ExecuteUbergraph_UI_ConfirmationPopUp");
		
		UUI_ConfirmationPopUp_C_ExecuteUbergraph_UI_ConfirmationPopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnCancel__DelegateSignature");
		
		UUI_ConfirmationPopUp_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnAccept__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationPopUp_C::OnAccept__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnAccept__DelegateSignature");
		
		UUI_ConfirmationPopUp_C_OnAccept__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ConfirmationPopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ConfirmationPopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationPopUp.UI_ConfirmationPopUp_C");
		return ptr;
	}

}


