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
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.NewFunction_1
	 */
	struct UUI_TutorialPrompt_C_NewFunction_1_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetFontSize
	 */
	struct UUI_TutorialPrompt_C_GetFontSize_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetNarration
	 */
	struct UUI_TutorialPrompt_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CRY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetTextandIconColor
	 */
	struct UUI_TutorialPrompt_C_GetTextandIconColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.Construct
	 */
	struct UUI_TutorialPrompt_C_Construct_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.SetTutorialData
	 */
	struct UUI_TutorialPrompt_C_SetTutorialData_Params
	{
	public:
		struct FDataTableRowHandle                                 TutorialRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.PlayShowAnimation
	 */
	struct UUI_TutorialPrompt_C_PlayShowAnimation_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.PlayHideAnimation
	 */
	struct UUI_TutorialPrompt_C_PlayHideAnimation_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.QueueTutorial
	 */
	struct UUI_TutorialPrompt_C_QueueTutorial_Params
	{
	public:
		struct FDataTableRowHandle                                 TutorialRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.BindPlayerEvents
	 */
	struct UUI_TutorialPrompt_C_BindPlayerEvents_Params
	{
	public:
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.TutorialComplete
	 */
	struct UUI_TutorialPrompt_C_TutorialComplete_Params
	{
	public:
		struct FDataTableRowHandle                                 TutorialRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.OnTutorialDisplayComplete
	 */
	struct UUI_TutorialPrompt_C_OnTutorialDisplayComplete_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.TryDequeueTutorial
	 */
	struct UUI_TutorialPrompt_C_TryDequeueTutorial_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.OnGlobalColorChange
	 */
	struct UUI_TutorialPrompt_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_TutorialPrompt.UI_TutorialPrompt_C.ExecuteUbergraph_UI_TutorialPrompt
	 */
	struct UUI_TutorialPrompt_C_ExecuteUbergraph_UI_TutorialPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
