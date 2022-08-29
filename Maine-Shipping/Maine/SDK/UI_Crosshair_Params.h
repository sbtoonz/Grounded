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
	 * Function UI_Crosshair.UI_Crosshair_C.SetReticleColor
	 */
	struct UUI_Crosshair_C_SetReticleColor_Params
	{	};

	/**
	 * Function UI_Crosshair.UI_Crosshair_C.OnCameraModeChanged
	 */
	struct UUI_Crosshair_C_OnCameraModeChanged_Params
	{
	public:
		ECameraDisplayMode                                         DisplayMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Crosshair.UI_Crosshair_C.UpdateCursorBrush
	 */
	struct UUI_Crosshair_C_UpdateCursorBrush_Params
	{
	public:
		EAttackResolutionType                                      AttackResolution;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Crosshair.UI_Crosshair_C.OnGlobalColorChange
	 */
	struct UUI_Crosshair_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair
	 */
	struct UUI_Crosshair_C_ExecuteUbergraph_UI_Crosshair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
