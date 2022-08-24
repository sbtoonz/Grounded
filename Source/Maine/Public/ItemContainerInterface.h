#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ItemContainerInterface.generated.h"

class UItem;

UINTERFACE(Blueprintable, MinimalAPI)
class UItemContainerInterface : public UInterface {
    GENERATED_BODY()
};

class IItemContainerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DropItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddItems(const TArray<UItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* Item, bool bIsNewItem);
    
};

