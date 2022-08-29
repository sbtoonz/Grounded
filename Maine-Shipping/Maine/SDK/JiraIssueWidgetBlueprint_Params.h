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
	 * Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetNoteTypeIcon
	 */
	struct UJiraIssueWidgetBlueprint_C_OnSetNoteTypeIcon_Params
	{
	public:
		unsigned char                                              NoteType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetNotePriorityIcon
	 */
	struct UJiraIssueWidgetBlueprint_C_OnSetNotePriorityIcon_Params
	{
	public:
		unsigned char                                              Note_Priority;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetDescription
	 */
	struct UJiraIssueWidgetBlueprint_C_OnSetDescription_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetTitle
	 */
	struct UJiraIssueWidgetBlueprint_C_OnSetTitle_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.ExecuteUbergraph_JiraIssueWidgetBlueprint
	 */
	struct UJiraIssueWidgetBlueprint_C_ExecuteUbergraph_JiraIssueWidgetBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
