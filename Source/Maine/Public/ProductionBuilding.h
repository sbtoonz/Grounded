#pragma once
#include "CoreMinimal.h"
#include "CraftingBuilding.h"
#include "LocString.h"
#include "RecipeMod.h"
#include "OnProductionItemsChangedDelegate.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "RecipeProductionItem.h"
#include "ProductionBuilding.generated.h"

class UTexture2D;
class UMaterialBillboardComponent;
class UInventoryComponent;
class UItem;

UCLASS(Abstract, Blueprintable)
class MAINE_API AProductionBuilding : public ACraftingBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProductionItemsChanged OnProductionItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIngredients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanProduceNonRecipeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultItemResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecipeMod> DefaultModItemResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecipeModTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresModItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProductionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimulateousItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString FlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString IngredientFlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString ModifierFlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString QueueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FlavorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProductionItemsChanged, meta=(AllowPrivateAccess=true))
    TArray<FRecipeProductionItem> ProductionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* MaterialBillboardComponent;
    
public:
    AProductionBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickVisuals(float DeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void TickProduction(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveProcductionTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProductionCapacityIsFull() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProductionItemsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyProductionItemStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastNotifyProductionItemStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemFinished(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstantProducer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemsInProduction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyFinishedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetRecipeModItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetRecipeItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRecipeProductionItem> GetProductionItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemProgress(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetDefaultItemResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle FindBestRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCraft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreIngredientsFull() const;
    
};

