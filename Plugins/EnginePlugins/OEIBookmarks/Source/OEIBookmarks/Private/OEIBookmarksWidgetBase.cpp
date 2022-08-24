#include "OEIBookmarksWidgetBase.h"

class UOEIBookmarkEntryBase;
class UOEIBookmarkEntryFolder;
class UOEIBookmarkEntryItem;

void UOEIBookmarksWidgetBase::OnSearchButtonClicked() {
}

void UOEIBookmarksWidgetBase::OnRenameFolderClicked(const FString& OldName, const FString& NewName) {
}

void UOEIBookmarksWidgetBase::OnOpenFileButtonClicked() {
}

void UOEIBookmarksWidgetBase::OnMapOpened(const FString& Filename, bool bAsTemplate) {
}

void UOEIBookmarksWidgetBase::OnMapFilterToggleChanged(bool Checked) {
}

void UOEIBookmarksWidgetBase::OnFolderOpenCloseClicked(const FString& FolderName, bool bIsOpen) {
}

void UOEIBookmarksWidgetBase::OnFolderDeleteButtonClicked(const FString& FolderName) {
}

void UOEIBookmarksWidgetBase::OnEntryUpdateButtonClicked(FOEIEditorBookmark& OriginalBookmark, FOEIEditorBookmark& UpdatedBookmark, const FString& OwningFolderName) {
}

void UOEIBookmarksWidgetBase::OnEntryDeleteButtonClicked(FOEIEditorBookmark& InBookmark, const FString& OwningFolderName) {
}

void UOEIBookmarksWidgetBase::OnClearSearchButtonClicked() {
}

void UOEIBookmarksWidgetBase::OnAnyEntryClicked(UOEIBookmarkEntryBase* ClickedEntry) {
}

void UOEIBookmarksWidgetBase::OnAddFromClipboardButtonClicked(const FString& FolderName) {
}

void UOEIBookmarksWidgetBase::OnAddFolderClicked(const FString& FolderName) {
}

void UOEIBookmarksWidgetBase::OnAddBookmarkClicked(const FString& Folder) {
}

UOEIBookmarkEntryBase* UOEIBookmarksWidgetBase::FindWidget(const FString& FolderName, const FOEIEditorBookmark& BookmarkInfo) {
    return NULL;
}

UOEIBookmarkEntryFolder* UOEIBookmarksWidgetBase::CreateBookmarkFolderWidget(const FString& InFolderName, int32 Depth) {
    return NULL;
}

UOEIBookmarkEntryItem* UOEIBookmarksWidgetBase::CreateBookmarkEntryWidget(FOEIEditorBookmark& BookMark, const FString& OwningFolderName, int32 Depth) {
    return NULL;
}

UOEIBookmarksWidgetBase::UOEIBookmarksWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Switcher = NULL;
    this->SearchBox = NULL;
    this->SearchButton = NULL;
    this->ClearSearchButton = NULL;
    this->BookmarksScrollBox = NULL;
    this->EntryWidgetClass = NULL;
    this->FolderEntryWidgetClass = NULL;
    this->OpenFileButton = NULL;
    this->FilterByMapToggle = NULL;
    this->LastClickedEntry = NULL;
}

