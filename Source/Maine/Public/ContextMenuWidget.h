#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnOptionSelectedDelegate.h"
#include "ContextEntry.h"
#include "ContextMenuWidget.generated.h"

class UVerticalBox;
class UContextMenuEntryWidget;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UContextMenuWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnOptionSelected OnOptionSelected;
    
    UPROPERTY(Export)
    UVerticalBox* ContextContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UContextMenuEntryWidget> ContextMenuClass;
    
public:
    UContextMenuWidget();
    UFUNCTION(BlueprintCallable)
    void SetFocusFirst();
    
protected:
    UFUNCTION()
    void NotifyOptionSelected(FGameplayTag Action);
    
public:
    UFUNCTION(BlueprintCallable)
    UContextMenuEntryWidget* AddEntry(const FContextEntry& Data);
    
};

