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
	 * Function UI_Map.UI_Map_C.RefreshToggleMapMarkerButton
	 */
	struct UUI_Map_C_RefreshToggleMapMarkerButton_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.RefreshTogglePlayerWaypointButton
	 */
	struct UUI_Map_C_RefreshTogglePlayerWaypointButton_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.OnKeyDown
	 */
	struct UUI_Map_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Map.UI_Map_C.HandleKeyEventChord
	 */
	struct UUI_Map_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Map.UI_Map_C.GetResourceEnabledColor
	 */
	struct UUI_Map_C_GetResourceEnabledColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.GetAccentTwo
	 */
	struct UUI_Map_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.GetBaseBGColor
	 */
	struct UUI_Map_C_GetBaseBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.GetBGColor
	 */
	struct UUI_Map_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.GetWarningColor
	 */
	struct UUI_Map_C_GetWarningColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.GetHeaderColor
	 */
	struct UUI_Map_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Map.UI_Map_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_Map_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.Refresh
	 */
	struct UUI_Map_C_Refresh_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.OnGlobalColorChange
	 */
	struct UUI_Map_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.BndEvt__CenterOnPlayerButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_Map_C_BndEvt__CenterOnPlayerButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.BndEvt__ZoomButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_Map_C_BndEvt__ZoomButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.OnUsingGamepadChanged
	 */
	struct UUI_Map_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Map.UI_Map_C.NewPOIDiscovered
	 */
	struct UUI_Map_C_NewPOIDiscovered_Params
	{
	public:
		class UPointOfInterestDataAsset*                           PointOfInterest;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                UnlockerPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.Destruct
	 */
	struct UUI_Map_C_Destruct_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.BndEvt__ToggleVisibilityButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_Map_C_BndEvt__ToggleVisibilityButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.BndEvt__UI_Map_DeleteWaypointButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_Map_C_BndEvt__UI_Map_DeleteWaypointButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.RefreshMapMarkerControls
	 */
	struct UUI_Map_C_RefreshMapMarkerControls_Params
	{
	public:
		class UMapLegendEntryWidget*                               Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.K2_OnLegendEntryFocused
	 */
	struct UUI_Map_C_K2_OnLegendEntryFocused_Params
	{
	public:
		class UMapLegendEntryWidget*                               Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.OnInitialized
	 */
	struct UUI_Map_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Map.UI_Map_C.HandleFocusedEntryChanged
	 */
	struct UUI_Map_C_HandleFocusedEntryChanged_Params
	{
	public:
		class UMapPanelWidget*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseMapEntryWidget*                                 MapEntry;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Map.UI_Map_C.ExecuteUbergraph_UI_Map
	 */
	struct UUI_Map_C_ExecuteUbergraph_UI_Map_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
