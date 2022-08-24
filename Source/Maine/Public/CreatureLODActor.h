#pragma once
#include "CoreMinimal.h"
#include "CharacterLODActor.h"
#include "HUDMarkerTargetInterface.h"
#include "TamedCreatureTameStateChangedDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "ETamedState.h"
#include "DamageInfo.h"
#include "CreatureLODActor.generated.h"

class UTamedCreatureData;

UCLASS(Blueprintable)
class MAINE_API UCreatureLODActor : public UCharacterLODActor, public IHUDMarkerTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTamedCreatureTameStateChangedDelegate OnTameStateChanged;
    
    UCreatureLODActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTame() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTameStateChanged(UTamedCreatureData* Sender, ETamedState NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleSelfDeath(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETamedState GetTamedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTamedCreatureData* GetTamedCreatureData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHappinessNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetActivePetPassiveEffects() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

