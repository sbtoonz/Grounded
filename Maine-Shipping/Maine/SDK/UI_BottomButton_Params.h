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
	 * Function UI_BottomButton.UI_BottomButton_C.Set Format Text Param
	 */
	struct UUI_BottomButton_C_Set_Format_Text_Param_Params
	{
	public:
		class FText                                                Param0;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.GetIsActive
	 */
	struct UUI_BottomButton_C_GetIsActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.IsChordForAction
	 */
	struct UUI_BottomButton_C_IsChordForAction_Params
	{
	public:
		struct FInputChord                                         Chord;                                                   // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Out;                                                     // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HXFV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetTextBacking
	 */
	struct UUI_BottomButton_C_SetTextBacking_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetAbledness
	 */
	struct UUI_BottomButton_C_SetAbledness_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetLargeFont
	 */
	struct UUI_BottomButton_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetButtonConfig
	 */
	struct UUI_BottomButton_C_SetButtonConfig_Params
	{
	public:
		struct FConfirmationButtonConfig                           Config;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetLocalizedButtonText
	 */
	struct UUI_BottomButton_C_SetLocalizedButtonText_Params
	{
	public:
		struct FLocString                                          String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetInputName
	 */
	struct UUI_BottomButton_C_SetInputName_Params
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.GetNarration
	 */
	struct UUI_BottomButton_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.ShouldShowHintOnly
	 */
	struct UUI_BottomButton_C_ShouldShowHintOnly_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetDownState
	 */
	struct UUI_BottomButton_C_SetDownState_Params
	{
	public:
		class UTextBlock*                                          TextElement;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             ButtonInner;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetDisabledStyle
	 */
	struct UUI_BottomButton_C_SetDisabledStyle_Params
	{
	public:
		class UTextBlock*                                          TextElement;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             ButtonInner;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.SetEnabledStyle
	 */
	struct UUI_BottomButton_C_SetEnabledStyle_Params
	{
	public:
		class UTextBlock*                                          TextElement;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             ButtonInner;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.NormalButtonUnhover
	 */
	struct UUI_BottomButton_C_NormalButtonUnhover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.NormalButtonHover
	 */
	struct UUI_BottomButton_C_NormalButtonHover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_BottomButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.OnSetIsValid
	 */
	struct UUI_BottomButton_C_OnSetIsValid_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.OnUsingGamepadChanged
	 */
	struct UUI_BottomButton_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.OnGlobalColorChange
	 */
	struct UUI_BottomButton_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.PreConstruct
	 */
	struct UUI_BottomButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.OnAddedToFocusPath
	 */
	struct UUI_BottomButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.OnRemovedFromFocusPath
	 */
	struct UUI_BottomButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.Construct
	 */
	struct UUI_BottomButton_C_Construct_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.EventLargeFonts
	 */
	struct UUI_BottomButton_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.Destruct
	 */
	struct UUI_BottomButton_C_Destruct_Params
	{	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.EventBackgroundToggle
	 */
	struct UUI_BottomButton_C_EventBackgroundToggle_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.ExecuteUbergraph_UI_BottomButton
	 */
	struct UUI_BottomButton_C_ExecuteUbergraph_UI_BottomButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSDV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BottomButton.UI_BottomButton_C.OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_BottomButton_C_OnNormalButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
