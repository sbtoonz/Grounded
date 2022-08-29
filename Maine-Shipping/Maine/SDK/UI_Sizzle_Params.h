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
	 * Function UI_Sizzle.UI_Sizzle_C.GetBreathSecondsLeft
	 */
	struct UUI_Sizzle_C_GetBreathSecondsLeft_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBZ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.GetBreathRatio
	 */
	struct UUI_Sizzle_C_GetBreathRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F0H3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.GetFillColor
	 */
	struct UUI_Sizzle_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.OnGlobalColorChange
	 */
	struct UUI_Sizzle_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.Tick
	 */
	struct UUI_Sizzle_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.OnVisibilityChangedEvent
	 */
	struct UUI_Sizzle_C_OnVisibilityChangedEvent_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.Construct
	 */
	struct UUI_Sizzle_C_Construct_Params
	{	};

	/**
	 * Function UI_Sizzle.UI_Sizzle_C.ExecuteUbergraph_UI_Sizzle
	 */
	struct UUI_Sizzle_C_ExecuteUbergraph_UI_Sizzle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
