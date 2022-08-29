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
	 * Function UI_SCAB_Food.UI_SCAB_Food_C.GetWarningColor
	 */
	struct UUI_SCAB_Food_C_GetWarningColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB_Food.UI_SCAB_Food_C.GetFoodColor
	 */
	struct UUI_SCAB_Food_C_GetFoodColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB_Food.UI_SCAB_Food_C.OnGlobalColorChange
	 */
	struct UUI_SCAB_Food_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_SCAB_Food.UI_SCAB_Food_C.ExecuteUbergraph_UI_SCAB_Food
	 */
	struct UUI_SCAB_Food_C_ExecuteUbergraph_UI_SCAB_Food_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
