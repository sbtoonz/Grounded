#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "EStatusEffectType.h"
#include "EStatusEffectOriginType.h"
#include "OnStatusEffectTimerResetDelegate.h"
#include "EStatusEffectDurationType.h"
#include "EStatusEffectApplyType.h"
#include "StatusEffect.generated.h"

UCLASS(Blueprintable)
class MAINE_API UStatusEffect : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StatusEffectRowHandle, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StatusEffectRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResetTime, meta=(AllowPrivateAccess=true))
    int32 ResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EStatusEffectOriginType OriginType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusEffectTimerReset OnStatusEffectTimerReset;
    
public:
    UStatusEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowInUI() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StatusEffectRowHandle(FDataTableRowHandle PreviousHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResetTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectType GetStatusEffectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectOriginType GetOriginType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetEffectTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectDurationType GetDurationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetDataHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectApplyType GetApplicationType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

