#pragma once
#include "CoreMinimal.h"
#include "OnGardenItemsChangedDelegate.h"
#include "WidgetBuilding.h"
#include "EGardenState.h"
#include "OnGardenStateChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EGardenModifierType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GardenBuilding.generated.h"

class UBaseLODActor;
class UStaticMeshComponent;
class UItem;

UCLASS(Abstract)
class MAINE_API AGardenBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnGardenStateChanged OnGardenStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnGardenItemsChanged OnGardenItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag CatalystTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ModifierTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CatalystSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ModifierSlots;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ProductionState)
    EGardenState GardenState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CatalystItems)
    TArray<UItem*> CatalystItems;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ModifierItems)
    TArray<UItem*> ModifierItems;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentRecipe)
    FDataTableRowHandle CurrentRecipe;
    
    UPROPERTY(Replicated, Transient)
    float Duration;
    
    UPROPERTY(Replicated, Transient)
    float CompletionTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RareSpawnList)
    TArray<int32> RareSpawnList;
    
    UPROPERTY(EditAnywhere)
    float MinScale;
    
    UPROPERTY(EditAnywhere)
    float MaxScale;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> InProductionMeshes;
    
public:
    AGardenBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void TickProduction(float DeltaTime);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveProductionTick(float DeltaSeconds);
    
protected:
    UFUNCTION()
    void OnSpawnedActorDestroyed(UBaseLODActor* LODActor);
    
    UFUNCTION()
    void OnRep_RareSpawnList();
    
    UFUNCTION()
    void OnRep_ProductionState();
    
    UFUNCTION()
    void OnRep_ModifierItems();
    
    UFUNCTION()
    void OnRep_CurrentRecipe();
    
    UFUNCTION()
    void OnRep_CatalystItems();
    
public:
    UFUNCTION(BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetModifierItems() const;
    
    UFUNCTION(BlueprintPure)
    float GetGardenModifier(EGardenModifierType ModifierType) const;
    
    UFUNCTION(BlueprintPure)
    EGardenState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetCatalystItems() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAllItemTags() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle FindRecipeForSelectedCatalyst() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateRareSpawnChance() const;
    
    UFUNCTION(BlueprintPure)
    float CalculateProductionDuration() const;
    
    UFUNCTION(BlueprintPure)
    bool AreModifiersFull() const;
    
    UFUNCTION(BlueprintPure)
    bool AreCatalystsFull() const;
    
};

