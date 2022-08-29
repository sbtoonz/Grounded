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
	 * Function UI_StaminaFill.UI_StaminaFill_C.GetStaminaColor
	 */
	struct UUI_StaminaFill_C_GetStaminaColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StaminaFill.UI_StaminaFill_C.UpdateStaminaAnim
	 */
	struct UUI_StaminaFill_C_UpdateStaminaAnim_Params
	{	};

	/**
	 * Function UI_StaminaFill.UI_StaminaFill_C.OnGlobalColorChange
	 */
	struct UUI_StaminaFill_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StaminaFill.UI_StaminaFill_C.HandleAnimFill
	 */
	struct UUI_StaminaFill_C_HandleAnimFill_Params
	{	};

	/**
	 * Function UI_StaminaFill.UI_StaminaFill_C.ExecuteUbergraph_UI_StaminaFill
	 */
	struct UUI_StaminaFill_C_ExecuteUbergraph_UI_StaminaFill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
