#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WidgetBuilding.h"
#include "OnGardenStateChangedDelegate.h"
#include "OnGardenItemsChangedDelegate.h"
#include "GameplayTagContainer.h"
#include "EGardenState.h"
#include "EGardenModifierType.h"
#include "GameplayTagContainer.h"
#include "GardenBuilding.generated.h"

class UItem;
class UStaticMeshComponent;
class UBaseLODActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API AGardenBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGardenStateChanged OnGardenStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGardenItemsChanged OnGardenItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CatalystTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CatalystSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModifierSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProductionState, meta=(AllowPrivateAccess=true))
    EGardenState GardenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CatalystItems, meta=(AllowPrivateAccess=true))
    TArray<UItem*> CatalystItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ModifierItems, meta=(AllowPrivateAccess=true))
    TArray<UItem*> ModifierItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentRecipe, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CurrentRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RareSpawnList, meta=(AllowPrivateAccess=true))
    TArray<int32> RareSpawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> InProductionMeshes;
    
public:
    AGardenBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void TickProduction(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveProductionTick(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDestroyed(UBaseLODActor* LODActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RareSpawnList();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProductionState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModifierItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRecipe();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CatalystItems();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetModifierItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGardenModifier(EGardenModifierType ModifierType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGardenState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetCatalystItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllItemTags() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle FindRecipeForSelectedCatalyst() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateRareSpawnChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateProductionDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreModifiersFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreCatalystsFull() const;
    
};

