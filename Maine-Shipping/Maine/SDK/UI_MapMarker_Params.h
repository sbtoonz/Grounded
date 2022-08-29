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
	 * Function UI_MapMarker.UI_MapMarker_C.GetDescriptionWindowIcon
	 */
	struct UUI_MapMarker_C_GetDescriptionWindowIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MapMarker.UI_MapMarker_C.RefreshVisuals
	 */
	struct UUI_MapMarker_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_MapMarker.UI_MapMarker_C.OnGlobalColorChange
	 */
	struct UUI_MapMarker_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MapMarker.UI_MapMarker_C.SetMarkerColor
	 */
	struct UUI_MapMarker_C_SetMarkerColor_Params
	{	};

	/**
	 * Function UI_MapMarker.UI_MapMarker_C.ExecuteUbergraph_UI_MapMarker
	 */
	struct UUI_MapMarker_C_ExecuteUbergraph_UI_MapMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2DI5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
