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
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.SetLargeFont
	 */
	struct UUI_LabeledActionWidget_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.GetNarration
	 */
	struct UUI_LabeledActionWidget_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G0IS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.OnGlobalColorChange
	 */
	struct UUI_LabeledActionWidget_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.PreConstruct
	 */
	struct UUI_LabeledActionWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.Construct
	 */
	struct UUI_LabeledActionWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.Destruct
	 */
	struct UUI_LabeledActionWidget_C_Destruct_Params
	{	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.EventLargeFonts
	 */
	struct UUI_LabeledActionWidget_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LabeledActionWidget.UI_LabeledActionWidget_C.ExecuteUbergraph_UI_LabeledActionWidget
	 */
	struct UUI_LabeledActionWidget_C_ExecuteUbergraph_UI_LabeledActionWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
