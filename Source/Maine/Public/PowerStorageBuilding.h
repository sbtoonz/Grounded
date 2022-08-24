#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "LocString.h"
#include "PowerReservoir.h"
#include "OnPowerStoredChangedDelegate.h"
#include "GameplayTagContainer.h"
#include "EInteractAnimType.h"
#include "PowerStorageBuilding.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API APowerStorageBuilding : public ABuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerStoredChanged OnPowerStoredChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PowerReservoir, meta=(AllowPrivateAccess=true))
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PowerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAnimType ItemDepostAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAnimType ItemChargeAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAnimType ManualInteractAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString ManualActionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DepositActionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString WithdrawActionString;
    
public:
    APowerStorageBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWithdrawSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWithdrawFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerReservoir(const FPowerReservoir& OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMixError();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnErrorWithdrawFromEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnErrorDepositToFull();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnErrorDepositFromEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDepositSucceeded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerEmpty() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractManualDrink(AActor* InstigatedBy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerReservoir GetPowerReservoir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPower() const;
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeUnit(FGameplayTag& PreviousPowerType);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharges(const FGameplayTag& NewPowerType, int32 Charges);
    
};

