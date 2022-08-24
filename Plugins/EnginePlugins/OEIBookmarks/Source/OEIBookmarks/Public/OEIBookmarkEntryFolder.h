#pragma once
#include "CoreMinimal.h"
#include "OEIBookmarkEntryBase.h"
#include "Types/SlateEnums.h"
#include "OEIBookmarkEntryFolder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OEIBOOKMARKS_API UOEIBookmarkEntryFolder : public UOEIBookmarkEntryBase {
    GENERATED_BODY()
public:
    UOEIBookmarkEntryFolder();
    UFUNCTION(BlueprintCallable)
    void OnRenameFolderButtonClicked();
    
private:
    UFUNCTION()
    void OnNewNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnGoButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteButtonClicked();
    
};

