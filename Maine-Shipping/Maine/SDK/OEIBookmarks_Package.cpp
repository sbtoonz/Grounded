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
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryBase.OnAddFromClipboardButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryBase::OnAddFromClipboardButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryBase.OnAddFromClipboardButtonClicked");
		
		UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryBase.OnAddFolderButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryBase::OnAddFolderButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryBase.OnAddFolderButtonClicked");
		
		UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryBase.OnAddBookmarkButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryBase::OnAddBookmarkButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryBase.OnAddBookmarkButtonClicked");
		
		UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIBookmarkEntryBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIBookmarkEntryBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIBookmarks.OEIBookmarkEntryBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryFolder.OnRenameFolderButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryFolder::OnRenameFolderButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryFolder.OnRenameFolderButtonClicked");
		
		UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryFolder.OnNewNameCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarkEntryFolder::OnNewNameCommitted(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryFolder.OnNewNameCommitted");
		
		UOEIBookmarkEntryFolder_OnNewNameCommitted_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryFolder.OnGoButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryFolder::OnGoButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryFolder.OnGoButtonClicked");
		
		UOEIBookmarkEntryFolder_OnGoButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryFolder.OnDeleteButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryFolder::OnDeleteButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryFolder.OnDeleteButtonClicked");
		
		UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIBookmarkEntryFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIBookmarkEntryFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIBookmarks.OEIBookmarkEntryFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnUpdateButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnUpdateButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnUpdateButtonClicked");
		
		UOEIBookmarkEntryItem_OnUpdateButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnRenameButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnRenameButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnRenameButtonClicked");
		
		UOEIBookmarkEntryItem_OnRenameButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnNewNameCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarkEntryItem::OnNewNameCommitted(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnNewNameCommitted");
		
		UOEIBookmarkEntryItem_OnNewNameCommitted_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnGoButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnGoButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnGoButtonClicked");
		
		UOEIBookmarkEntryItem_OnGoButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnEditButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnEditButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnEditButtonClicked");
		
		UOEIBookmarkEntryItem_OnEditButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnDeleteButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnDeleteButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnDeleteButtonClicked");
		
		UOEIBookmarkEntryItem_OnDeleteButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnCreateOEILinkButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnCreateOEILinkButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnCreateOEILinkButtonClicked");
		
		UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnCreateBugItGoButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnCreateBugItGoButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnCreateBugItGoButtonClicked");
		
		UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarkEntryItem.OnCopyButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarkEntryItem::OnCopyButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarkEntryItem.OnCopyButtonClicked");
		
		UOEIBookmarkEntryItem_OnCopyButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIBookmarkEntryItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIBookmarkEntryItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIBookmarks.OEIBookmarkEntryItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIBookmarksStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIBookmarksStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIBookmarks.OEIBookmarksStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnSearchButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarksWidgetBase::OnSearchButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnSearchButtonClicked");
		
		UOEIBookmarksWidgetBase_OnSearchButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnRenameFolderClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OldName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnRenameFolderClicked(const class FString& OldName, const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnRenameFolderClicked");
		
		UOEIBookmarksWidgetBase_OnRenameFolderClicked_Params params {};
		params.OldName = OldName;
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnOpenFileButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarksWidgetBase::OnOpenFileButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnOpenFileButtonClicked");
		
		UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnMapOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAsTemplate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnMapOpened(const class FString& Filename, bool bAsTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnMapOpened");
		
		UOEIBookmarksWidgetBase_OnMapOpened_Params params {};
		params.Filename = Filename;
		params.bAsTemplate = bAsTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnMapFilterToggleChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnMapFilterToggleChanged(bool Checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnMapFilterToggleChanged");
		
		UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Params params {};
		params.Checked = Checked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnFolderDeleteButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnFolderDeleteButtonClicked(const class FString& FolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnFolderDeleteButtonClicked");
		
		UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Params params {};
		params.FolderName = FolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnEntryUpdateButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOEIEditorBookmark                          OriginalBookmark                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FOEIEditorBookmark                          UpdatedBookmark                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OwningFolderName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnEntryUpdateButtonClicked(struct FOEIEditorBookmark* OriginalBookmark, struct FOEIEditorBookmark* UpdatedBookmark, const class FString& OwningFolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnEntryUpdateButtonClicked");
		
		UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Params params {};
		params.OwningFolderName = OwningFolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalBookmark != nullptr)
			*OriginalBookmark = params.OriginalBookmark;
		if (UpdatedBookmark != nullptr)
			*UpdatedBookmark = params.UpdatedBookmark;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnEntryDeleteButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOEIEditorBookmark                          InBookmark                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OwningFolderName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnEntryDeleteButtonClicked(struct FOEIEditorBookmark* InBookmark, const class FString& OwningFolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnEntryDeleteButtonClicked");
		
		UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Params params {};
		params.OwningFolderName = OwningFolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBookmark != nullptr)
			*InBookmark = params.InBookmark;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnClearSearchButtonClicked
	 * 		Flags  -> ()
	 */
	void UOEIBookmarksWidgetBase::OnClearSearchButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnClearSearchButtonClicked");
		
		UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddFromClipboardButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnAddFromClipboardButtonClicked(const class FString& FolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddFromClipboardButtonClicked");
		
		UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Params params {};
		params.FolderName = FolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddFolderClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnAddFolderClicked(const class FString& FolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddFolderClicked");
		
		UOEIBookmarksWidgetBase_OnAddFolderClicked_Params params {};
		params.FolderName = FolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddBookmarkClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Folder                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIBookmarksWidgetBase::OnAddBookmarkClicked(const class FString& Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddBookmarkClicked");
		
		UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.CreateBookmarkFolderWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InFolderName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOEIBookmarkEntryFolder* UOEIBookmarksWidgetBase::CreateBookmarkFolderWidget(const class FString& InFolderName, int32_t Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.CreateBookmarkFolderWidget");
		
		UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Params params {};
		params.InFolderName = InFolderName;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIBookmarks.OEIBookmarksWidgetBase.CreateBookmarkEntryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOEIEditorBookmark                          BookMark                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OwningFolderName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOEIBookmarkEntryItem* UOEIBookmarksWidgetBase::CreateBookmarkEntryWidget(struct FOEIEditorBookmark* BookMark, const class FString& OwningFolderName, int32_t Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIBookmarks.OEIBookmarksWidgetBase.CreateBookmarkEntryWidget");
		
		UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Params params {};
		params.OwningFolderName = OwningFolderName;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BookMark != nullptr)
			*BookMark = params.BookMark;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIBookmarksWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIBookmarksWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIBookmarks.OEIBookmarksWidgetBase");
		return ptr;
	}

}


