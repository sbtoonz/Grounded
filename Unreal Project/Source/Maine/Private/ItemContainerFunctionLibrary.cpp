#include "ItemContainerFunctionLibrary.h"

class UObject;
class UItem;

UItem* UItemContainerFunctionLibrary::FindPartialItemStackForItemHandle(const UObject* container, FDataTableRowHandle ItemRowHandle) {
    return NULL;
}

UItem* UItemContainerFunctionLibrary::FindPartialItemStackForItem(const UObject* container, UItem* Item) {
    return NULL;
}

UItem* UItemContainerFunctionLibrary::FindItem(const UObject* container, FDataTableRowHandle ItemData, bool SearchForwards) {
    return NULL;
}

FAddItemResult UItemContainerFunctionLibrary::CreateAndAddItem(UObject* container, FDataTableRowHandle ItemRowHandle, int32 Count) {
    return FAddItemResult{};
}

UItemContainerFunctionLibrary::UItemContainerFunctionLibrary() {
}

