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
	 * Function UI_DefragButton.UI_DefragButton_C.GetDefragIcon
	 */
	struct UUI_DefragButton_C_GetDefragIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.SetDisabledStyle
	 */
	struct UUI_DefragButton_C_SetDisabledStyle_Params
	{
	public:
		class UTextBlock*                                          TextElement;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             ButtonInner;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.SetEnabledStyle
	 */
	struct UUI_DefragButton_C_SetEnabledStyle_Params
	{
	public:
		class UTextBlock*                                          TextElement;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             ButtonInner;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.GetSCABOSAccentOne
	 */
	struct UUI_DefragButton_C_GetSCABOSAccentOne_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.GetGamepadButtonVisibility
	 */
	struct UUI_DefragButton_C_GetGamepadButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.NormalButtonUnhover
	 */
	struct UUI_DefragButton_C_NormalButtonUnhover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.NormalButtonHover
	 */
	struct UUI_DefragButton_C_NormalButtonHover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.Construct
	 */
	struct UUI_DefragButton_C_Construct_Params
	{	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.Tick
	 */
	struct UUI_DefragButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.SetIsValid
	 */
	struct UUI_DefragButton_C_SetIsValid_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_DefragButton_C_BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.OnAddedToFocusPath
	 */
	struct UUI_DefragButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.ExecuteUbergraph_UI_DefragButton
	 */
	struct UUI_DefragButton_C_ExecuteUbergraph_UI_DefragButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.OnFocused__DelegateSignature
	 */
	struct UUI_DefragButton_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DefragButton.UI_DefragButton_C.OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_DefragButton_C_OnNormalButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
