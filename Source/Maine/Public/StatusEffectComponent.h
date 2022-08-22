#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "EStatusEffectType.h"
#include "EHealthState.h"
#include "OnStatusEffectsChangedDelegateDelegate.h"
#include "StatusEffectDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "StatusEffectComponent.generated.h"

class UStatusEffect;
class ASurvivalCharacter;
class USurvivalDamageType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UStatusEffectComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStatusEffectsChangedDelegate OnStatusEffectsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FStatusEffectDelegate OnStatusEffectAdded;
    
    UPROPERTY(BlueprintAssignable)
    FStatusEffectDelegate OnStatusEffectRemoved;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> DefaultStatusEffects;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ImmunityTags;
    
    UPROPERTY(ReplicatedUsing=OnRep_StatusEffects)
    TArray<UStatusEffect*> StatusEffects;
    
    UPROPERTY(Transient)
    TArray<UStatusEffect*> SerializedStatusEffects;
    
public:
    UStatusEffectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveEffect(UStatusEffect* StatusEffect, bool bBroadcastChangedEvent);
    
protected:
    UFUNCTION()
    void OnRest(float RestDuration);
    
    UFUNCTION()
    void OnRep_StatusEffects(const TArray<UStatusEffect*>& PreviousStatusEffects);
    
    UFUNCTION()
    void OnHealthStateChange(EHealthState NewHealthState);
    
    UFUNCTION()
    void OnDayNightChange(bool bbIsDayTime);
    
    UFUNCTION()
    void OnCombatChange(ASurvivalCharacter* Character, bool bInCombat);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasStatusEffectTag(FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasStatusEffectOfType(EStatusEffectType StatType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasStatusEffectOfDamageType(EStatusEffectType StatType, TSubclassOf<USurvivalDamageType> DamageType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyStatusEffectTag(FGameplayTagContainer EffectTags) const;
    
    UFUNCTION(BlueprintPure)
    float GetValueForStatWithExtraData(EStatusEffectType StatType, FDataTableRowHandle ExtraData) const;
    
    UFUNCTION(BlueprintPure)
    float GetValueForStatForDamageTypeFlags(EStatusEffectType StatType, int32 Flags) const;
    
    UFUNCTION(BlueprintPure)
    float GetValueForStatForDamageInfo(EStatusEffectType StatType, const FDamageInfo& DammageInfo) const;
    
    UFUNCTION(BlueprintPure)
    float GetValueForStat(EStatusEffectType StatType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UStatusEffect*> GetStatusEffects() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumStatusEffectOfType(EStatusEffectType StatType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetDefaultStatusEffects() const;
    
    UFUNCTION(BlueprintCallable)
    UStatusEffect* CreateAndAddEffect(FDataTableRowHandle StatusEffectRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool CanAddEffect(FDataTableRowHandle StatusEffectRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddEffect(UStatusEffect* StatusEffect);
    
    
    // Fix for true pure virtual functions not being implemented
};

