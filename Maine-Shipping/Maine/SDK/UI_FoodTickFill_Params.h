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
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.Get_FoodFill_ColorAndOpacity_1
	 */
	struct UUI_FoodTickFill_C_Get_FoodFill_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.UpdateHungerAnim
	 */
	struct UUI_FoodTickFill_C_UpdateHungerAnim_Params
	{	};

	/**
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.OnGlobalColorChange
	 */
	struct UUI_FoodTickFill_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.HandleFillAnim
	 */
	struct UUI_FoodTickFill_C_HandleFillAnim_Params
	{	};

	/**
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.RefreshColor
	 */
	struct UUI_FoodTickFill_C_RefreshColor_Params
	{	};

	/**
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.SetFoodDecreased
	 */
	struct UUI_FoodTickFill_C_SetFoodDecreased_Params
	{
	public:
		bool                                                       Decreased;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FoodTickFill.UI_FoodTickFill_C.ExecuteUbergraph_UI_FoodTickFill
	 */
	struct UUI_FoodTickFill_C_ExecuteUbergraph_UI_FoodTickFill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
