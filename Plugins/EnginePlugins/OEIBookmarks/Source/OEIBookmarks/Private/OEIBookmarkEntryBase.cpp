#include "OEIBookmarkEntryBase.h"

class UOEIBookmarkEntryBase;

void UOEIBookmarkEntryBase::OnEntryClicked(UOEIBookmarkEntryBase* ClickedEntry) {
}

void UOEIBookmarkEntryBase::OnAddFromClipboardButtonClicked() {
}

void UOEIBookmarkEntryBase::OnAddFolderButtonClicked() {
}

void UOEIBookmarkEntryBase::OnAddBookmarkButtonClicked() {
}

UOEIBookmarkEntryBase::UOEIBookmarkEntryBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Name = NULL;
    this->NewNameBox = NULL;
    this->LeftPadSizeBox = NULL;
    this->Icon = NULL;
    this->Highlight = NULL;
}

