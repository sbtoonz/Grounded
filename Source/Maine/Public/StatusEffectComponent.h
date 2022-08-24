#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "OnStatusEffectsChangedDelegateDelegate.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "StatusEffectDelegateDelegate.h"
#include "DamageInfo.h"
#include "GameplayTagContainer.h"
#include "EHealthState.h"
#include "GameplayTagContainer.h"
#include "EStatusEffectType.h"
#include "StatusEffectComponent.generated.h"

class UStatusEffect;
class ASurvivalCharacter;
class USurvivalDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UStatusEffectComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusEffectsChangedDelegate OnStatusEffectsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectDelegate OnStatusEffectAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectDelegate OnStatusEffectRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> DefaultStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ImmunityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StatusEffects, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> SerializedStatusEffects;
    
public:
    UStatusEffectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveEffect(UStatusEffect* StatusEffect, bool bBroadcastChangedEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StatusEffects(const TArray<UStatusEffect*>& PreviousStatusEffects);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthStateChange(EHealthState NewHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnDayNightChange(bool bbIsDayTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatChange(ASurvivalCharacter* Character, bool bInCombat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStatusEffectTag(FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStatusEffectOfType(EStatusEffectType StatType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStatusEffectOfDamageType(EStatusEffectType StatType, TSubclassOf<USurvivalDamageType> DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyStatusEffectTag(FGameplayTagContainer EffectTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueForStatWithExtraData(EStatusEffectType StatType, FDataTableRowHandle ExtraData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueForStatForDamageTypeFlags(EStatusEffectType StatType, int32 Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueForStatForDamageInfo(EStatusEffectType StatType, const FDamageInfo& DammageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueForStat(EStatusEffectType StatType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStatusEffect*> GetStatusEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumStatusEffectOfType(EStatusEffectType StatType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetDefaultStatusEffects() const;
    
    UFUNCTION(BlueprintCallable)
    UStatusEffect* CreateAndAddEffect(FDataTableRowHandle StatusEffectRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddEffect(FDataTableRowHandle StatusEffectRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddEffect(UStatusEffect* StatusEffect);
    
    
    // Fix for true pure virtual functions not being implemented
};

