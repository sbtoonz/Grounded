#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "AddItemResult.h"
#include "ItemContainerFunctionLibrary.generated.h"

class UItem;
class UObject;

UCLASS(BlueprintType)
class MAINE_API UItemContainerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemContainerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UItem* FindPartialItemStackForItemHandle(const UObject* container, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static UItem* FindPartialItemStackForItem(const UObject* container, UItem* Item);
    
    UFUNCTION(BlueprintPure)
    static UItem* FindItem(const UObject* container, FDataTableRowHandle ItemData, bool SearchForwards);
    
    UFUNCTION(BlueprintCallable)
    static FAddItemResult CreateAndAddItem(UObject* container, FDataTableRowHandle ItemRowHandle, int32 Count);
    
};

