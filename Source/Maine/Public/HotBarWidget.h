#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HotBarWidget.generated.h"

class UItem;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHotBarWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUsingHotBar;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UItem> SelectedItem;
    
public:
    UHotBarWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedItemChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NewSelectedItem(UItem* NewItem);
    
};

