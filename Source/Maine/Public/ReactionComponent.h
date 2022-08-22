#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageInfo.h"
#include "OnPlayReactionDelegate.h"
#include "EStunState.h"
#include "EHealthState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "ReactionComponent.generated.h"

class UBaseAnimEffect;
class UVisualEffect;
class AController;
class UBaseLODActor;
class ACharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayReaction OnPlayReaction;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float CurrentStunValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxStunValue;
    
    UPROPERTY(EditDefaultsOnly)
    float StunDecayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float StunDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float StunCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyStunFromBlocks;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyStunWhileFlying;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFlinchOnTakeDamageDuringStun;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StunState)
    EStunState StunState;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StaggerThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseAnimEffect* FlinchAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseAnimEffect* StunAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseAnimEffect* StaggerAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UBaseAnimEffect* Capture;
    
    UPROPERTY(EditDefaultsOnly)
    UVisualEffect* StunEffect;
    
public:
    UReactionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_StunState(EStunState PrevStunState);
    
    UFUNCTION()
    void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION()
    void OnCharacterMovementChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintPure)
    EStunState GetStunState() const;
    
    UFUNCTION(BlueprintPure)
    float GetStunRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetStunDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStun() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeStunned() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginStun();
    
};

