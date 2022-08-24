#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "OnPlayerUpgradesChangedDelegateDelegate.h"
#include "PlayerUpgrade.h"
#include "PlayerUpgradeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerUpgradeComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerUpgradesChangedDelegate OnPlayerUpgradesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerUpgrades, meta=(AllowPrivateAccess=true))
    TArray<FPlayerUpgrade> PlayerUpgrades;
    
public:
    UPlayerUpgradeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlockUpgradeTier(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerUpgrades();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeTier(FDataTableRowHandle UpgradeRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeCost(FDataTableRowHandle UpgradeRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSpentPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingUpgradePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPerkCountBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUpgradeTier(FDataTableRowHandle UpgradeRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeTier(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

