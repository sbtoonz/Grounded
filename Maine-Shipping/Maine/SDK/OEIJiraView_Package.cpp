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
	 * 		Name   -> PredefinedFunction AJiraIssueActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJiraIssueActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIJiraView.JiraIssueActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIJiraView.JiraIssueWidget.OnSetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJiraIssueWidget::OnSetTitle(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIJiraView.JiraIssueWidget.OnSetTitle");
		
		UJiraIssueWidget_OnSetTitle_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIJiraView.JiraIssueWidget.OnSetNoteTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJiraViewIssueType                                 NoteType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJiraIssueWidget::OnSetNoteTypeIcon(EJiraViewIssueType NoteType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIJiraView.JiraIssueWidget.OnSetNoteTypeIcon");
		
		UJiraIssueWidget_OnSetNoteTypeIcon_Params params {};
		params.NoteType = NoteType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIJiraView.JiraIssueWidget.OnSetNotePriorityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJiraViewIssuePriority                             NoteType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJiraIssueWidget::OnSetNotePriorityIcon(EJiraViewIssuePriority NoteType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIJiraView.JiraIssueWidget.OnSetNotePriorityIcon");
		
		UJiraIssueWidget_OnSetNotePriorityIcon_Params params {};
		params.NoteType = NoteType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIJiraView.JiraIssueWidget.OnSetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJiraIssueWidget::OnSetDescription(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIJiraView.JiraIssueWidget.OnSetDescription");
		
		UJiraIssueWidget_OnSetDescription_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIJiraView.JiraIssueWidget.OnSetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJiraIssueWidget::OnSetBackgroundColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIJiraView.JiraIssueWidget.OnSetBackgroundColor");
		
		UJiraIssueWidget_OnSetBackgroundColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJiraIssueWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJiraIssueWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIJiraView.JiraIssueWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJiraIssueWidgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJiraIssueWidgetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIJiraView.JiraIssueWidgetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIJiraViewSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIJiraViewSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIJiraView.OEIJiraViewSettings");
		return ptr;
	}

}


