#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPlayReactionDelegate.h"
#include "EStunState.h"
#include "DamageInfo.h"
#include "EHealthState.h"
#include "Engine/EngineTypes.h"
#include "ReactionComponent.generated.h"

class UBaseAnimEffect;
class UVisualEffect;
class UBaseLODActor;
class AController;
class ACharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayReaction OnPlayReaction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStunValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStunValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyStunFromBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyStunWhileFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlinchOnTakeDamageDuringStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StunState, meta=(AllowPrivateAccess=true))
    EStunState StunState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaggerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAnimEffect* FlinchAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAnimEffect* StunAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAnimEffect* StaggerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseAnimEffect* Capture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualEffect* StunEffect;
    
public:
    UReactionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StunState(EStunState PrevStunState);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION()
    void OnCharacterMovementChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStunState GetStunState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeStunned() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginStun();
    
};

