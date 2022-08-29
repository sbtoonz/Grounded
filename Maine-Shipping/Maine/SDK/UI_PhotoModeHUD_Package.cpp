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
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_PhotoModeHUD_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnKeyDown");
		
		UUI_PhotoModeHUD_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_PhotoModeHUD_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.HandleKeyEventChord");
		
		UUI_PhotoModeHUD_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.Set Camera Toggle Button text
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::Set_Camera_Toggle_Button_text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.Set Camera Toggle Button text");
		
		UUI_PhotoModeHUD_C_Set_Camera_Toggle_Button_text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__HideUIButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__HideUIButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__HideUIButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__HideUIButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__TakePhotoButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__TakePhotoButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__TakePhotoButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__TakePhotoButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__ToggleCameraButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__ToggleCameraButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__ToggleCameraButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__ToggleCameraButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__OpenPhotoDirectoryButton_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__OpenPhotoDirectoryButton_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__OpenPhotoDirectoryButton_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__OpenPhotoDirectoryButton_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnSettingsOpened
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::OnSettingsOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnSettingsOpened");
		
		UUI_PhotoModeHUD_C_OnSettingsOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnSettingsClosed
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::OnSettingsClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnSettingsClosed");
		
		UUI_PhotoModeHUD_C_OnSettingsClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.Construct");
		
		UUI_PhotoModeHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__RefreshDefaultsButton_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::BndEvt__RefreshDefaultsButton_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__RefreshDefaultsButton_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature");
		
		UUI_PhotoModeHUD_C_BndEvt__RefreshDefaultsButton_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoTaken_Event_1
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::OnPhotoTaken_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoTaken_Event_1");
		
		UUI_PhotoModeHUD_C_OnPhotoTaken_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoPawnChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APhotoPawn*                                  PhotoPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PhotoModeHUD_C::OnPhotoPawnChanged_Event_1(class APhotoPawn* PhotoPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoPawnChanged_Event_1");
		
		UUI_PhotoModeHUD_C_OnPhotoPawnChanged_Event_1_Params params {};
		params.PhotoPawn = PhotoPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoModeExited_Event_1
	 * 		Flags  -> ()
	 */
	void UUI_PhotoModeHUD_C::OnPhotoModeExited_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoModeExited_Event_1");
		
		UUI_PhotoModeHUD_C_OnPhotoModeExited_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PhotoModeHUD_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnUsingGamepadChanged");
		
		UUI_PhotoModeHUD_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.HandleGenericMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  MessageIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PhotoModeHUD_C::HandleGenericMessage(const class FString& Message, class UTexture2D* MessageIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.HandleGenericMessage");
		
		UUI_PhotoModeHUD_C_HandleGenericMessage_Params params {};
		params.Message = Message;
		params.MessageIcon = MessageIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.ExecuteUbergraph_UI_PhotoModeHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PhotoModeHUD_C::ExecuteUbergraph_UI_PhotoModeHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.ExecuteUbergraph_UI_PhotoModeHUD");
		
		UUI_PhotoModeHUD_C_ExecuteUbergraph_UI_PhotoModeHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PhotoModeHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PhotoModeHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeHUD.UI_PhotoModeHUD_C");
		return ptr;
	}

}


