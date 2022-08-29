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
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetPlayerDistanceVisibility
	 */
	struct UUI_PlayerNameplate_C_SetPlayerDistanceVisibility_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetScreenEdgeAlpha
	 */
	struct UUI_PlayerNameplate_C_GetScreenEdgeAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetLargeFont
	 */
	struct UUI_PlayerNameplate_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetKnockoutTimeleft
	 */
	struct UUI_PlayerNameplate_C_GetKnockoutTimeleft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJQ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetAttentionColor
	 */
	struct UUI_PlayerNameplate_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetWarningColor
	 */
	struct UUI_PlayerNameplate_C_GetWarningColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateDistance
	 */
	struct UUI_PlayerNameplate_C_UpdateDistance_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateFade
	 */
	struct UUI_PlayerNameplate_C_UpdateFade_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetMarkerData
	 */
	struct UUI_PlayerNameplate_C_SetMarkerData_Params
	{
	public:
		class UHUDMarkerData*                                      NewMarkerData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdatePosition
	 */
	struct UUI_PlayerNameplate_C_UpdatePosition_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetPlayerName
	 */
	struct UUI_PlayerNameplate_C_SetPlayerName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.Construct
	 */
	struct UUI_PlayerNameplate_C_Construct_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.Tick
	 */
	struct UUI_PlayerNameplate_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.HUDMarkerDataChanged
	 */
	struct UUI_PlayerNameplate_C_HUDMarkerDataChanged_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.RefreshNameAndColor
	 */
	struct UUI_PlayerNameplate_C_RefreshNameAndColor_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnGlobalColorChange
	 */
	struct UUI_PlayerNameplate_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateInfoForMarker
	 */
	struct UUI_PlayerNameplate_C_UpdateInfoForMarker_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.Destruct
	 */
	struct UUI_PlayerNameplate_C_Destruct_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.EventLargeFonts
	 */
	struct UUI_PlayerNameplate_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.EventPartyDistance
	 */
	struct UUI_PlayerNameplate_C_EventPartyDistance_Params
	{
	public:
		bool                                                       New_Value;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.BindPlayerEvents
	 */
	struct UUI_PlayerNameplate_C_BindPlayerEvents_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnPlayerInMenuChanged
	 */
	struct UUI_PlayerNameplate_C_OnPlayerInMenuChanged_Params
	{
	public:
		bool                                                       bPlayerBusyInMenu;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnHealthStateChanged
	 */
	struct UUI_PlayerNameplate_C_OnHealthStateChanged_Params
	{
	public:
		EHealthState                                               NewHealthState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.HandleVisualsBasedOnScreenLocation
	 */
	struct UUI_PlayerNameplate_C_HandleVisualsBasedOnScreenLocation_Params
	{	};

	/**
	 * Function UI_PlayerNameplate.UI_PlayerNameplate_C.ExecuteUbergraph_UI_PlayerNameplate
	 */
	struct UUI_PlayerNameplate_C_ExecuteUbergraph_UI_PlayerNameplate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
