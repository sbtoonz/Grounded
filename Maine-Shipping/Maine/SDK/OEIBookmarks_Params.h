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
	 * Function OEIBookmarks.OEIBookmarkEntryBase.OnAddFromClipboardButtonClicked
	 */
	struct UOEIBookmarkEntryBase_OnAddFromClipboardButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryBase.OnAddFolderButtonClicked
	 */
	struct UOEIBookmarkEntryBase_OnAddFolderButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryBase.OnAddBookmarkButtonClicked
	 */
	struct UOEIBookmarkEntryBase_OnAddBookmarkButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryFolder.OnRenameFolderButtonClicked
	 */
	struct UOEIBookmarkEntryFolder_OnRenameFolderButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryFolder.OnNewNameCommitted
	 */
	struct UOEIBookmarkEntryFolder_OnNewNameCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryFolder.OnGoButtonClicked
	 */
	struct UOEIBookmarkEntryFolder_OnGoButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryFolder.OnDeleteButtonClicked
	 */
	struct UOEIBookmarkEntryFolder_OnDeleteButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnUpdateButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnUpdateButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnRenameButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnRenameButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnNewNameCommitted
	 */
	struct UOEIBookmarkEntryItem_OnNewNameCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnGoButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnGoButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnEditButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnEditButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnDeleteButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnDeleteButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnCreateOEILinkButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnCreateOEILinkButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnCreateBugItGoButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnCreateBugItGoButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarkEntryItem.OnCopyButtonClicked
	 */
	struct UOEIBookmarkEntryItem_OnCopyButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnSearchButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnSearchButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnRenameFolderClicked
	 */
	struct UOEIBookmarksWidgetBase_OnRenameFolderClicked_Params
	{
	public:
		class FString                                              OldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewName;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnOpenFileButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnMapOpened
	 */
	struct UOEIBookmarksWidgetBase_OnMapOpened_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAsTemplate;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnMapFilterToggleChanged
	 */
	struct UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnFolderDeleteButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Params
	{
	public:
		class FString                                              FolderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnEntryUpdateButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Params
	{
	public:
		struct FOEIEditorBookmark                                  OriginalBookmark;                                        // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FOEIEditorBookmark                                  UpdatedBookmark;                                         // 0x0038(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              OwningFolderName;                                        // 0x0070(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnEntryDeleteButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Params
	{
	public:
		struct FOEIEditorBookmark                                  InBookmark;                                              // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              OwningFolderName;                                        // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnClearSearchButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Params
	{	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddFromClipboardButtonClicked
	 */
	struct UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Params
	{
	public:
		class FString                                              FolderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddFolderClicked
	 */
	struct UOEIBookmarksWidgetBase_OnAddFolderClicked_Params
	{
	public:
		class FString                                              FolderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.OnAddBookmarkClicked
	 */
	struct UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Params
	{
	public:
		class FString                                              Folder;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.CreateBookmarkFolderWidget
	 */
	struct UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Params
	{
	public:
		class FString                                              InFolderName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Depth;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9CUX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOEIBookmarkEntryFolder*                             ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIBookmarks.OEIBookmarksWidgetBase.CreateBookmarkEntryWidget
	 */
	struct UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Params
	{
	public:
		struct FOEIEditorBookmark                                  BookMark;                                                // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              OwningFolderName;                                        // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Depth;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NOAQ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOEIBookmarkEntryItem*                               ReturnValue;                                             // 0x0050(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
