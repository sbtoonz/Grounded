#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LODableActorInterface.h"
#include "GameFramework/Character.h"
#include "LootableInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ViewControl.h"
#include "OEIVoiceOverActor.h"
#include "CameraViewProvider.h"
#include "InteractableInterface.h"
#include "LocString.h"
#include "EAttackType.h"
#include "StatusEffectOrigin.h"
#include "OnWaveSpawnChangedDelegate.h"
#include "AttackDelegateDelegate.h"
#include "ECharacterLockCategory.h"
#include "DamageDelegateDelegate.h"
#include "ReviveTargetDelegateDelegate.h"
#include "CameraDisplayModeChangedDelegate.h"
#include "EInteractAnimType.h"
#include "CombatChangedDelegateDelegate.h"
#include "OnPropActorAddedRemovedDelegate.h"
#include "Engine/DataTable.h"
#include "PawnRespawnedDelegateDelegate.h"
#include "OnCharacterControllerChangedDelegate.h"
#include "EDetachSplineReason.h"
#include "OverrideDisplayModeData.h"
#include "SpeakerInfo.h"
#include "UObject/NoExportTypes.h"
#include "SpeakerReference.h"
#include "GameplayTagContainer.h"
#include "ECameraDisplayMode.h"
#include "AttackComboData.h"
#include "EAlternateAttackFunction.h"
#include "AttractionComponentKey.h"
#include "ERelevanceType.h"
#include "CharacterPropEntry.h"
#include "ClimbableSplineKey.h"
#include "ECharacterAnimMontageType.h"
#include "Camera/PlayerCameraManager.h"
#include "ChatterEventReference.h"
#include "EDestroyCharacterVariation.h"
#include "DamageInfo.h"
#include "EHitReactionType.h"
#include "EHealthState.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "SurvivalCharacter.generated.h"

class UAttractionComponent;
class USpringArmComponent;
class UStatusEffectComponent;
class UInputComponent;
class UBlockComponent;
class ASurvivalCharacter;
class UMaineCharMovementComponent;
class UHealthComponent;
class UAttackCombo;
class UCharacterAudioData;
class UCharacterMotionEaterComponent;
class UEquipmentComponent;
class AProxyStandInActor;
class UBossComponent;
class UAnimMontage;
class AActor;
class USurvivalCharacterLiteData;
class UCameraComponent;
class USceneComponent;
class UReactionComponent;
class UObsidianIDComponent;
class UTeamComponent;
class UConversationComponent;
class UPrimitiveComponent;
class UAttackHandlerComponent;
class ABuilding;
class UAbility;
class UAttack;
class AZiplineLine;
class UVisualEffect;
class UPhotoModeHelperComponent;
class AWaypoint;
class UAnimationInteractComponent;
class APlayerState;
class AController;
class UConditionalToggleComponent;
class UControlOptions;
class ANonPlayerInteraction;

UCLASS(Abstract, Blueprintable)
class MAINE_API ASurvivalCharacter : public ACharacter, public IViewControl, public ICameraViewProvider, public IGenericTeamAgentInterface, public IInteractableInterface, public ILODableActorInterface, public ILootableInterface, public IOEIVoiceOverActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WaveSpawnID, meta=(AllowPrivateAccess=true))
    int32 WaveSpawnID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveSpawnChanged OnWaveSpawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CameraDisplayModeLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAttacking, meta=(AllowPrivateAccess=true))
    uint8 bIsAttacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientWantsToAttack: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDelegate OnAttackLaunch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDelegate OnAttackHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDelegate OnAttackEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDelegate OnDamageTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDelegate OnKillTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReviveTargetDelegate OnReviveTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraDisplayModeChanged OnDisplayModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatChangedDelegate OnCombatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropActorAddedRemoved OnPropActorAddedRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnRespawnedDelegate OnPawnRespawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterControllerChanged OnControllerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldActorLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFullActorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProxyStandInActor> ProxyStandIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldOrientToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundOrientLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentAnimTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysRevelant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USurvivalCharacterLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerInfo SpeakerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MountSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MountedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredJumpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DesiredJumpHeightMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonFollowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPersonCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USpringArmComponent* ThirdPersonSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBlockComponent* BlockComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReactionComponent* ReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaineCharMovementComponent* CharMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* CharEquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* IncapacitatedInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* CutsceneInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttractionComponent* AttractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UConversationComponent* ConversationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UBossComponent* BossComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttackHandlerComponent* AttackHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackComboData DefaultAttackComboData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackComboData SwimAttackComboData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AbilityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DeathAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackInputBufferTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAttackTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlternateAttackFunction AlternateAttackFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECameraDisplayMode PlayerDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOverrideDisplayModeData> OverrideDisplayModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OverrideViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* VoiceOverAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECameraDisplayMode ExpectedCameraViewPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExpectedCameraTransitionTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetworkRelevance, meta=(AllowPrivateAccess=true))
    ERelevanceType NetworkConsensusRelevance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttackCombo* DefaultAttackCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttackCombo* SwimAttackCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAbility*> Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttack* DeathAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeFallDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFallDamageVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentMount, meta=(AllowPrivateAccess=true))
    ASurvivalCharacter* CurrentMount;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<AActor> FollowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedMontageTargetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedMontageBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WatchCameraRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InCombat, meta=(AllowPrivateAccess=true))
    uint8 bInCombat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bReplicatedIsSprinting, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedIsSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bReplicatedAutorun, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedAutorun: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FClimbableSplineKey ReplicatedAttachedSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EDetachSplineReason ReplicatedDetachSplineReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SplineProgress, meta=(AllowPrivateAccess=true))
    float ReplicatedSplineProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAttractionComponentKey ReplicatedPerchedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AZiplineLine* ReplicatedAttachedZipline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ReplicatedZiplinePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bReplicatedZiplineDirectionDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedCurrentPlayingInteractAnim, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReplicatedCurrentPlayingInteractAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_ReplicatedMotionEater, meta=(AllowPrivateAccess=true))
    UCharacterMotionEaterComponent* ReplicatedMotionEater;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttack* CurrentAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAnimMontage*> EmoteAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> SoftEmoteAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteractAnimType, UAnimMontage*> InteractAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> EmergeAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlyingLandAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlyingTakeoffAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCharacterAudioData> AudioData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterAudioData* CachedAudioData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CombatMusicTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAnimType InteractableAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> InteractableProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPropEntry> ActiveProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AnimPropTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterAnimMontageType, UAnimMontage*> ActiveAnimMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiveUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> PawnBlockingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ItemBlockingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVisualEffect> DeathDestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVisualEffect* LoadedDeathDestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhotoModeHelperComponent* PhotoModeHelperComponent;
    
    ASurvivalCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateCameraDisplayMode(float InBlendTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleCrouch();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetWaypoint(AWaypoint* Waypoint);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideViewTarget(AActor* ViewTarget, FViewTargetTransitionParams Transition);
    
    UFUNCTION(BlueprintCallable)
    void SetInCutscene(bool bInCutscene);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraDisplayModeLocked(bool Locked);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraDisplayMode(ECameraDisplayMode DisplayMode, float InBlendTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerAnimationInteract(UAnimationInteractComponent* AnimationInteractComponent, EInteractAnimType InteractAnimType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleSprint();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopZiplining(bool bLaunch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartSprint();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartGlide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartBlock();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartAttack(EAttackType AttackType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartAbility(int32 AbilityIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDisplayMode(ECameraDisplayMode DisplayMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAutorun(bool bState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmoteAnim(FGameplayTag EmoteTypeTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmote(FDataTableRowHandle EmoteDataRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayChatter(const FChatterEventReference& ChatterEvent, int32 Param1, int32 Param2);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndSprint();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndGlide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndBlock(bool FromInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndAttack(bool bOnlyEndBeforeHitFrame);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDismount();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptRaycastPossess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMessage(FName MessageTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDestroyVisuals(EDestroyCharacterVariation Variation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnderwaterChanged(bool bIsUnderwater);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIOpenChatPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRevive();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_WaveSpawnID();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SplineProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMotionEater();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedCurrentPlayingInteractAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_NetworkRelevance();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAttacking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InCombat();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bReplicatedIsSprinting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bReplicatedAutorun();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRemoved(APlayerState* RemovedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenChatMenuPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIncapacitate(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnHitReact(UReactionComponent* Sender, EHitReactionType ReactType);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthStateChanged(EHealthState HealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopCaptureReaction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastStopAnimMontageType(ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopAnimMontageSoft(const TSoftObjectPtr<UAnimMontage>& AnimMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartCaptureReaction(UAnimMontage* AnimMontage, bool bLockCharacter);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void MulticastSetPawnCollision(TEnumAsByte<ECollisionResponse> CollisionResponse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastSetAnimMontageNextSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastPlayPropAnimSoftProp(UAnimMontage* AnimMontage, const TSoftClassPtr<AActor>& Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastPlayPropAnim(UAnimMontage* AnimMontage, TSubclassOf<AActor> Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayDestroyVisuals(EDestroyCharacterVariation Variation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayConsumedEffect(const FDataTableRowHandle& ItemType, FVector AtLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimMontageSoft(const TSoftObjectPtr<UAnimMontage>& AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimMontageSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastJumpAnimMontageSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastHandleDetachFromControllerPendingDestroy(AController* OldController);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastForceUnlock(ECharacterLockCategory Category);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastAttackDestroyCharacter(bool bDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedByAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFemale() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterData(FName RowName) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraDisplayModeLocked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputToggleCameraModePressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTag(const FGameplayTagContainer& InTags) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleNonPlayerInteractionShowTalkIconChanged(UConditionalToggleComponent* Sender, bool bState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCameraDisplayModeChanged(ECameraDisplayMode DisplayMode, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleBaseBuildingRelocated(ABuilding* Sender);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttractBarkConditionalStateChanged(UConditionalToggleComponent* Sender, bool bState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalCharacter* GetViewCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSpeakerReference GetSpeaker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookWorldOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetJumpAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGiveUpTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGiveUpMaxTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFollowTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetFirstPersonCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetEmoteAnim(FGameplayTag EmoteTypeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetEmergeAnim(int32 EmergeVariation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalCharacter* GetCurrentMount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCurrentCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttack* GetCurrentAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlOptions* GetControlOptions(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLocString GetCharacterTypeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharacterInstanceName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCharacterDataRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetCapsuleBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraDisplayMode GetCameraDisplayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANonPlayerInteraction* GetAttractNonPlayerInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAnimProp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAbility*> GetAbilities() const;
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayerLookAndTurnInput(float DisableTime);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyStartAttackFailure();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyRangedAttackHit();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideCameraDisplayMode(int32 Handle, float InBlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeMounted() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyFallDamage();
    
    
    // Fix for true pure virtual functions not being implemented
};

