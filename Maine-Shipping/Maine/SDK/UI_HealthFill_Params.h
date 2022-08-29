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
	 * Function UI_HealthFill.UI_HealthFill_C.GetHealthColor
	 */
	struct UUI_HealthFill_C_GetHealthColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HealthFill.UI_HealthFill_C.OnGlobalColorChange
	 */
	struct UUI_HealthFill_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HealthFill.UI_HealthFill_C.UpdateHealthAnim
	 */
	struct UUI_HealthFill_C_UpdateHealthAnim_Params
	{	};

	/**
	 * Function UI_HealthFill.UI_HealthFill_C.HandleAnimTick
	 */
	struct UUI_HealthFill_C_HandleAnimTick_Params
	{	};

	/**
	 * Function UI_HealthFill.UI_HealthFill_C.ExecuteUbergraph_UI_HealthFill
	 */
	struct UUI_HealthFill_C_ExecuteUbergraph_UI_HealthFill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
