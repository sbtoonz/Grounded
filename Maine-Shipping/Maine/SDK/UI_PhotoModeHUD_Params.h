#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnKeyDown
	 */
	struct UUI_PhotoModeHUD_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.HandleKeyEventChord
	 */
	struct UUI_PhotoModeHUD_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.Set Camera Toggle Button text
	 */
	struct UUI_PhotoModeHUD_C_Set_Camera_Toggle_Button_text_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__HideUIButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__HideUIButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__TakePhotoButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__TakePhotoButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__ToggleCameraButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__ToggleCameraButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__OpenPhotoDirectoryButton_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__OpenPhotoDirectoryButton_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnSettingsOpened
	 */
	struct UUI_PhotoModeHUD_C_OnSettingsOpened_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnSettingsClosed
	 */
	struct UUI_PhotoModeHUD_C_OnSettingsClosed_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.Construct
	 */
	struct UUI_PhotoModeHUD_C_Construct_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.BndEvt__RefreshDefaultsButton_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_PhotoModeHUD_C_BndEvt__RefreshDefaultsButton_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoTaken_Event_1
	 */
	struct UUI_PhotoModeHUD_C_OnPhotoTaken_Event_1_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoPawnChanged_Event_1
	 */
	struct UUI_PhotoModeHUD_C_OnPhotoPawnChanged_Event_1_Params
	{
	public:
		class APhotoPawn*                                          PhotoPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnPhotoModeExited_Event_1
	 */
	struct UUI_PhotoModeHUD_C_OnPhotoModeExited_Event_1_Params
	{	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.OnUsingGamepadChanged
	 */
	struct UUI_PhotoModeHUD_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.HandleGenericMessage
	 */
	struct UUI_PhotoModeHUD_C_HandleGenericMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          MessageIcon;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PhotoModeHUD.UI_PhotoModeHUD_C.ExecuteUbergraph_UI_PhotoModeHUD
	 */
	struct UUI_PhotoModeHUD_C_ExecuteUbergraph_UI_PhotoModeHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
