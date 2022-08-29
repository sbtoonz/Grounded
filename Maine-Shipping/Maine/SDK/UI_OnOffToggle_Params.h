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
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.IsChecked
	 */
	struct UUI_OnOffToggle_C_IsChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.GetSubheaderColor
	 */
	struct UUI_OnOffToggle_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.GetAttentionColor
	 */
	struct UUI_OnOffToggle_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.RefreshColors
	 */
	struct UUI_OnOffToggle_C_RefreshColors_Params
	{	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.UpdateValueText
	 */
	struct UUI_OnOffToggle_C_UpdateValueText_Params
	{	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.SetIsChecked
	 */
	struct UUI_OnOffToggle_C_SetIsChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.PreConstruct
	 */
	struct UUI_OnOffToggle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.Construct
	 */
	struct UUI_OnOffToggle_C_Construct_Params
	{	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.BndEvt__Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_OnOffToggle_C_BndEvt__Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnAddedToFocusPath
	 */
	struct UUI_OnOffToggle_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnRemovedFromFocusPath
	 */
	struct UUI_OnOffToggle_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnMouseEnter
	 */
	struct UUI_OnOffToggle_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnMouseLeave
	 */
	struct UUI_OnOffToggle_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnGlobalColorChange
	 */
	struct UUI_OnOffToggle_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.ExecuteUbergraph_UI_OnOffToggle
	 */
	struct UUI_OnOffToggle_C_ExecuteUbergraph_UI_OnOffToggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnFocused__DelegateSignature
	 */
	struct UUI_OnOffToggle_C_OnFocused__DelegateSignature_Params
	{
	public:
		class UUI_OnOffToggle_C*                                   Toggle;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OnOffToggle.UI_OnOffToggle_C.OnCheckStateChanged__DelegateSignature
	 */
	struct UUI_OnOffToggle_C_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
