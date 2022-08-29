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
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.GetScienceColor
	 */
	struct UUI_ScienceTotal_C_GetScienceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.BindPlayerEvents
	 */
	struct UUI_ScienceTotal_C_BindPlayerEvents_Params
	{
	public:
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.Tick
	 */
	struct UUI_ScienceTotal_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.OnScienceChanged
	 */
	struct UUI_ScienceTotal_C_OnScienceChanged_Params
	{
	public:
		int32_t                                                    ScienceAdded;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalScience;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.TriggerAnimation
	 */
	struct UUI_ScienceTotal_C_TriggerAnimation_Params
	{	};

	/**
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.OnGlobalColorChange
	 */
	struct UUI_ScienceTotal_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ScienceTotal.UI_ScienceTotal_C.ExecuteUbergraph_UI_ScienceTotal
	 */
	struct UUI_ScienceTotal_C_ExecuteUbergraph_UI_ScienceTotal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FQKY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
