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
	 * Function UI_QuestListItem.UI_QuestListItem_C.GetObjectives
	 */
	struct UUI_QuestListItem_C_GetObjectives_Params
	{
	public:
		TArray<class UBaseObjective*>                              Objective;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.GetDisplayDescription
	 */
	struct UUI_QuestListItem_C_GetDisplayDescription_Params
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.GetDisplayName
	 */
	struct UUI_QuestListItem_C_GetDisplayName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.GetCompletedColor
	 */
	struct UUI_QuestListItem_C_GetCompletedColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetUnhoverStyle
	 */
	struct UUI_QuestListItem_C_SetUnhoverStyle_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetHoverStyle
	 */
	struct UUI_QuestListItem_C_SetHoverStyle_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetDisabledStyle
	 */
	struct UUI_QuestListItem_C_SetDisabledStyle_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetEnabledStyle
	 */
	struct UUI_QuestListItem_C_SetEnabledStyle_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.GetAttentionColor
	 */
	struct UUI_QuestListItem_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.GetHeaderColor
	 */
	struct UUI_QuestListItem_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.Initialize
	 */
	struct UUI_QuestListItem_C_Initialize_Params
	{
	public:
		class UBaseQuest*                                          Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetQuestComplete
	 */
	struct UUI_QuestListItem_C_SetQuestComplete_Params
	{
	public:
		bool                                                       Complete;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetIsValid
	 */
	struct UUI_QuestListItem_C_SetIsValid_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_QuestListItem_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_QuestListItem_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetIsStickied
	 */
	struct UUI_QuestListItem_C_SetIsStickied_Params
	{
	public:
		bool                                                       IsStickied;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.OnAddedToFocusPath
	 */
	struct UUI_QuestListItem_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetSelected
	 */
	struct UUI_QuestListItem_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.Construct
	 */
	struct UUI_QuestListItem_C_Construct_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.OnGlobalColorChange
	 */
	struct UUI_QuestListItem_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.SetIsTutorial
	 */
	struct UUI_QuestListItem_C_SetIsTutorial_Params
	{
	public:
		bool                                                       IsTutorial;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.OnRemovedFromFocusPath
	 */
	struct UUI_QuestListItem_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_QuestListItem_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.ExecuteUbergraph_UI_QuestListItem
	 */
	struct UUI_QuestListItem_C_ExecuteUbergraph_UI_QuestListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuestListItem.UI_QuestListItem_C.OnFocused__DelegateSignature
	 */
	struct UUI_QuestListItem_C_OnFocused__DelegateSignature_Params
	{
	public:
		class UUI_QuestListItem_C*                                 QuestListItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
