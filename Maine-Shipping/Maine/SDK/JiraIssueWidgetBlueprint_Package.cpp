/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetNoteTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NoteType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJiraIssueWidgetBlueprint_C::OnSetNoteTypeIcon(unsigned char NoteType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetNoteTypeIcon");
		
		UJiraIssueWidgetBlueprint_C_OnSetNoteTypeIcon_Params params {};
		params.NoteType = NoteType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetNotePriorityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Note_Priority                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJiraIssueWidgetBlueprint_C::OnSetNotePriorityIcon(unsigned char Note_Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetNotePriorityIcon");
		
		UJiraIssueWidgetBlueprint_C_OnSetNotePriorityIcon_Params params {};
		params.Note_Priority = Note_Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UJiraIssueWidgetBlueprint_C::OnSetDescription(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetDescription");
		
		UJiraIssueWidgetBlueprint_C_OnSetDescription_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UJiraIssueWidgetBlueprint_C::OnSetTitle(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.OnSetTitle");
		
		UJiraIssueWidgetBlueprint_C_OnSetTitle_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.ExecuteUbergraph_JiraIssueWidgetBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJiraIssueWidgetBlueprint_C::ExecuteUbergraph_JiraIssueWidgetBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C.ExecuteUbergraph_JiraIssueWidgetBlueprint");
		
		UJiraIssueWidgetBlueprint_C_ExecuteUbergraph_JiraIssueWidgetBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJiraIssueWidgetBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJiraIssueWidgetBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JiraIssueWidgetBlueprint.JiraIssueWidgetBlueprint_C");
		return ptr;
	}

}


