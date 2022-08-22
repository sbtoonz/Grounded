#pragma once
#include "CoreMinimal.h"
#include "Building.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "OnPowerStoredChangedDelegate.h"
#include "EInteractAnimType.h"
#include "PowerReservoir.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PowerStorageBuilding.generated.h"

class AActor;

UCLASS(Abstract)
class MAINE_API APowerStorageBuilding : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPowerStoredChanged OnPowerStoredChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PowerReservoir)
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(EditDefaultsOnly)
    float PowerCapacity;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag PowerType;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractAnimType ItemDepostAnimType;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractAnimType ItemChargeAnimType;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractAnimType ManualInteractAnimType;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString ManualActionString;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString DepositActionString;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString WithdrawActionString;
    
public:
    APowerStorageBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWithdrawSucceeded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWithdrawFailed();
    
    UFUNCTION()
    void OnRep_PowerReservoir(const FPowerReservoir& OldValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMixError();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnErrorWithdrawFromEmpty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnErrorDepositToFull();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnErrorDepositFromEmpty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDepositSucceeded();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPowerFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPowerEmpty() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void InteractManualDrink(AActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintPure)
    FPowerReservoir GetPowerReservoir() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPower() const;
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeUnit(FGameplayTag& PreviousPowerType);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharges(const FGameplayTag& NewPowerType, int32 Charges);
    
};

