#pragma once
#include "CoreMinimal.h"
#include "ETamedState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "TamedCreatureTameStateChangedDelegateDelegate.h"
#include "DamageInfo.h"
#include "TamedCreatureData.generated.h"

class ASurvivalPlayerCharacter;
class APetHomeBuilding;

UCLASS(BlueprintType)
class MAINE_API UTamedCreatureData : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TWeakObjectPtr<APetHomeBuilding> PetHome;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FString PetName;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float HourTamed;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 TimesPetted;
    
    UPROPERTY(Replicated, Transient)
    float RawHappinessValue;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FDataTableRowHandle Personality;
    
    UPROPERTY(BlueprintAssignable)
    FTamedCreatureTameStateChangedDelegate OnTameStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PetMaster)
    TWeakObjectPtr<ASurvivalPlayerCharacter> PetMaster;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TameState)
    ETamedState TameState;
    
public:
    UTamedCreatureData();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTameState(ETamedState State);
    
private:
    UFUNCTION()
    void OnRep_TameState();
    
    UFUNCTION()
    void OnRep_PetMaster();
    
    UFUNCTION()
    void HandleMasterKilled(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintPure)
    ETamedState GetTameState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDaysAsPet() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

