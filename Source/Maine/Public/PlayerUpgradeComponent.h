#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "OnPlayerUpgradesChangedDelegateDelegate.h"
#include "PlayerUpgrade.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PlayerUpgradeComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerUpgradeComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerUpgradesChangedDelegate OnPlayerUpgradesChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayerUpgrades)
    TArray<FPlayerUpgrade> PlayerUpgrades;
    
public:
    UPlayerUpgradeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlockUpgradeTier(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost);
    
protected:
    UFUNCTION()
    void OnRep_PlayerUpgrades();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetUpgradeTier(FDataTableRowHandle UpgradeRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpgradeCost(FDataTableRowHandle UpgradeRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalSpentPoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingUpgradePoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPerkCountBonus() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxUpgradeTier(FDataTableRowHandle UpgradeRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool CanUpgradeTier(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

