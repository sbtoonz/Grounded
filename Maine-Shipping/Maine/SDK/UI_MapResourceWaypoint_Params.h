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
	 * Function UI_MapResourceWaypoint.UI_MapResourceWaypoint_C.GetDescriptionWindowIcon
	 */
	struct UUI_MapResourceWaypoint_C_GetDescriptionWindowIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MapResourceWaypoint.UI_MapResourceWaypoint_C.RefreshVisuals
	 */
	struct UUI_MapResourceWaypoint_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_MapResourceWaypoint.UI_MapResourceWaypoint_C.ExecuteUbergraph_UI_MapResourceWaypoint
	 */
	struct UUI_MapResourceWaypoint_C_ExecuteUbergraph_UI_MapResourceWaypoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
