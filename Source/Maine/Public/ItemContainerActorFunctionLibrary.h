#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RecipeRequirements.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "ItemContainerActorFunctionLibrary.generated.h"

class AActor;
class UItem;
class UInventoryComponent;

UCLASS(Blueprintable)
class MAINE_API UItemContainerActorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemContainerActorFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemoveItemMatchingItemData(const AActor* ItemContainerActor, FDataTableRowHandle ItemData, bool SearchForwards);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveItem(const AActor* ItemContainerActor, UItem* Item, bool SearchForwards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasRequirements(const AActor* ItemContainerActor, const TArray<FRecipeRequirements>& Requirements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FDataTableRowHandle> GetItemDataWithTag(const AActor* ItemContainerActor, FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCount(const AActor* ItemContainerActor, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItem* GetItem(const AActor* ItemContainerActor, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UItem*> GetAllItems(const AActor* ItemContainerActor);
    
    UFUNCTION(BlueprintCallable)
    static void CraftRecipeForInventory(const AActor* ItemContainerActor, FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCraftRecipe(const AActor* ItemContainerActor, FDataTableRowHandle RecipeRowHandle);
    
};

