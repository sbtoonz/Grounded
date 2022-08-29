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
	 * Function UI_TabButton.UI_TabButton_C.SetString
	 */
	struct UUI_TabButton_C_SetString_Params
	{
	public:
		struct FLocString                                          LocString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.SetIcon
	 */
	struct UUI_TabButton_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.GetNarration
	 */
	struct UUI_TabButton_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.GetVisibilityOSimg
	 */
	struct UUI_TabButton_C_GetVisibilityOSimg_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.GetVisibilityText
	 */
	struct UUI_TabButton_C_GetVisibilityText_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.GetAttentionColor
	 */
	struct UUI_TabButton_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.GetNuggetVisibility
	 */
	struct UUI_TabButton_C_GetNuggetVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.GetSelectedColor
	 */
	struct UUI_TabButton_C_GetSelectedColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.RefreshColors
	 */
	struct UUI_TabButton_C_RefreshColors_Params
	{	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.SetCheckedState
	 */
	struct UUI_TabButton_C_SetCheckedState_Params
	{
	public:
		ECheckBoxState                                             InCheckedState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.TabButtonUnhover
	 */
	struct UUI_TabButton_C_TabButtonUnhover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.TabButtonHover
	 */
	struct UUI_TabButton_C_TabButtonHover_Params
	{
	public:
		class APlayerController*                                   self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.PreConstruct
	 */
	struct UUI_TabButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_TabButton_C_BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.OnGlobalColorChange
	 */
	struct UUI_TabButton_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.Construct
	 */
	struct UUI_TabButton_C_Construct_Params
	{	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.ExecuteUbergraph_UI_TabButton
	 */
	struct UUI_TabButton_C_ExecuteUbergraph_UI_TabButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabButton.UI_TabButton_C.OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_TabButton_C_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
