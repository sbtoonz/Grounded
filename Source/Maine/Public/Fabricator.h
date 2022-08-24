#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "EFabricationState.h"
#include "OnFabricationStateChangedDelegateDelegate.h"
#include "RecipeRequirements.h"
#include "Engine/DataTable.h"
#include "OnFabricationProgressDelegateDelegate.h"
#include "Fabricator.generated.h"

class UItem;
class UHealthComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AFabricator : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFabricationStateChangedDelegate OnFabricationStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFabricationProgressDelegate OnFabricationProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FabricationRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FabricationItems, meta=(AllowPrivateAccess=true))
    TArray<UItem*> FabricationItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcessingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OperableHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FabricationState, meta=(AllowPrivateAccess=true))
    EFabricationState FabricationState;
    
public:
    AFabricator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void TickProcessing(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FabricationState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FabricationItems();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRecipeRequirements> GetRemainingFabricationRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProcessingTimePercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFabricationState GetFabricationState() const;
    
};

