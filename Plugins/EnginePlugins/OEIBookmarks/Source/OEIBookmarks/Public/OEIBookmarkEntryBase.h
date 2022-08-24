#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OEIBookmarkEntryBase.generated.h"

class UImage;
class UEditableTextBox;
class UBorder;
class UTextBlock;
class USizeBox;
class UOEIBookmarkEntryBase;

UCLASS(Blueprintable, EditInlineNew)
class OEIBOOKMARKS_API UOEIBookmarkEntryBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditableTextBox* NewNameBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* LeftPadSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBorder* Highlight;
    
    UOEIBookmarkEntryBase();
    UFUNCTION(BlueprintCallable)
    void OnEntryClicked(UOEIBookmarkEntryBase* ClickedEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAddFromClipboardButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAddFolderButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAddBookmarkButtonClicked();
    
};

