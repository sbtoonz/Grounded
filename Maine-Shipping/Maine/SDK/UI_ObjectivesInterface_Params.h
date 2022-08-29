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
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.HandleKeyEventChord
	 */
	struct UUI_ObjectivesInterface_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.HandlePinnedStartingState
	 */
	struct UUI_ObjectivesInterface_C_HandlePinnedStartingState_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.ToggleSelectedStickyQuest
	 */
	struct UUI_ObjectivesInterface_C_ToggleSelectedStickyQuest_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetQuestListItemForQuest
	 */
	struct UUI_ObjectivesInterface_C_GetQuestListItemForQuest_Params
	{
	public:
		class UBaseQuest*                                          BaseQuest;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_QuestListItem_C*                                 QuestListItem;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetQuestContainer
	 */
	struct UUI_ObjectivesInterface_C_GetQuestContainer_Params
	{
	public:
		bool                                                       Completed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FKNT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPanelWidget*                                        Container;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.CreateQuestListItemWidget
	 */
	struct UUI_ObjectivesInterface_C_CreateQuestListItemWidget_Params
	{
	public:
		class UUI_QuestListItem_C*                                 Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetAccentOne
	 */
	struct UUI_ObjectivesInterface_C_GetAccentOne_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetGlobalDarkener
	 */
	struct UUI_ObjectivesInterface_C_GetGlobalDarkener_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.PopulateAllQuests
	 */
	struct UUI_ObjectivesInterface_C_PopulateAllQuests_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetBasicText
	 */
	struct UUI_ObjectivesInterface_C_GetBasicText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetAccentTwo
	 */
	struct UUI_ObjectivesInterface_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshBottomButtons
	 */
	struct UUI_ObjectivesInterface_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetHeaderColor
	 */
	struct UUI_ObjectivesInterface_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.PopulateQuestsOfType
	 */
	struct UUI_ObjectivesInterface_C_PopulateQuestsOfType_Params
	{
	public:
		bool                                                       CompletedQuests;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XOL9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshUI
	 */
	struct UUI_ObjectivesInterface_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_ObjectivesInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.OnQuestFocused
	 */
	struct UUI_ObjectivesInterface_C_OnQuestFocused_Params
	{
	public:
		class UUI_QuestListItem_C*                                 QuestListItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SetSelectedQuest
	 */
	struct UUI_ObjectivesInterface_C_SetSelectedQuest_Params
	{
	public:
		class UUI_QuestListItem_C*                                 SelectedQuest;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SelectQuestByIndex
	 */
	struct UUI_ObjectivesInterface_C_SelectQuestByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SelectQuest
	 */
	struct UUI_ObjectivesInterface_C_SelectQuest_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_ObjectivesInterface_C_BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshQuests
	 */
	struct UUI_ObjectivesInterface_C_RefreshQuests_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_ObjectivesInterface_C_BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.OnGlobalColorChange
	 */
	struct UUI_ObjectivesInterface_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.Construct
	 */
	struct UUI_ObjectivesInterface_C_Construct_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.EventLargeFont
	 */
	struct UUI_ObjectivesInterface_C_EventLargeFont_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.Destruct
	 */
	struct UUI_ObjectivesInterface_C_Destruct_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.NotifyStickiedQuestsChanged
	 */
	struct UUI_ObjectivesInterface_C_NotifyStickiedQuestsChanged_Params
	{	};

	/**
	 * Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.ExecuteUbergraph_UI_ObjectivesInterface
	 */
	struct UUI_ObjectivesInterface_C_ExecuteUbergraph_UI_ObjectivesInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QOF1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
