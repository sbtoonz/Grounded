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
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetLargeText
	 */
	struct UUI_ConfirmationPopUp_C_SetLargeText_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.GetDefaultUserFocus
	 */
	struct UUI_ConfirmationPopUp_C_GetDefaultUserFocus_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetButtonsOK
	 */
	struct UUI_ConfirmationPopUp_C_SetButtonsOK_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetCustomButtonsTwo
	 */
	struct UUI_ConfirmationPopUp_C_SetCustomButtonsTwo_Params
	{
	public:
		struct FConfirmationButtonConfig                           Button1;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FConfirmationButtonConfig                           Button2;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleKeyEventChord
	 */
	struct UUI_ConfirmationPopUp_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.SetText
	 */
	struct UUI_ConfirmationPopUp_C_SetText_Params
	{
	public:
		class FString                                              TitleText;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class FString                                              BodyText;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       OkButtonOnly;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_ConfirmationPopUp_C_BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_ConfirmationPopUp_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleOkay
	 */
	struct UUI_ConfirmationPopUp_C_HandleOkay_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.HandleBack
	 */
	struct UUI_ConfirmationPopUp_C_HandleBack_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_ConfirmationPopUp_C_BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Tick
	 */
	struct UUI_ConfirmationPopUp_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnGlobalColorChange
	 */
	struct UUI_ConfirmationPopUp_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Construct
	 */
	struct UUI_ConfirmationPopUp_C_Construct_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.EventLargeFonts
	 */
	struct UUI_ConfirmationPopUp_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.Destruct
	 */
	struct UUI_ConfirmationPopUp_C_Destruct_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.ExecuteUbergraph_UI_ConfirmationPopUp
	 */
	struct UUI_ConfirmationPopUp_C_ExecuteUbergraph_UI_ConfirmationPopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SEDO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnCancel__DelegateSignature
	 */
	struct UUI_ConfirmationPopUp_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ConfirmationPopUp.UI_ConfirmationPopUp_C.OnAccept__DelegateSignature
	 */
	struct UUI_ConfirmationPopUp_C_OnAccept__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
