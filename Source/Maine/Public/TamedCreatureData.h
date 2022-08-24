#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "UObject/Object.h"
#include "PersistentInterface.h"
#include "ETamedState.h"
#include "Engine/DataTable.h"
#include "TamedCreatureTameStateChangedDelegateDelegate.h"
#include "TamedCreatureData.generated.h"

class ASurvivalPlayerCharacter;
class APetHomeBuilding;

UCLASS(Blueprintable)
class MAINE_API UTamedCreatureData : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<APetHomeBuilding> PetHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString PetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float HourTamed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TimesPetted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RawHappinessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Personality;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTamedCreatureTameStateChangedDelegate OnTameStateChanged;
    
protected:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_PetMaster)
    TWeakObjectPtr<ASurvivalPlayerCharacter> PetMaster;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TameState, meta=(AllowPrivateAccess=true))
    ETamedState TameState;
    
public:
    UTamedCreatureData();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTameState(ETamedState State);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TameState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PetMaster();
    
    UFUNCTION(BlueprintCallable)
    void HandleMasterKilled(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETamedState GetTameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysAsPet() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

