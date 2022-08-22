#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamagedDelegateDelegate.h"
#include "HealthColliderConfig.h"
#include "ReviveDelegateDelegate.h"
#include "GoapActionProviderInterface.h"
#include "PersistentInterface.h"
#include "LODableComponentInterface.h"
#include "EFriendlyFireType.h"
#include "ThreatDamageModifierConfig.h"
#include "EPlayEffectType.h"
#include "DeathDelegateDelegate.h"
#include "OnHealthStateChangedDelegateDelegate.h"
#include "HealthChangedDelegateDelegate.h"
#include "FragileChangedDelegateDelegate.h"
#include "OnFragilityLevelChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnHandleEffectsEventDelegate.h"
#include "OnIncapacitatationRatioChangeDelegate.h"
#include "HealthDecayedDelegateDelegate.h"
#include "EHealthState.h"
#include "EIncapacitationSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "HealthComponent.generated.h"

class UStatusEffect;
class UGoapAction;
class UVisualEffect;
class AActor;
class UBaseLODActor;
class USoundCue;
class UAnimMontage;
class UGoapActionKill;
class UAuraReceiverComponent;
class ASurvivalCharacter;
class AController;
class USurvivalGameInstance;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHealthComponent : public UActorComponent, public IGoapActionProviderInterface, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BaseDamageReduction;
    
    UPROPERTY(EditAnywhere)
    uint16 ImmunityFlags;
    
    UPROPERTY(EditAnywhere)
    uint16 RequiredDamageTypeFlags;
    
    UPROPERTY(EditAnywhere)
    EFriendlyFireType FriendlyFireType;
    
    UPROPERTY(EditAnywhere)
    uint8 RequiredDamageTypeTier;
    
    UPROPERTY(EditAnywhere)
    uint8 PlayDamagedParticlesOnDeath: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanDieFromDamage: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanBeRepaired: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanBePushed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRegenOutOfCombat: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAllowRepairWhenCantBeDamaged: 1;
    
private:
    UPROPERTY(Replicated)
    uint8 bRepairDisabled: 1;
    
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bAffectsDurability: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanDieFromFragility: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentFragilityLevel)
    uint8 CurrentFragilityLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FragileTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FHealthColliderConfig> ColliderConfigs;
    
    UPROPERTY(EditAnywhere)
    TArray<FThreatDamageModifierConfig> ThreatDamageConfigs;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDamagedDelegate OnHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDamagedDelegate OnDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDeathDelegate OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDeathDelegate OnIncapacitated;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FReviveDelegate OnRevive;
    
    UPROPERTY(BlueprintAssignable)
    FOnHealthStateChangedDelegate OnHealthStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthChangedDelegate OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFragileChangedDelegate OnFragileStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnFragilityLevelChanged OnFragilityLevelChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnHandleEffectsEvent OnHandleNoDamageEffects;
    
    UPROPERTY(BlueprintAssignable)
    FOnHandleEffectsEvent OnHandleDamageEffects;
    
    UPROPERTY(BlueprintAssignable)
    FOnHandleEffectsEvent OnHandleDeathEffects;
    
    UPROPERTY(BlueprintAssignable)
    FOnIncapacitatationRatioChange OnIncapacitatationRatioChange;
    
    UPROPERTY(BlueprintAssignable)
    FHealthDecayedDelegate OnDecayed;
    
    UPROPERTY(EditAnywhere)
    TArray<UVisualEffect*> OnNoDamagedParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<UVisualEffect*> OnDamagedParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<UVisualEffect*> OnDeathParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* OnNoDamagedSFX;
    
    UPROPERTY(EditAnywhere)
    USoundCue* OnDamagedSFX;
    
    UPROPERTY(EditAnywhere)
    USoundCue* OnDeathSFX;
    
    UPROPERTY(EditAnywhere)
    float HealthFleeThreshold;
    
private:
    UPROPERTY(EditAnywhere)
    uint16 MaxHits;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 OverrideTargetTokens;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bShowDamageInteractUI: 1;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_HealthState)
    EHealthState HealthState;
    
    UPROPERTY(Replicated, Transient)
    EHealthState HealthStateOnLoad;
    
    UPROPERTY(EditAnywhere)
    EIncapacitationSetting IncapacitationSetting;
    
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentDamage)
    float CurrentDamage;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthPercentage;
    
    UPROPERTY(EditAnywhere)
    float ReviveTime;
    
    UPROPERTY(Replicated, Transient)
    float ReviveStartTime;
    
    UPROPERTY(EditAnywhere)
    float IncapacitationTime;
    
    UPROPERTY(Replicated, Transient)
    float IncapacitationTimer;
    
    UPROPERTY(EditAnywhere)
    float ReviveImmunityTime;
    
    UPROPERTY(Transient)
    FTimerHandle LifetimeTimer;
    
    UPROPERTY(Replicated, Transient)
    float FragileDeathTime;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* ReviveAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeUntilDecay;
    
    UPROPERTY(EditDefaultsOnly)
    float HealthPerHourRested;
    
    UPROPERTY(EditDefaultsOnly)
    UGoapActionKill* KillAction;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Reviver)
    TWeakObjectPtr<AActor> Reviver;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeForMemorizingPushback;
    
public:
    UHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Exec)
    void ToggleShowHealthDebug();
    
public:
    UFUNCTION(BlueprintPure)
    bool ShowDamageInteractUI() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentHealth(float DesiredHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDamage(float DesiredDamage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKill();
    
    UFUNCTION(BlueprintCallable)
    void Revive(AActor* InReviver);
    
    UFUNCTION(BlueprintCallable)
    void Restore();
    
private:
    UFUNCTION()
    void OnStatusEffectChanged(AActor* Owner, UStatusEffect* StatusEffect);
    
    UFUNCTION()
    void OnRest(float RestDuration);
    
    UFUNCTION()
    void OnRep_Reviver();
    
    UFUNCTION()
    void OnRep_HealthState(EHealthState PrevHealthState);
    
public:
    UFUNCTION()
    void OnRep_CurrentFragilityLevel();
    
private:
    UFUNCTION()
    void OnRep_CurrentDamage(float PrevDamage);
    
    UFUNCTION()
    void OnPlayerScalingCountChanged(UAuraReceiverComponent* Sender, int32 AuraCount);
    
    UFUNCTION()
    void OnCombatChanged(ASurvivalCharacter* Character, bool bInCombat);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleEffects(FVector HitLocation, float Damage, const FDamageInfo& DamageInfo, EPlayEffectType PlayEffectType);
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintPure)
    bool IsReviving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsKnockedOut() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIncapacitated() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFragile() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Incapacitate();
    
private:
    UFUNCTION()
    void HandleOutOfCombatRegen();
    
    UFUNCTION()
    void HandleDecay();
    
public:
    UFUNCTION(BlueprintPure)
    float GetReviveTimeRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetReviveTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRequiredDamageTypeFlags() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetRequiredDamageTier() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHits() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetInverseHealthRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetIncapacitatedTimeRatio() const;
    
    UFUNCTION(BlueprintPure)
    EHealthState GetHealthState() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetFragileProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageReduction() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeRepaired() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyHit(UBaseLODActor* Causer);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamageFromInfo(float& Damage, const FDamageEvent& DamageEvent, FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float& Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddHealth(float Amount, UBaseLODActor* Causer);
    
    
    // Fix for true pure virtual functions not being implemented
};

