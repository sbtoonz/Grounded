#pragma once
#include "CoreMinimal.h"
#include "OEIBookmarkEntryBase.h"
#include "Types/SlateEnums.h"
#include "OEIBookmarkEntryItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OEIBOOKMARKS_API UOEIBookmarkEntryItem : public UOEIBookmarkEntryBase {
    GENERATED_BODY()
public:
    UOEIBookmarkEntryItem();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRenameButtonClicked();
    
private:
    UFUNCTION()
    void OnNewNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnGoButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnEditButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCreateOEILinkButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCreateBugItGoButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCopyButtonClicked();
    
};

