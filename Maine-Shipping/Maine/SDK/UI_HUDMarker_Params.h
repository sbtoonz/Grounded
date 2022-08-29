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
	 * Function UI_HUDMarker.UI_HUDMarker_C.GetArrowColor
	 */
	struct UUI_HUDMarker_C_GetArrowColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.ShouldTintIcon
	 */
	struct UUI_HUDMarker_C_ShouldTintIcon_Params
	{
	public:
		bool                                                       ShouldLock;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.UsesCustomIcon
	 */
	struct UUI_HUDMarker_C_UsesCustomIcon_Params
	{
	public:
		bool                                                       ShouldLock;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.EvaluateToggleVisibility
	 */
	struct UUI_HUDMarker_C_EvaluateToggleVisibility_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.TriggerShowAnimation
	 */
	struct UUI_HUDMarker_C_TriggerShowAnimation_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.GetArrowOffsetAdjustment
	 */
	struct UUI_HUDMarker_C_GetArrowOffsetAdjustment_Params
	{
	public:
		bool                                                       IsOnScreen;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M7Z1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.UpdateQuestVisibility
	 */
	struct UUI_HUDMarker_C_UpdateQuestVisibility_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.GetMarkerColor
	 */
	struct UUI_HUDMarker_C_GetMarkerColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.SetHUDMarkerData
	 */
	struct UUI_HUDMarker_C_SetHUDMarkerData_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.GetLifetimeFade
	 */
	struct UUI_HUDMarker_C_GetLifetimeFade_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.GetDistanceVisibility
	 */
	struct UUI_HUDMarker_C_GetDistanceVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.SetMarkerIcon
	 */
	struct UUI_HUDMarker_C_SetMarkerIcon_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.Construct
	 */
	struct UUI_HUDMarker_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerChanged
	 */
	struct UUI_HUDMarker_C_OnHUDMarkerChanged_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerObjectiveReferenceChanged
	 */
	struct UUI_HUDMarker_C_OnHUDMarkerObjectiveReferenceChanged_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnGlobalColorChange
	 */
	struct UUI_HUDMarker_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.UpdateColor
	 */
	struct UUI_HUDMarker_C_UpdateColor_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.Destruct
	 */
	struct UUI_HUDMarker_C_Destruct_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnQuestComplete
	 */
	struct UUI_HUDMarker_C_OnQuestComplete_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnShowFarHUDMarkersChanged
	 */
	struct UUI_HUDMarker_C_OnShowFarHUDMarkersChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnPlayerStateAdded
	 */
	struct UUI_HUDMarker_C_OnPlayerStateAdded_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnPlayerStateGuidChanged
	 */
	struct UUI_HUDMarker_C_OnPlayerStateGuidChanged_Params
	{
	public:
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerToggleStateChanged
	 */
	struct UUI_HUDMarker_C_OnHUDMarkerToggleStateChanged_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.HandleStickiedQuestChanged
	 */
	struct UUI_HUDMarker_C_HandleStickiedQuestChanged_Params
	{	};

	/**
	 * Function UI_HUDMarker.UI_HUDMarker_C.ExecuteUbergraph_UI_HUDMarker
	 */
	struct UUI_HUDMarker_C_ExecuteUbergraph_UI_HUDMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
