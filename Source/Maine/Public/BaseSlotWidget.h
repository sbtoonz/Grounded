#pragma once
#include "CoreMinimal.h"
#include "HotBarQuickSlotItemTypeKey.h"
#include "GameUserWidget.h"
#include "OnContextActionDelegate.h"
#include "Engine/DataTable.h"
#include "BaseSlotWidget.generated.h"

class UItem;
class UButton;
class UMenuAnchor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UBaseSlotWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContextAction OnContextAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHotBarQuickSlotItemTypeKey HotBarQuickSlotItemTypeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* ItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMenuAnchor* TooltipAnchor;
    
public:
    UBaseSlotWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemRefChanged(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsItemNew(bool bIsNewItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSelected() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EvaluateSlotOnChange();
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemIsNewVisuals();
    
};

