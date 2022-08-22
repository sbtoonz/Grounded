#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LODableActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "LootableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "ViewControl.h"
#include "AttackComboData.h"
#include "ReviveTargetDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIVoiceOver -ObjectName=OEIVoiceOverActor -FallbackName=OEIVoiceOverActor
#include "CameraViewProvider.h"
#include "InteractableInterface.h"
#include "StatusEffectOrigin.h"
#include "OnWaveSpawnChangedDelegate.h"
#include "AttackDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerInfo -FallbackName=SpeakerInfo
#include "DamageDelegateDelegate.h"
#include "CameraDisplayModeChangedDelegate.h"
#include "CombatChangedDelegateDelegate.h"
#include "OnPropActorAddedRemovedDelegate.h"
#include "PawnRespawnedDelegateDelegate.h"
#include "OverrideDisplayModeData.h"
#include "OnCharacterControllerChangedDelegate.h"
#include "EDetachSplineReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ECharacterAnimMontageType.h"
#include "ClimbableSplineKey.h"
#include "ECameraDisplayMode.h"
#include "AttractionComponentKey.h"
#include "EAlternateAttackFunction.h"
#include "ERelevanceType.h"
#include "EInteractAnimType.h"
#include "CharacterPropEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ViewTargetTransitionParams -FallbackName=ViewTargetTransitionParams
#include "EAttackType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ChatterEventReference -FallbackName=ChatterEventReference
#include "EDestroyCharacterVariation.h"
#include "DamageInfo.h"
#include "EHitReactionType.h"
#include "EHealthState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "ECharacterLockCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerReference -FallbackName=SpeakerReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "SurvivalCharacter.generated.h"

class AActor;
class UAttractionComponent;
class UReactionComponent;
class UAttackCombo;
class UHealthComponent;
class AProxyStandInActor;
class USurvivalCharacterLiteData;
class UAnimMontage;
class UAbility;
class UVisualEffect;
class ANonPlayerInteraction;
class UCameraComponent;
class USceneComponent;
class USpringArmComponent;
class UBlockComponent;
class UEquipmentComponent;
class UTeamComponent;
class UStatusEffectComponent;
class ASurvivalCharacter;
class UMaineCharMovementComponent;
class UObsidianIDComponent;
class UInputComponent;
class UCharacterMotionEaterComponent;
class UCharacterAudioData;
class UConversationComponent;
class UBossComponent;
class UPrimitiveComponent;
class UAttackHandlerComponent;
class UAttack;
class AZiplineLine;
class UPhotoModeHelperComponent;
class AWaypoint;
class UAnimationInteractComponent;
class APlayerState;
class AController;
class UConditionalToggleComponent;
class ABuilding;
class UControlOptions;

UCLASS(Abstract)
class MAINE_API ASurvivalCharacter : public ACharacter, public IViewControl, public ICameraViewProvider, public IGenericTeamAgentInterface, public IInteractableInterface, public ILODableActorInterface, public ILootableInterface, public IOEIVoiceOverActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_WaveSpawnID)
    int32 WaveSpawnID;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveSpawnChanged OnWaveSpawnChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CameraDisplayModeLocked;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsAttacking)
    uint8 bIsAttacking: 1;
    
    UPROPERTY(Transient)
    uint8 bClientWantsToAttack: 1;
    
    UPROPERTY(BlueprintAssignable)
    FAttackDelegate OnAttackLaunch;
    
    UPROPERTY(BlueprintAssignable)
    FAttackDelegate OnAttackHit;
    
    UPROPERTY(BlueprintAssignable)
    FAttackDelegate OnAttackEnded;
    
    UPROPERTY(BlueprintAssignable)
    FDamageDelegate OnDamageTarget;
    
    UPROPERTY(BlueprintAssignable)
    FDamageDelegate OnKillTarget;
    
    UPROPERTY(BlueprintAssignable)
    FReviveTargetDelegate OnReviveTarget;
    
    UPROPERTY(BlueprintAssignable)
    FCameraDisplayModeChanged OnDisplayModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCombatChangedDelegate OnCombatChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPropActorAddedRemoved OnPropActorAddedRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FPawnRespawnedDelegate OnPawnRespawned;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterControllerChanged OnControllerChanged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ShouldActorLOD;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxFullActorDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AProxyStandInActor> ProxyStandIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldOrientToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundOrientLerpSpeed;
    
    UPROPERTY(Replicated, Transient)
    AActor* CurrentAnimTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysRevelant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle CharacterData;
    
    UPROPERTY(VisibleDefaultsOnly)
    USurvivalCharacterLiteData* LiteData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSpeakerInfo SpeakerInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString CharacterName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFemale;
    
    UPROPERTY(EditDefaultsOnly)
    FName MountSocket;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* MountedAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* JumpAnimation;
    
    UPROPERTY(Replicated, Transient)
    FVector DesiredJumpTarget;
    
    UPROPERTY(Replicated, Transient)
    float DesiredJumpHeightMult;
    
    UPROPERTY(EditDefaultsOnly)
    float ThirdPersonFollowDistance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* FirstPersonCameraLocation;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpringArmComponent* ThirdPersonSpringArm;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBlockComponent* BlockComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UReactionComponent* ReactionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMaineCharMovementComponent* CharMovementComponent;
    
    UPROPERTY(Export, Transient)
    UEquipmentComponent* CharEquipmentComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComp;
    
    UPROPERTY(Export, Transient)
    UInputComponent* IncapacitatedInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* CutsceneInputComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAttractionComponent* AttractionComponent;
    
    UPROPERTY(Export, Transient)
    UConversationComponent* ConversationComponent;
    
    UPROPERTY(Export, Transient)
    UBossComponent* BossComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAttackHandlerComponent* AttackHandlerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FAttackComboData DefaultAttackComboData;
    
    UPROPERTY(EditDefaultsOnly)
    FAttackComboData SwimAttackComboData;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> AbilityDataList;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle DeathAttackData;
    
    UPROPERTY(EditAnywhere)
    float AttackInputBufferTime;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultAttackTier;
    
    UPROPERTY(EditAnywhere)
    EAlternateAttackFunction AlternateAttackFunction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECameraDisplayMode PlayerDisplayMode;
    
    UPROPERTY(Transient)
    TArray<FOverrideDisplayModeData> OverrideDisplayModes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* OverrideViewTarget;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* VoiceOverAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ECameraDisplayMode ExpectedCameraViewPoint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ExpectedCameraTransitionTime;
    
public:
    UPROPERTY(ReplicatedUsing=OnRep_NetworkRelevance)
    ERelevanceType NetworkConsensusRelevance;
    
protected:
    UPROPERTY(Transient)
    UAttackCombo* DefaultAttackCombo;
    
    UPROPERTY(Transient)
    UAttackCombo* SwimAttackCombo;
    
    UPROPERTY(Transient)
    TArray<UAbility*> Abilities;
    
    UPROPERTY(Transient)
    UAttack* DeathAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTakeFallDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumFallDamageVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float FallDamageRatio;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentMount)
    ASurvivalCharacter* CurrentMount;
    
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<AActor> FollowTarget;
    
    UPROPERTY(EditAnywhere)
    float LockedMontageTargetPitch;
    
    UPROPERTY(EditAnywhere)
    float LockedMontageBlendSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> WatchCameraRig;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InCombat)
    uint8 bInCombat: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bReplicatedIsSprinting)
    uint8 bReplicatedIsSprinting: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bReplicatedAutorun)
    uint8 bReplicatedAutorun: 1;
    
    UPROPERTY(Replicated, Transient)
    FClimbableSplineKey ReplicatedAttachedSpline;
    
    UPROPERTY(Replicated, Transient)
    EDetachSplineReason ReplicatedDetachSplineReason;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SplineProgress)
    float ReplicatedSplineProgress;
    
    UPROPERTY(Replicated, Transient)
    FAttractionComponentKey ReplicatedPerchedObject;
    
    UPROPERTY(Replicated, Transient)
    AZiplineLine* ReplicatedAttachedZipline;
    
    UPROPERTY(Replicated, Transient)
    float ReplicatedZiplinePosition;
    
    UPROPERTY(Replicated, Transient)
    bool bReplicatedZiplineDirectionDown;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedCurrentPlayingInteractAnim)
    UAnimMontage* ReplicatedCurrentPlayingInteractAnim;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ReplicatedMotionEater)
    UCharacterMotionEaterComponent* ReplicatedMotionEater;
    
public:
    UPROPERTY(Transient)
    UAttack* CurrentAttack;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, UAnimMontage*> EmoteAnims;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> SoftEmoteAnims;
    
    UPROPERTY(EditAnywhere)
    TMap<EInteractAnimType, UAnimMontage*> InteractAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> EmergeAnims;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FlyingLandAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FlyingTakeoffAnim;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCharacterAudioData> AudioData;
    
private:
    UPROPERTY(Transient)
    UCharacterAudioData* CachedAudioData;
    
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CombatMusicTag;
    
    UPROPERTY(EditAnywhere)
    EInteractAnimType InteractableAnimType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> InteractableProp;
    
    UPROPERTY(Transient)
    TArray<FCharacterPropEntry> ActiveProps;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> AnimPropTemplate;
    
    UPROPERTY(Transient)
    TMap<ECharacterAnimMontageType, UAnimMontage*> ActiveAnimMontages;
    
    UPROPERTY(EditAnywhere)
    float GiveUpTime;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> PawnBlockingComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> ItemBlockingComponents;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UVisualEffect> DeathDestroyEffect;
    
    UPROPERTY(Transient)
    UVisualEffect* LoadedDeathDestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
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
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTriggerAnimationInteract(UAnimationInteractComponent* AnimationInteractComponent, EInteractAnimType InteractAnimType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerToggleSprint();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopZiplining(bool bLaunch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartSprint();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartGlide();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartBlock();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartAttack(EAttackType AttackType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartAbility(int32 AbilityIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetDisplayMode(ECameraDisplayMode DisplayMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetAutorun(bool bState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmoteAnim(FGameplayTag EmoteTypeTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmote(FDataTableRowHandle EmoteDataRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayChatter(const FChatterEventReference& ChatterEvent, int32 Param1, int32 Param2);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndSprint();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndGlide();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndBlock(bool FromInput);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEndAttack(bool bOnlyEndBeforeHitFrame);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDismount();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAttemptRaycastPossess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMessage(FName MessageTag);
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayDestroyVisuals(EDestroyCharacterVariation Variation);
    
protected:
    UFUNCTION()
    void OnUnderwaterChanged(bool bIsUnderwater);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUIOpenChatPressed();
    
    UFUNCTION()
    void OnStatusEffectChanged();
    
protected:
    UFUNCTION()
    void OnRevive();
    
public:
    UFUNCTION()
    void OnRep_WaveSpawnID();
    
protected:
    UFUNCTION()
    void OnRep_SplineProgress();
    
    UFUNCTION()
    void OnRep_ReplicatedMotionEater();
    
    UFUNCTION()
    void OnRep_ReplicatedCurrentPlayingInteractAnim();
    
public:
    UFUNCTION()
    void OnRep_NetworkRelevance();
    
protected:
    UFUNCTION()
    void OnRep_IsAttacking();
    
    UFUNCTION()
    void OnRep_InCombat();
    
    UFUNCTION()
    void OnRep_CurrentMount();
    
    UFUNCTION()
    void OnRep_bReplicatedIsSprinting();
    
    UFUNCTION()
    void OnRep_bReplicatedAutorun();
    
public:
    UFUNCTION()
    void OnPlayerRemoved(APlayerState* RemovedPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenChatMenuPressed();
    
protected:
    UFUNCTION()
    void OnIncapacitate(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnHitReact(UReactionComponent* Sender, EHitReactionType ReactType);
    
    UFUNCTION()
    void OnHealthStateChanged(EHealthState HealthState);
    
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStopCaptureReaction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastStopAnimMontageType(ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopAnimMontageSoft(const TSoftObjectPtr<UAnimMontage>& AnimMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartCaptureReaction(UAnimMontage* AnimMontage, bool bLockCharacter);
    
    UFUNCTION(NetMulticast, Unreliable, WithValidation)
    void MulticastSetPawnCollision(TEnumAsByte<ECollisionResponse> CollisionResponse);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastSetAnimMontageNextSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastPlayPropAnimSoftProp(UAnimMontage* AnimMontage, const TSoftClassPtr<AActor>& Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastPlayPropAnim(UAnimMontage* AnimMontage, TSubclassOf<AActor> Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPlayDestroyVisuals(EDestroyCharacterVariation Variation);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlayConsumedEffect(const FDataTableRowHandle& ItemType, FVector AtLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimMontageSoft(const TSoftObjectPtr<UAnimMontage>& AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimMontageSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastJumpAnimMontageSection(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastHandleDetachFromControllerPendingDestroy(AController* OldController);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastForceUnlock(ECharacterLockCategory Category);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastAttackDestroyCharacter(bool bDestroy);
    
    UFUNCTION(BlueprintPure)
    bool IsLockedByAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFemale() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsCharacterData(FName RowName) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCameraDisplayModeLocked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputToggleCameraModePressed();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasTag(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyTag(const FGameplayTagContainer& InTags) const;
    
protected:
    UFUNCTION()
    void HandleNonPlayerInteractionShowTalkIconChanged(UConditionalToggleComponent* Sender, bool bState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleCameraDisplayModeChanged(ECameraDisplayMode DisplayMode, float BlendTime);
    
    UFUNCTION()
    void HandleBaseBuildingRelocated(ABuilding* Sender);
    
    UFUNCTION()
    void HandleAttractBarkConditionalStateChanged(UConditionalToggleComponent* Sender, bool bState);
    
public:
    UFUNCTION(BlueprintPure)
    ASurvivalCharacter* GetViewCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FSpeakerReference GetSpeaker();
    
    UFUNCTION(BlueprintPure)
    FVector GetMovementForwardVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookWorldOrigin() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookForwardVector() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetJumpAnim() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsFirstPerson() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintPure)
    float GetGiveUpTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetGiveUpMaxTime() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetFollowTarget() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetFirstPersonCamera() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetEmoteAnim(FGameplayTag EmoteTypeTag) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetEmergeAnim(int32 EmergeVariation) const;
    
    UFUNCTION(BlueprintPure)
    ASurvivalCharacter* GetCurrentMount() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentCameraLocation() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCurrentCamera() const;
    
    UFUNCTION(BlueprintPure)
    UAttack* GetCurrentAttack() const;
    
    UFUNCTION(BlueprintPure)
    UControlOptions* GetControlOptions(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    FLocString GetCharacterTypeName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCharacterInstanceName() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetCharacterDataRow() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetCapsuleBounds() const;
    
    UFUNCTION(BlueprintPure)
    ECameraDisplayMode GetCameraDisplayMode() const;
    
    UFUNCTION(BlueprintPure)
    ANonPlayerInteraction* GetAttractNonPlayerInteraction() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAnimProp() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UAbility*> GetAbilities() const;
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayerLookAndTurnInput(float DisableTime);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyStartAttackFailure();
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyRangedAttackHit();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideCameraDisplayMode(int32 Handle, float InBlendTime);
    
    UFUNCTION(BlueprintPure)
    bool CanBeMounted() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyFallDamage();
    
    
    // Fix for true pure virtual functions not being implemented
};

