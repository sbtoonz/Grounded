#pragma once
#include "CoreMinimal.h"
#include "CraftingBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "OnProductionItemsChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeMod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RecipeProductionItem.h"
#include "ProductionBuilding.generated.h"

class UTexture2D;
class UInventoryComponent;
class UMaterialBillboardComponent;
class UItem;

UCLASS(Abstract)
class MAINE_API AProductionBuilding : public ACraftingBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnProductionItemsChanged OnProductionItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxIngredients;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanProduceNonRecipeItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle DefaultItemResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRecipeMod> DefaultModItemResults;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag RecipeModTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequiresModItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProductionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxProductionItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSimulateousItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString FlavorText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString IngredientFlavorText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString ModifierFlavorText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString QueueText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* FlavorImage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ProductionItemsChanged)
    TArray<FRecipeProductionItem> ProductionItems;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMaterialBillboardComponent* MaterialBillboardComponent;
    
public:
    AProductionBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
    void TickVisuals(float DeltaSeconds);
    
private:
    UFUNCTION()
    void TickProduction(float DeltaTime);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveProcductionTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    bool ProductionCapacityIsFull() const;
    
protected:
    UFUNCTION()
    void OnRep_ProductionItemsChanged();
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyProductionItemStarted();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastNotifyProductionItemStarted();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsItemFinished(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInstantProducer() const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemsInProduction() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyFinishedItem() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetRecipeModItem() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetRecipeItems() const;
    
    UFUNCTION(BlueprintPure)
    float GetProductionTime() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRecipeProductionItem> GetProductionItems() const;
    
    UFUNCTION(BlueprintPure)
    float GetItemProgress(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetDefaultItemResult() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle FindBestRecipe() const;
    
    UFUNCTION(BlueprintPure)
    bool CanCraft() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    bool AreIngredientsFull() const;
    
};

