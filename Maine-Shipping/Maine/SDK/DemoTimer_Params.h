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
	 * Function DemoTimer.DemoTimer_C.GetWarningColor
	 */
	struct UDemoTimer_C_GetWarningColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DemoTimer.DemoTimer_C.Construct
	 */
	struct UDemoTimer_C_Construct_Params
	{	};

	/**
	 * Function DemoTimer.DemoTimer_C.Tick
	 */
	struct UDemoTimer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoTimer.DemoTimer_C.OnGlobalColorChange
	 */
	struct UDemoTimer_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function DemoTimer.DemoTimer_C.ShowWhenNotPaused
	 */
	struct UDemoTimer_C_ShowWhenNotPaused_Params
	{	};

	/**
	 * Function DemoTimer.DemoTimer_C.ShowTimerOnMinuteChanged
	 */
	struct UDemoTimer_C_ShowTimerOnMinuteChanged_Params
	{
	public:
		int32_t                                                    NewMinute;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoTimer.DemoTimer_C.ExecuteUbergraph_DemoTimer
	 */
	struct UDemoTimer_C_ExecuteUbergraph_DemoTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
