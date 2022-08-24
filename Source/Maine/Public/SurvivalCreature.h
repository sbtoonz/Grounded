#pragma once
#include "CoreMinimal.h"
#include "SurvivalCharacter.h"
#include "HUDMarkerTargetInterface.h"
#include "EWaveCreatureWeightClass.h"
#include "ETamedState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SurvivalCreature.generated.h"

class UAnimMontage;
class ASurvivalPlayerCharacter;
class UTamedCreatureData;
class UItem;

UCLASS(Abstract, Blueprintable)
class MAINE_API ASurvivalCreature : public ASurvivalCharacter, public IHUDMarkerTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TameData, meta=(AllowPrivateAccess=true))
    UTamedCreatureData* TameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TamingChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BeingPetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerPettingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerPettingAnimDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OptimalPettingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveCreatureWeightClass WaveWeightClass;
    
public:
    ASurvivalCreature();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void TickDrown(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TameData(UTamedCreatureData* OldData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTamingFood(const UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInactivePet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivePet() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTameStateChanged(UTamedCreatureData* Sender, ETamedState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPetMasterLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalPlayerCharacter* GetPetMaster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPetHomeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPetHappinessNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFoodsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetActivePetPassiveEffects() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

