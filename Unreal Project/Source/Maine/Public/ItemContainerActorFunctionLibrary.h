#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "RecipeRequirements.h"
#include "GameplayTagContainer.h"
#include "ItemContainerActorFunctionLibrary.generated.h"

class AActor;
class UInventoryComponent;
class UItem;

UCLASS(BlueprintType)
class MAINE_API UItemContainerActorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemContainerActorFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemoveItemMatchingItemData(const AActor* ItemContainerActor, FDataTableRowHandle ItemData, bool SearchForwards);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveItem(const AActor* ItemContainerActor, UItem* Item, bool SearchForwards);
    
    UFUNCTION(BlueprintPure)
    static bool HasRequirements(const AActor* ItemContainerActor, const TArray<FRecipeRequirements>& Requirements);
    
    UFUNCTION(BlueprintPure)
    static TArray<FDataTableRowHandle> GetItemDataWithTag(const AActor* ItemContainerActor, FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintPure)
    static int32 GetItemCount(const AActor* ItemContainerActor, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static UItem* GetItem(const AActor* ItemContainerActor, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    static TArray<UItem*> GetAllItems(const AActor* ItemContainerActor);
    
    UFUNCTION(BlueprintCallable)
    static void CraftRecipeForInventory(const AActor* ItemContainerActor, FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory);
    
    UFUNCTION(BlueprintPure)
    static bool CanCraftRecipe(const AActor* ItemContainerActor, FDataTableRowHandle RecipeRowHandle);
    
};

