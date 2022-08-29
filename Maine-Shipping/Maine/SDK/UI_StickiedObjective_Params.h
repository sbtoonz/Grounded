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
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.EvaluateVisibility
	 */
	struct UUI_StickiedObjective_C_EvaluateVisibility_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.GetObjectiveFGColor
	 */
	struct UUI_StickiedObjective_C_GetObjectiveFGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.GetIconDarkener
	 */
	struct UUI_StickiedObjective_C_GetIconDarkener_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.GetShadowColor
	 */
	struct UUI_StickiedObjective_C_GetShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.GetObjectiveColor
	 */
	struct UUI_StickiedObjective_C_GetObjectiveColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.Construct
	 */
	struct UUI_StickiedObjective_C_Construct_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.Tick
	 */
	struct UUI_StickiedObjective_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.InitializeQuestData
	 */
	struct UUI_StickiedObjective_C_InitializeQuestData_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveComplete
	 */
	struct UUI_StickiedObjective_C_OnObjectiveComplete_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObjective*                                          ObjectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveActivated
	 */
	struct UUI_StickiedObjective_C_OnObjectiveActivated_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObjective*                                          ObjectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnQuestStarted
	 */
	struct UUI_StickiedObjective_C_OnQuestStarted_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnStickiedQuestsChanged
	 */
	struct UUI_StickiedObjective_C_OnStickiedQuestsChanged_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.Destruct
	 */
	struct UUI_StickiedObjective_C_Destruct_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnBurgleQuestChanged
	 */
	struct UUI_StickiedObjective_C_OnBurgleQuestChanged_Params
	{
	public:
		class UBurgleQuestManagerComponent*                        Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveUpdated_Event_1
	 */
	struct UUI_StickiedObjective_C_OnObjectiveUpdated_Event_1_Params
	{
	public:
		class UBurgleQuestInstance*                                Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseObjective*                                      ObjectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.RefreshStickyQuests
	 */
	struct UUI_StickiedObjective_C_RefreshStickyQuests_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.OnQuestReplicationUpdate
	 */
	struct UUI_StickiedObjective_C_OnQuestReplicationUpdate_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.BindPlayerEvent
	 */
	struct UUI_StickiedObjective_C_BindPlayerEvent_Params
	{	};

	/**
	 * Function UI_StickiedObjective.UI_StickiedObjective_C.ExecuteUbergraph_UI_StickiedObjective
	 */
	struct UUI_StickiedObjective_C_ExecuteUbergraph_UI_StickiedObjective_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
