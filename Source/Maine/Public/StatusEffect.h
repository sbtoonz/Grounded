#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnStatusEffectTimerResetDelegate.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EStatusEffectType.h"
#include "EStatusEffectOriginType.h"
#include "EStatusEffectDurationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EStatusEffectApplyType.h"
#include "StatusEffect.generated.h"

UCLASS(BlueprintType)
class MAINE_API UStatusEffect : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_StatusEffectRowHandle)
    FDataTableRowHandle StatusEffectRowHandle;
    
    UPROPERTY(Replicated)
    float TimeElapsed;
    
    UPROPERTY(Replicated)
    bool bEnabled;
    
    UPROPERTY(ReplicatedUsing=OnRep_ResetTime)
    int32 ResetTime;
    
    UPROPERTY(Replicated)
    EStatusEffectOriginType OriginType;
    
    UPROPERTY(BlueprintAssignable)
    FOnStatusEffectTimerReset OnStatusEffectTimerReset;
    
public:
    UStatusEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool ShowInUI() const;
    
protected:
    UFUNCTION()
    void OnRep_StatusEffectRowHandle(FDataTableRowHandle PreviousHandle);
    
    UFUNCTION()
    void OnRep_ResetTime();
    
public:
    UFUNCTION(BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeElapsed() const;
    
    UFUNCTION(BlueprintPure)
    EStatusEffectType GetStatusEffectType() const;
    
    UFUNCTION(BlueprintPure)
    EStatusEffectOriginType GetOriginType() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetEffectTags() const;
    
    UFUNCTION(BlueprintPure)
    EStatusEffectDurationType GetDurationType() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetDataHandle() const;
    
    UFUNCTION(BlueprintPure)
    EStatusEffectApplyType GetApplicationType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

