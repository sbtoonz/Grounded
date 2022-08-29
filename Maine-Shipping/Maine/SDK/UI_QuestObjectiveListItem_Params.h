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
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.IsBurgleQuestObjective
	 */
	struct UUI_QuestObjectiveListItem_C_IsBurgleQuestObjective_Params
	{
	public:
		class UBaseObjective*                                      Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBurgleObjective;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5MK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.GetDisabledColor
	 */
	struct UUI_QuestObjectiveListItem_C_GetDisabledColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.GetBasicText
	 */
	struct UUI_QuestObjectiveListItem_C_GetBasicText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Initialize
	 */
	struct UUI_QuestObjectiveListItem_C_Initialize_Params
	{
	public:
		class UBaseObjective*                                      Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Construct
	 */
	struct UUI_QuestObjectiveListItem_C_Construct_Params
	{	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.OnGlobalColorChange
	 */
	struct UUI_QuestObjectiveListItem_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.OnLanguageChanged
	 */
	struct UUI_QuestObjectiveListItem_C_OnLanguageChanged_Params
	{	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Destruct
	 */
	struct UUI_QuestObjectiveListItem_C_Destruct_Params
	{	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.UpdateText
	 */
	struct UUI_QuestObjectiveListItem_C_UpdateText_Params
	{	};

	/**
	 * Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.ExecuteUbergraph_UI_QuestObjectiveListItem
	 */
	struct UUI_QuestObjectiveListItem_C_ExecuteUbergraph_UI_QuestObjectiveListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
