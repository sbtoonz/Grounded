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
	 * Function UI_MapPanel.UI_MapPanel_C.GetWorldSurfaceLocationAtCenter
	 */
	struct UUI_MapPanel_C_GetWorldSurfaceLocationAtCenter_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.ToggleResourceWaypoint
	 */
	struct UUI_MapPanel_C_ToggleResourceWaypoint_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.AddResourceWaypoint
	 */
	struct UUI_MapPanel_C_AddResourceWaypoint_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.RemoveResourceWaypoint
	 */
	struct UUI_MapPanel_C_RemoveResourceWaypoint_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.TogglePlayerWaypoint
	 */
	struct UUI_MapPanel_C_TogglePlayerWaypoint_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.AddPlayerWaypoint
	 */
	struct UUI_MapPanel_C_AddPlayerWaypoint_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.RemovePlayerWaypoint
	 */
	struct UUI_MapPanel_C_RemovePlayerWaypoint_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.EnsmallenCrosshair
	 */
	struct UUI_MapPanel_C_EnsmallenCrosshair_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.EmbiggenCrosshair
	 */
	struct UUI_MapPanel_C_EmbiggenCrosshair_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.UpdateZoomDotTints
	 */
	struct UUI_MapPanel_C_UpdateZoomDotTints_Params
	{
	public:
		int32_t                                                    ZoomLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.OnZoomChange
	 */
	struct UUI_MapPanel_C_OnZoomChange_Params
	{
	public:
		int32_t                                                    ZoomLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.OnGlobalColorChange
	 */
	struct UUI_MapPanel_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.OnUsingGamepadChanged
	 */
	struct UUI_MapPanel_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.OnInitialized
	 */
	struct UUI_MapPanel_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.Destruct
	 */
	struct UUI_MapPanel_C_Destruct_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.HandleMapEntryFocused
	 */
	struct UUI_MapPanel_C_HandleMapEntryFocused_Params
	{
	public:
		class UBaseMapEntryWidget*                                 MapEntry;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMapEntryType                                              EntryType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ViaMouseHover;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.HandleMapEntryFocusLost
	 */
	struct UUI_MapPanel_C_HandleMapEntryFocusLost_Params
	{
	public:
		bool                                                       ViaMouseHover;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.HandleSurveyResourceChanged
	 */
	struct UUI_MapPanel_C_HandleSurveyResourceChanged_Params
	{	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.Tick
	 */
	struct UUI_MapPanel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPanel.UI_MapPanel_C.ExecuteUbergraph_UI_MapPanel
	 */
	struct UUI_MapPanel_C_ExecuteUbergraph_UI_MapPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
