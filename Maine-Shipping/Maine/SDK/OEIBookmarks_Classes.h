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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OEIBookmarks.OEIBookmarkEntryBase
	 * Size -> 0x0068 (FullSize[0x02D0] - InheritedSize[0x0268])
	 */
	class UOEIBookmarkEntryBase : public UUserWidget
	{
	public:
		class UTextBlock*                                          Name;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEditableTextBox*                                    NewNameBox;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            LeftPadSizeBox;                                          // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Icon;                                                    // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNTL[0x48];                                  // 0x0288(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnAddFromClipboardButtonClicked();
		void OnAddFolderButtonClicked();
		void OnAddBookmarkButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIBookmarks.OEIBookmarkEntryFolder
	 * Size -> 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
	 */
	class UOEIBookmarkEntryFolder : public UOEIBookmarkEntryBase
	{
	public:
		unsigned char                                              UnknownData_47HR[0x48];                                  // 0x02D0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRenameFolderButtonClicked();
		void OnNewNameCommitted(const class FText& Text, ETextCommit CommitMethod);
		void OnGoButtonClicked();
		void OnDeleteButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIBookmarks.OEIBookmarkEntryItem
	 * Size -> 0x0060 (FullSize[0x0330] - InheritedSize[0x02D0])
	 */
	class UOEIBookmarkEntryItem : public UOEIBookmarkEntryBase
	{
	public:
		unsigned char                                              UnknownData_UB5D[0x60];                                  // 0x02D0(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnUpdateButtonClicked();
		void OnRenameButtonClicked();
		void OnNewNameCommitted(const class FText& Text, ETextCommit CommitMethod);
		void OnGoButtonClicked();
		void OnEditButtonClicked();
		void OnDeleteButtonClicked();
		void OnCreateOEILinkButtonClicked();
		void OnCreateBugItGoButtonClicked();
		void OnCopyButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OEIBookmarks.OEIBookmarksStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIBookmarksStatics : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIBookmarks.OEIBookmarksWidgetBase
	 * Size -> 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
	 */
	class UOEIBookmarksWidgetBase : public UUserWidget
	{
	public:
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEditableTextBox*                                    SearchBox;                                               // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             SearchButton;                                            // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             ClearSearchButton;                                       // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          BookmarksScrollBox;                                      // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EntryWidgetClass;                                        // 0x0290(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FolderEntryWidgetClass;                                  // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             OpenFileButton;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCheckBox*                                           FilterByMapToggle;                                       // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOEIEditorBookmarks                                 BookmarksData;                                           // 0x02B0(0x0010) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CEN[0x48];                                  // 0x02C0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnSearchButtonClicked();
		void OnRenameFolderClicked(const class FString& OldName, const class FString& NewName);
		void OnOpenFileButtonClicked();
		void OnMapOpened(const class FString& Filename, bool bAsTemplate);
		void OnMapFilterToggleChanged(bool Checked);
		void OnFolderDeleteButtonClicked(const class FString& FolderName);
		void OnEntryUpdateButtonClicked(struct FOEIEditorBookmark* OriginalBookmark, struct FOEIEditorBookmark* UpdatedBookmark, const class FString& OwningFolderName);
		void OnEntryDeleteButtonClicked(struct FOEIEditorBookmark* InBookmark, const class FString& OwningFolderName);
		void OnClearSearchButtonClicked();
		void OnAddFromClipboardButtonClicked(const class FString& FolderName);
		void OnAddFolderClicked(const class FString& FolderName);
		void OnAddBookmarkClicked(const class FString& Folder);
		class UOEIBookmarkEntryFolder* CreateBookmarkFolderWidget(const class FString& InFolderName, int32_t Depth);
		class UOEIBookmarkEntryItem* CreateBookmarkEntryWidget(struct FOEIEditorBookmark* BookMark, const class FString& OwningFolderName, int32_t Depth);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
