#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "EFabricationState.h"
#include "OnFabricationStateChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnFabricationProgressDelegateDelegate.h"
#include "RecipeRequirements.h"
#include "Fabricator.generated.h"

class UItem;
class UHealthComponent;

UCLASS(Abstract)
class MAINE_API AFabricator : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFabricationStateChangedDelegate OnFabricationStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnFabricationProgressDelegate OnFabricationProgress;
    
protected:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle FabricationRecipe;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FabricationItems)
    TArray<UItem*> FabricationItems;
    
    UPROPERTY(EditAnywhere)
    float ProcessingTime;
    
    UPROPERTY(EditAnywhere)
    float OperableHealthThreshold;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FabricationState)
    EFabricationState FabricationState;
    
public:
    AFabricator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void TickProcessing(float DeltaTime);
    
protected:
    UFUNCTION()
    void OnRep_FabricationState();
    
    UFUNCTION()
    void OnRep_FabricationItems();
    
    UFUNCTION()
    void OnHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FRecipeRequirements> GetRemainingFabricationRequirements() const;
    
    UFUNCTION(BlueprintPure)
    float GetProcessingTimePercentage() const;
    
    UFUNCTION(BlueprintPure)
    EFabricationState GetFabricationState() const;
    
};

