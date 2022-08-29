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
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.GetScienceColor
	 */
	struct UUI_ScienceFoundNotification_C_GetScienceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.BindPlayerEvents
	 */
	struct UUI_ScienceFoundNotification_C_BindPlayerEvents_Params
	{	};

	/**
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.Construct
	 */
	struct UUI_ScienceFoundNotification_C_Construct_Params
	{	};

	/**
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.OnScienceChanged
	 */
	struct UUI_ScienceFoundNotification_C_OnScienceChanged_Params
	{
	public:
		int32_t                                                    ScienceAdded;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalScience;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.OnGlobalColorChange
	 */
	struct UUI_ScienceFoundNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.FinishScienceAnim
	 */
	struct UUI_ScienceFoundNotification_C_FinishScienceAnim_Params
	{	};

	/**
	 * Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.ExecuteUbergraph_UI_ScienceFoundNotification
	 */
	struct UUI_ScienceFoundNotification_C_ExecuteUbergraph_UI_ScienceFoundNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
