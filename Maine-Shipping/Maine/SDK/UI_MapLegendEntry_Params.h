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
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.HandleSelectInput
	 */
	struct UUI_MapLegendEntry_C_HandleSelectInput_Params
	{
	public:
		bool                                                       bHandled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnKeyDown
	 */
	struct UUI_MapLegendEntry_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetInvisibleStyle
	 */
	struct UUI_MapLegendEntry_C_SetInvisibleStyle_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetVisibleStyle
	 */
	struct UUI_MapLegendEntry_C_SetVisibleStyle_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetUnfocusedStyle
	 */
	struct UUI_MapLegendEntry_C_SetUnfocusedStyle_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetFocusedStyle
	 */
	struct UUI_MapLegendEntry_C_SetFocusedStyle_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.GetFocusWidget
	 */
	struct UUI_MapLegendEntry_C_GetFocusWidget_Params
	{
	public:
		class UButton*                                             WidgetToFocus;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnGlobalColorChange
	 */
	struct UUI_MapLegendEntry_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.RefreshNumberText
	 */
	struct UUI_MapLegendEntry_C_RefreshNumberText_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.ShowArrowControls
	 */
	struct UUI_MapLegendEntry_C_ShowArrowControls_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.ShowSingleElementControls
	 */
	struct UUI_MapLegendEntry_C_ShowSingleElementControls_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.Construct
	 */
	struct UUI_MapLegendEntry_C_Construct_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnFocusOnSingleElementPressed
	 */
	struct UUI_MapLegendEntry_C_OnFocusOnSingleElementPressed_Params
	{	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnAddedToFocusPath
	 */
	struct UUI_MapLegendEntry_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnRemovedFromFocusPath
	 */
	struct UUI_MapLegendEntry_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.UpdateVisibilityControls
	 */
	struct UUI_MapLegendEntry_C_UpdateVisibilityControls_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       State;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.BndEvt__VisibilityToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_MapLegendEntry_C_BndEvt__VisibilityToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetCustomPlayerVisuals
	 */
	struct UUI_MapLegendEntry_C_SetCustomPlayerVisuals_Params
	{
	public:
		EPlayerCharacterIdentity                                   Identity;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapLegendEntry.UI_MapLegendEntry_C.ExecuteUbergraph_UI_MapLegendEntry
	 */
	struct UUI_MapLegendEntry_C_ExecuteUbergraph_UI_MapLegendEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
