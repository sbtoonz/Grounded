#pragma once
#include "CoreMinimal.h"
#include "SurvivalCharacter.h"
#include "HUDMarkerTargetInterface.h"
#include "EWaveCreatureWeightClass.h"
#include "ETamedState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "SurvivalCreature.generated.h"

class UAnimMontage;
class ASurvivalPlayerCharacter;
class UTamedCreatureData;
class UItem;

UCLASS(Abstract)
class MAINE_API ASurvivalCreature : public ASurvivalCharacter, public IHUDMarkerTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_TameData)
    UTamedCreatureData* TameData;
    
    UPROPERTY(EditDefaultsOnly)
    float TamingChance;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* BeingPetAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* PlayerPettingAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* PlayerPettingAnimDead;
    
    UPROPERTY(EditAnywhere)
    float OptimalPettingDistance;
    
    UPROPERTY(EditAnywhere)
    float DrownTimer;
    
    UPROPERTY(EditAnywhere)
    EWaveCreatureWeightClass WaveWeightClass;
    
public:
    ASurvivalCreature();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void TickDrown(float DeltaTime);
    
    UFUNCTION()
    void OnRep_TameData(UTamedCreatureData* OldData);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTamingFood(const UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInactivePet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActivePet() const;
    
protected:
    UFUNCTION()
    void HandleTameStateChanged(UTamedCreatureData* Sender, ETamedState NewState);
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetPetMasterLocation() const;
    
    UFUNCTION(BlueprintPure)
    ASurvivalPlayerCharacter* GetPetMaster() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPetHomeLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetPetHappinessNormalized() const;
    
    UFUNCTION(BlueprintPure)
    FString GetFoodsList() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetActivePetPassiveEffects() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

