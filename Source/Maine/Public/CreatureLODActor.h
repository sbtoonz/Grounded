#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "HUDMarkerTargetInterface.h"
#include "CharacterLODActor.h"
#include "TamedCreatureTameStateChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ETamedState.h"
#include "CreatureLODActor.generated.h"

class UTamedCreatureData;

UCLASS()
class MAINE_API UCreatureLODActor : public UCharacterLODActor, public IHUDMarkerTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTamedCreatureTameStateChangedDelegate OnTameStateChanged;
    
    UCreatureLODActor();
    UFUNCTION(BlueprintPure)
    bool IsTame() const;
    
protected:
    UFUNCTION()
    void HandleTameStateChanged(UTamedCreatureData* Sender, ETamedState NewState);
    
    UFUNCTION()
    void HandleSelfDeath(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintPure)
    ETamedState GetTamedState() const;
    
    UFUNCTION(BlueprintPure)
    UTamedCreatureData* GetTamedCreatureData() const;
    
    UFUNCTION(BlueprintPure)
    float GetHappinessNormalized() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetActivePetPassiveEffects() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

