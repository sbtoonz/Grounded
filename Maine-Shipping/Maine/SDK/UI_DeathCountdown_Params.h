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
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.Show
	 */
	struct UUI_DeathCountdown_C_Show_Params
	{	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.Hide
	 */
	struct UUI_DeathCountdown_C_Hide_Params
	{	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.GetNarration
	 */
	struct UUI_DeathCountdown_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XCFN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.UpdateWarningImageVisibility
	 */
	struct UUI_DeathCountdown_C_UpdateWarningImageVisibility_Params
	{	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.GetDeathPercent
	 */
	struct UUI_DeathCountdown_C_GetDeathPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UIZT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.Construct
	 */
	struct UUI_DeathCountdown_C_Construct_Params
	{	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.Tick
	 */
	struct UUI_DeathCountdown_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.OnGlobalColorChange
	 */
	struct UUI_DeathCountdown_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.UpdateAll
	 */
	struct UUI_DeathCountdown_C_UpdateAll_Params
	{	};

	/**
	 * Function UI_DeathCountdown.UI_DeathCountdown_C.ExecuteUbergraph_UI_DeathCountdown
	 */
	struct UUI_DeathCountdown_C_ExecuteUbergraph_UI_DeathCountdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
