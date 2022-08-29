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
	 * Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.GetDescriptionWindowIcon
	 */
	struct UUI_MapPlayerWaypoint_C_GetDescriptionWindowIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.RefreshVisuals
	 */
	struct UUI_MapPlayerWaypoint_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_MapPlayerWaypoint.UI_MapPlayerWaypoint_C.ExecuteUbergraph_UI_MapPlayerWaypoint
	 */
	struct UUI_MapPlayerWaypoint_C_ExecuteUbergraph_UI_MapPlayerWaypoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
