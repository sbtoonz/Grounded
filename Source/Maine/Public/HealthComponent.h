#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthColliderConfig.h"
#include "OnHandleEffectsEventDelegate.h"
#include "GoapActionProviderInterface.h"
#include "DamagedDelegateDelegate.h"
#include "PersistentInterface.h"
#include "EFriendlyFireType.h"
#include "EPlayEffectType.h"
#include "LODableComponentInterface.h"
#include "ThreatDamageModifierConfig.h"
#include "DeathDelegateDelegate.h"
#include "ReviveDelegateDelegate.h"
#include "OnHealthStateChangedDelegateDelegate.h"
#include "HealthChangedDelegateDelegate.h"
#include "FragileChangedDelegateDelegate.h"
#include "OnFragilityLevelChangedDelegate.h"
#include "OnIncapacitatationRatioChangeDelegate.h"
#include "Engine/EngineTypes.h"
#include "HealthDecayedDelegateDelegate.h"
#include "EHealthState.h"
#include "Engine/EngineTypes.h"
#include "EIncapacitationSetting.h"
#include "UObject/NoExportTypes.h"
#include "DamageInfo.h"
#include "HealthComponent.generated.h"

class UGoapAction;
class UVisualEffect;
class USoundCue;
class AActor;
class UAnimMontage;
class UGoapActionKill;
class UStatusEffect;
class UAuraReceiverComponent;
class ASurvivalCharacter;
class UObject;
class UBaseLODActor;
class AController;
class USurvivalGameInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHealthComponent : public UActorComponent, public IGoapActionProviderInterface, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamageReduction;
    
    UPROPERTY(EditAnywhere)
    uint16 ImmunityFlags;
    
    UPROPERTY(EditAnywhere)
    uint16 RequiredDamageTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendlyFireType FriendlyFireType;
    
    UPROPERTY(EditAnywhere)
    uint8 RequiredDamageTypeTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayDamagedParticlesOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanDieFromDamage: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeRepaired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBePushed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegenOutOfCombat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowRepairWhenCantBeDamaged: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRepairDisabled: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAffectsDurability: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanDieFromFragility: 1;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentFragilityLevel)
    uint8 CurrentFragilityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FragileTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHealthColliderConfig> ColliderConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThreatDamageModifierConfig> ThreatDamageConfigs;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamagedDelegate OnHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamagedDelegate OnDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathDelegate OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathDelegate OnIncapacitated;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReviveDelegate OnRevive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthStateChangedDelegate OnHealthStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedDelegate OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFragileChangedDelegate OnFragileStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFragilityLevelChanged OnFragilityLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleEffectsEvent OnHandleNoDamageEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleEffectsEvent OnHandleDamageEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleEffectsEvent OnHandleDeathEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncapacitatationRatioChange OnIncapacitatationRatioChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthDecayedDelegate OnDecayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVisualEffect*> OnNoDamagedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVisualEffect*> OnDamagedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVisualEffect*> OnDeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnNoDamagedSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnDamagedSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnDeathSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFleeThreshold;
    
private:
    UPROPERTY(EditAnywhere)
    uint16 MaxHits;
    
    UPROPERTY(EditAnywhere)
    uint8 OverrideTargetTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDamageInteractUI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HealthState, meta=(AllowPrivateAccess=true))
    EHealthState HealthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EHealthState HealthStateOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIncapacitationSetting IncapacitationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentDamage, meta=(AllowPrivateAccess=true))
    float CurrentDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ReviveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncapacitationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float IncapacitationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveImmunityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LifetimeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float FragileDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReviveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerHourRested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionKill* KillAction;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Reviver)
    TWeakObjectPtr<AActor> Reviver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeForMemorizingPushback;
    
public:
    UHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowHealthDebug();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectChanged(AActor* Owner, UStatusEffect* StatusEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Reviver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthState(EHealthState PrevHealthState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentFragilityLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentDamage(float PrevDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerScalingCountChanged(UAuraReceiverComponent* Sender, int32 AuraCount);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatChanged(ASurvivalCharacter* Character, bool bInCombat);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleEffects(FVector HitLocation, float Damage, const FDamageInfo& DamageInfo, EPlayEffectType PlayEffectType);
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReviving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockedOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncapacitated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFragile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Incapacitate();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOutOfCombatRegen();
    
    UFUNCTION(BlueprintCallable)
    void HandleDecay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReviveTimeRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReviveTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredDamageTypeFlags() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetRequiredDamageTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInverseHealthRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIncapacitatedTimeRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHealthState GetHealthState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFragileProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageReduction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

