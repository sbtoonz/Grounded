#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "AddItemResult.h"
#include "ItemContainerFunctionLibrary.generated.h"

class UItem;
class UObject;

UCLASS(Blueprintable)
class MAINE_API UItemContainerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemContainerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UItem* FindPartialItemStackForItemHandle(const UObject* container, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static UItem* FindPartialItemStackForItem(const UObject* container, UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItem* FindItem(const UObject* container, FDataTableRowHandle ItemData, bool SearchForwards);
    
    UFUNCTION(BlueprintCallable)
    static FAddItemResult CreateAndAddItem(UObject* container, FDataTableRowHandle ItemRowHandle, int32 Count);
    
};

