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
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.GetFill
	 */
	struct UUI_WaterTickFill_C_GetFill_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.Construct
	 */
	struct UUI_WaterTickFill_C_Construct_Params
	{	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.UpdateThirstAnim
	 */
	struct UUI_WaterTickFill_C_UpdateThirstAnim_Params
	{	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.OnGlobalColorChange
	 */
	struct UUI_WaterTickFill_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.SetWaterDecreased
	 */
	struct UUI_WaterTickFill_C_SetWaterDecreased_Params
	{
	public:
		bool                                                       WaterDecreased;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.RefreshColor
	 */
	struct UUI_WaterTickFill_C_RefreshColor_Params
	{	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.HandleFillAnim
	 */
	struct UUI_WaterTickFill_C_HandleFillAnim_Params
	{	};

	/**
	 * Function UI_WaterTickFill.UI_WaterTickFill_C.ExecuteUbergraph_UI_WaterTickFill
	 */
	struct UUI_WaterTickFill_C_ExecuteUbergraph_UI_WaterTickFill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
