#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameUserWidget.h"
#include "OnOptionSelectedDelegate.h"
#include "GameplayTagContainer.h"
#include "ContextEntry.h"
#include "ContextMenuWidget.generated.h"

class UContextMenuEntryWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UContextMenuWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptionSelected OnOptionSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* ContextContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UContextMenuEntryWidget> ContextMenuClass;
    
public:
    UContextMenuWidget();
    UFUNCTION(BlueprintCallable)
    void SetFocusFirst();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyOptionSelected(FGameplayTag Action);
    
public:
    UFUNCTION(BlueprintCallable)
    UContextMenuEntryWidget* AddEntry(const FContextEntry& Data);
    
};

