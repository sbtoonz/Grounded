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
	 * Function UI_HUDActionWidget.UI_HUDActionWidget_C.OnGlobalColorChange
	 */
	struct UUI_HUDActionWidget_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUDActionWidget.UI_HUDActionWidget_C.OnUsingGamepadChanged
	 */
	struct UUI_HUDActionWidget_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDActionWidget.UI_HUDActionWidget_C.ExecuteUbergraph_UI_HUDActionWidget
	 */
	struct UUI_HUDActionWidget_C_ExecuteUbergraph_UI_HUDActionWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
