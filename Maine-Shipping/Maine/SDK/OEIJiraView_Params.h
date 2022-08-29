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
	 * Function OEIJiraView.JiraIssueWidget.OnSetTitle
	 */
	struct UJiraIssueWidget_OnSetTitle_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIJiraView.JiraIssueWidget.OnSetNoteTypeIcon
	 */
	struct UJiraIssueWidget_OnSetNoteTypeIcon_Params
	{
	public:
		EJiraViewIssueType                                         NoteType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIJiraView.JiraIssueWidget.OnSetNotePriorityIcon
	 */
	struct UJiraIssueWidget_OnSetNotePriorityIcon_Params
	{
	public:
		EJiraViewIssuePriority                                     NoteType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIJiraView.JiraIssueWidget.OnSetDescription
	 */
	struct UJiraIssueWidget_OnSetDescription_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIJiraView.JiraIssueWidget.OnSetBackgroundColor
	 */
	struct UJiraIssueWidget_OnSetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
