#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "OnContextActionDelegate.h"
#include "HotBarQuickSlotItemTypeKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BaseSlotWidget.generated.h"

class UItem;
class UMenuAnchor;
class UButton;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBaseSlotWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnContextAction OnContextAction;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FHotBarQuickSlotItemTypeKey HotBarQuickSlotItemTypeKey;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle DataRowHandle;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSelected;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ItemButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMenuAnchor* TooltipAnchor;
    
public:
    UBaseSlotWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemRefChanged(UItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIsItemNew(bool bIsNewItem);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsSelected() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EvaluateSlotOnChange();
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemIsNewVisuals();
    
};

