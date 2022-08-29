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
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.SetLargeText
	 */
	struct UUI_StringInputPopup_C_SetLargeText_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.GetDefaultUserFocus
	 */
	struct UUI_StringInputPopup_C_GetDefaultUserFocus_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.SetCustomButtonsTwo
	 */
	struct UUI_StringInputPopup_C_SetCustomButtonsTwo_Params
	{
	public:
		struct FConfirmationButtonConfig                           Button1;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FConfirmationButtonConfig                           Button2;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.HandleKeyEventChord
	 */
	struct UUI_StringInputPopup_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.Initialize
	 */
	struct UUI_StringInputPopup_C_Initialize_Params
	{
	public:
		class FString                                              TitleText;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class FString                                              BodyText;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsPassword;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.HandleOkay
	 */
	struct UUI_StringInputPopup_C_HandleOkay_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.HandleBack
	 */
	struct UUI_StringInputPopup_C_HandleBack_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.OnGlobalColorChange
	 */
	struct UUI_StringInputPopup_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.Construct
	 */
	struct UUI_StringInputPopup_C_Construct_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.EventLargeFonts
	 */
	struct UUI_StringInputPopup_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.Destruct
	 */
	struct UUI_StringInputPopup_C_Destruct_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__YesButton_1_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_BndEvt__YesButton_1_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_BndEvt__InputBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.SetFocusToInputBox
	 */
	struct UUI_StringInputPopup_C_SetFocusToInputBox_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.OnUsingGamepadChanged
	 */
	struct UUI_StringInputPopup_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.BndEvt__UI_StringInputPopup_InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_BndEvt__UI_StringInputPopup_InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.ExecuteUbergraph_UI_StringInputPopup
	 */
	struct UUI_StringInputPopup_C_ExecuteUbergraph_UI_StringInputPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.OnCancel__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StringInputPopup.UI_StringInputPopup_C.OnAccept__DelegateSignature
	 */
	struct UUI_StringInputPopup_C_OnAccept__DelegateSignature_Params
	{
	public:
		class FString                                              UserText;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
