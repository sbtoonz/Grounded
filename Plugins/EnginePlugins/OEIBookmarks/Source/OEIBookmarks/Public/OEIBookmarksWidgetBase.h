#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "OEIEditorBookmarks.h"
#include "OEIEditorBookmark.h"
#include "OEIBookmarksWidgetBase.generated.h"

class UOEIBookmarkEntryFolder;
class UEditableTextBox;
class UOEIBookmarkEntryItem;
class UWidgetSwitcher;
class UScrollBox;
class UButton;
class UCheckBox;
class UOEIBookmarkEntryBase;

UCLASS(Blueprintable, EditInlineNew)
class OEIBOOKMARKS_API UOEIBookmarksWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SearchBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* SearchButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* ClearSearchButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BookmarksScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOEIBookmarkEntryItem> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOEIBookmarkEntryFolder> FolderEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* OpenFileButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBox* FilterByMapToggle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIEditorBookmarks BookmarksData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOEIBookmarkEntryBase* LastClickedEntry;
    
public:
    UOEIBookmarksWidgetBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnSearchButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnRenameFolderClicked(const FString& OldName, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenFileButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnMapOpened(const FString& Filename, bool bAsTemplate);
    
    UFUNCTION(BlueprintCallable)
    void OnMapFilterToggleChanged(bool Checked);
    
    UFUNCTION(BlueprintCallable)
    void OnFolderOpenCloseClicked(const FString& FolderName, bool bIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnFolderDeleteButtonClicked(const FString& FolderName);
    
    UFUNCTION(BlueprintCallable)
    void OnEntryUpdateButtonClicked(FOEIEditorBookmark& OriginalBookmark, FOEIEditorBookmark& UpdatedBookmark, const FString& OwningFolderName);
    
    UFUNCTION(BlueprintCallable)
    void OnEntryDeleteButtonClicked(FOEIEditorBookmark& InBookmark, const FString& OwningFolderName);
    
    UFUNCTION(BlueprintCallable)
    void OnClearSearchButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyEntryClicked(UOEIBookmarkEntryBase* ClickedEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAddFromClipboardButtonClicked(const FString& FolderName);
    
    UFUNCTION(BlueprintCallable)
    void OnAddFolderClicked(const FString& FolderName);
    
    UFUNCTION(BlueprintCallable)
    void OnAddBookmarkClicked(const FString& Folder);
    
    UFUNCTION(BlueprintCallable)
    UOEIBookmarkEntryBase* FindWidget(const FString& FolderName, const FOEIEditorBookmark& BookmarkInfo);
    
    UFUNCTION(BlueprintCallable)
    UOEIBookmarkEntryFolder* CreateBookmarkFolderWidget(const FString& InFolderName, int32 Depth);
    
    UFUNCTION(BlueprintCallable)
    UOEIBookmarkEntryItem* CreateBookmarkEntryWidget(FOEIEditorBookmark& BookMark, const FString& OwningFolderName, int32 Depth);
    
};

