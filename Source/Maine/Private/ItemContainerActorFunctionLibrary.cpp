#include "ItemContainerActorFunctionLibrary.h"

class AActor;
class UItem;
class UInventoryComponent;

void UItemContainerActorFunctionLibrary::RemoveItemMatchingItemData(const AActor* ItemContainerActor, FDataTableRowHandle ItemData, bool SearchForwards) {
}

void UItemContainerActorFunctionLibrary::RemoveItem(const AActor* ItemContainerActor, UItem* Item, bool SearchForwards) {
}

bool UItemContainerActorFunctionLibrary::HasRequirements(const AActor* ItemContainerActor, const TArray<FRecipeRequirements>& Requirements) {
    return false;
}

TArray<FDataTableRowHandle> UItemContainerActorFunctionLibrary::GetItemDataWithTag(const AActor* ItemContainerActor, FGameplayTag ItemTag) {
    return TArray<FDataTableRowHandle>();
}

int32 UItemContainerActorFunctionLibrary::GetItemCount(const AActor* ItemContainerActor, FDataTableRowHandle ItemRowHandle) {
    return 0;
}

UItem* UItemContainerActorFunctionLibrary::GetItem(const AActor* ItemContainerActor, FDataTableRowHandle ItemRowHandle) {
    return NULL;
}

TArray<UItem*> UItemContainerActorFunctionLibrary::GetAllItems(const AActor* ItemContainerActor) {
    return TArray<UItem*>();
}

void UItemContainerActorFunctionLibrary::CraftRecipeForInventory(const AActor* ItemContainerActor, FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory) {
}

bool UItemContainerActorFunctionLibrary::CanCraftRecipe(const AActor* ItemContainerActor, FDataTableRowHandle RecipeRowHandle) {
    return false;
}

UItemContainerActorFunctionLibrary::UItemContainerActorFunctionLibrary() {
}

