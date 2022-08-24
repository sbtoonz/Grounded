#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HotBarWidget.generated.h"

class UItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHotBarWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingHotBar;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UItem> SelectedItem;
    
public:
    UHotBarWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedItemChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NewSelectedItem(UItem* NewItem);
    
};

