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
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1
	 */
	struct UUI_ObjectiveNotification_C_SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1_Params
	{	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyObjectiveUpdated
	 */
	struct UUI_ObjectiveNotification_C_NotifyObjectiveUpdated_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseObjective*                                      Objective;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyObjectiveComplete
	 */
	struct UUI_ObjectiveNotification_C_NotifyObjectiveComplete_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseObjective*                                      Objective;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyQuestComplete
	 */
	struct UUI_ObjectiveNotification_C_NotifyQuestComplete_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyQuestStarted
	 */
	struct UUI_ObjectiveNotification_C_NotifyQuestStarted_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.InitializeObjectives
	 */
	struct UUI_ObjectiveNotification_C_InitializeObjectives_Params
	{
	public:
		TArray<class UBaseObjective*>                              Objectives;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.HasQueuedQuestNotifications
	 */
	struct UUI_ObjectiveNotification_C_HasQueuedQuestNotifications_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBOR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetObjectiveFGColor
	 */
	struct UUI_ObjectiveNotification_C_GetObjectiveFGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetIconDarkener
	 */
	struct UUI_ObjectiveNotification_C_GetIconDarkener_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetShadowColor
	 */
	struct UUI_ObjectiveNotification_C_GetShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnObjectiveUpdateComplete
	 */
	struct UUI_ObjectiveNotification_C_OnObjectiveUpdateComplete_Params
	{	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetObjectiveColor
	 */
	struct UUI_ObjectiveNotification_C_GetObjectiveColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.Construct
	 */
	struct UUI_ObjectiveNotification_C_Construct_Params
	{	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnQuestStarted
	 */
	struct UUI_ObjectiveNotification_C_OnQuestStarted_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnQuestComplete
	 */
	struct UUI_ObjectiveNotification_C_OnQuestComplete_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnObjectiveComplete
	 */
	struct UUI_ObjectiveNotification_C_OnObjectiveComplete_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObjective*                                          ObjectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.InitializeQuestData
	 */
	struct UUI_ObjectiveNotification_C_InitializeQuestData_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.SignalQuestUpdate
	 */
	struct UUI_ObjectiveNotification_C_SignalQuestUpdate_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnGlobalColorChange
	 */
	struct UUI_ObjectiveNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.ProcessQueuedQuestNotification
	 */
	struct UUI_ObjectiveNotification_C_ProcessQueuedQuestNotification_Params
	{	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleQuestStarted
	 */
	struct UUI_ObjectiveNotification_C_OnBurgleQuestStarted_Params
	{
	public:
		class UBurgleQuestInstance*                                Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleQuestComplete
	 */
	struct UUI_ObjectiveNotification_C_OnBurgleQuestComplete_Params
	{
	public:
		class UBurgleQuestInstance*                                Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleObjectiveComplete
	 */
	struct UUI_ObjectiveNotification_C_OnBurgleObjectiveComplete_Params
	{
	public:
		class UBurgleQuestInstance*                                Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseObjective*                                      ObjectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleObjectiveUpdated
	 */
	struct UUI_ObjectiveNotification_C_OnBurgleObjectiveUpdated_Params
	{
	public:
		class UBurgleQuestInstance*                                Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseObjective*                                      ObjectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.ExecuteUbergraph_UI_ObjectiveNotification
	 */
	struct UUI_ObjectiveNotification_C_ExecuteUbergraph_UI_ObjectiveNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NWRQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
