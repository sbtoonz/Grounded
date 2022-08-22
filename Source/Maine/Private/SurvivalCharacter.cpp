#include "SurvivalCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=PhotoModeHelperComponent -FallbackName=PhotoModeHelperComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TeamComponent.h"
#include "AttractionComponent.h"
#include "ReactionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "MaineCharMovementComponent.h"
#include "HealthComponent.h"
#include "BlockComponent.h"
#include "StatusEffectComponent.h"
#include "AttackHandlerComponent.h"

class ABuilding;
class AWaypoint;
class AActor;
class UAnimationInteractComponent;
class UAbility;
class UAnimMontage;
class APlayerState;
class ANonPlayerInteraction;
class AController;
class UConditionalToggleComponent;
class ASurvivalCharacter;
class UCameraComponent;
class UAttack;
class UControlOptions;

void ASurvivalCharacter::UpdateCameraDisplayMode(float InBlendTime) {
}

void ASurvivalCharacter::ToggleCrouch() {
}

void ASurvivalCharacter::SetTargetWaypoint(AWaypoint* Waypoint) {
}

void ASurvivalCharacter::SetOverrideViewTarget(AActor* ViewTarget, FViewTargetTransitionParams Transition) {
}

void ASurvivalCharacter::SetInCutscene(bool bInCutscene) {
}

void ASurvivalCharacter::SetCameraDisplayModeLocked(bool Locked) {
}

void ASurvivalCharacter::SetCameraDisplayMode(ECameraDisplayMode DisplayMode, float InBlendTime) {
}

void ASurvivalCharacter::ServerTriggerAnimationInteract_Implementation(UAnimationInteractComponent* AnimationInteractComponent, EInteractAnimType InteractAnimType) {
}
bool ASurvivalCharacter::ServerTriggerAnimationInteract_Validate(UAnimationInteractComponent* AnimationInteractComponent, EInteractAnimType InteractAnimType) {
    return true;
}

void ASurvivalCharacter::ServerToggleSprint_Implementation() {
}
bool ASurvivalCharacter::ServerToggleSprint_Validate() {
    return true;
}

void ASurvivalCharacter::ServerStopZiplining_Implementation(bool bLaunch) {
}
bool ASurvivalCharacter::ServerStopZiplining_Validate(bool bLaunch) {
    return true;
}

void ASurvivalCharacter::ServerStopAnimMontage_Implementation(UAnimMontage* AnimMontage) {
}

void ASurvivalCharacter::ServerStartSprint_Implementation() {
}
bool ASurvivalCharacter::ServerStartSprint_Validate() {
    return true;
}

void ASurvivalCharacter::ServerStartGlide_Implementation() {
}
bool ASurvivalCharacter::ServerStartGlide_Validate() {
    return true;
}

void ASurvivalCharacter::ServerStartBlock_Implementation() {
}
bool ASurvivalCharacter::ServerStartBlock_Validate() {
    return true;
}

void ASurvivalCharacter::ServerStartAttack_Implementation(EAttackType AttackType) {
}
bool ASurvivalCharacter::ServerStartAttack_Validate(EAttackType AttackType) {
    return true;
}

void ASurvivalCharacter::ServerStartAbility_Implementation(int32 AbilityIndex) {
}
bool ASurvivalCharacter::ServerStartAbility_Validate(int32 AbilityIndex) {
    return true;
}

void ASurvivalCharacter::ServerSetDisplayMode_Implementation(ECameraDisplayMode DisplayMode) {
}
bool ASurvivalCharacter::ServerSetDisplayMode_Validate(ECameraDisplayMode DisplayMode) {
    return true;
}

void ASurvivalCharacter::ServerSetAutorun_Implementation(bool bState) {
}
bool ASurvivalCharacter::ServerSetAutorun_Validate(bool bState) {
    return true;
}

void ASurvivalCharacter::ServerPlayEmoteAnim_Implementation(FGameplayTag EmoteTypeTag) {
}
bool ASurvivalCharacter::ServerPlayEmoteAnim_Validate(FGameplayTag EmoteTypeTag) {
    return true;
}

void ASurvivalCharacter::ServerPlayEmote_Implementation(FDataTableRowHandle EmoteDataRowHandle) {
}
bool ASurvivalCharacter::ServerPlayEmote_Validate(FDataTableRowHandle EmoteDataRowHandle) {
    return true;
}

void ASurvivalCharacter::ServerPlayChatter_Implementation(const FChatterEventReference& ChatterEvent, int32 Param1, int32 Param2) {
}

void ASurvivalCharacter::ServerPlayAnimMontage_Implementation(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
}

void ASurvivalCharacter::ServerEndSprint_Implementation() {
}
bool ASurvivalCharacter::ServerEndSprint_Validate() {
    return true;
}

void ASurvivalCharacter::ServerEndGlide_Implementation() {
}
bool ASurvivalCharacter::ServerEndGlide_Validate() {
    return true;
}

void ASurvivalCharacter::ServerEndBlock_Implementation(bool FromInput) {
}
bool ASurvivalCharacter::ServerEndBlock_Validate(bool FromInput) {
    return true;
}

void ASurvivalCharacter::ServerEndAttack_Implementation(bool bOnlyEndBeforeHitFrame) {
}
bool ASurvivalCharacter::ServerEndAttack_Validate(bool bOnlyEndBeforeHitFrame) {
    return true;
}

void ASurvivalCharacter::ServerDismount_Implementation() {
}
bool ASurvivalCharacter::ServerDismount_Validate() {
    return true;
}

void ASurvivalCharacter::ServerAttemptRaycastPossess_Implementation() {
}
bool ASurvivalCharacter::ServerAttemptRaycastPossess_Validate() {
    return true;
}


void ASurvivalCharacter::PlayDestroyVisuals_Implementation(EDestroyCharacterVariation Variation) {
}

void ASurvivalCharacter::OnUnderwaterChanged(bool bIsUnderwater) {
}


void ASurvivalCharacter::OnStatusEffectChanged() {
}

void ASurvivalCharacter::OnRevive() {
}

void ASurvivalCharacter::OnRep_WaveSpawnID() {
}

void ASurvivalCharacter::OnRep_SplineProgress() {
}

void ASurvivalCharacter::OnRep_ReplicatedMotionEater() {
}

void ASurvivalCharacter::OnRep_ReplicatedCurrentPlayingInteractAnim() {
}

void ASurvivalCharacter::OnRep_NetworkRelevance() {
}

void ASurvivalCharacter::OnRep_IsAttacking() {
}

void ASurvivalCharacter::OnRep_InCombat() {
}

void ASurvivalCharacter::OnRep_CurrentMount() {
}

void ASurvivalCharacter::OnRep_bReplicatedIsSprinting() {
}

void ASurvivalCharacter::OnRep_bReplicatedAutorun() {
}

void ASurvivalCharacter::OnPlayerRemoved(APlayerState* RemovedPlayer) {
}


void ASurvivalCharacter::OnIncapacitate(const FDamageInfo& DamageInfo) {
}

void ASurvivalCharacter::OnHitReact(UReactionComponent* Sender, EHitReactionType ReactType) {
}

void ASurvivalCharacter::OnHealthStateChanged(EHealthState HealthState) {
}

void ASurvivalCharacter::OnDeath(const FDamageInfo& DamageInfo) {
}

void ASurvivalCharacter::MulticastStopCaptureReaction_Implementation() {
}

void ASurvivalCharacter::MulticastStopAnimMontageType_Implementation(ECharacterAnimMontageType AnimMontageType) {
}
bool ASurvivalCharacter::MulticastStopAnimMontageType_Validate(ECharacterAnimMontageType AnimMontageType) {
    return true;
}

void ASurvivalCharacter::MulticastStopAnimMontageSoft_Implementation(const TSoftObjectPtr<UAnimMontage>& AnimMontage) {
}

void ASurvivalCharacter::MulticastStopAnimMontage_Implementation(UAnimMontage* AnimMontage) {
}

void ASurvivalCharacter::MulticastStartCaptureReaction_Implementation(UAnimMontage* AnimMontage, bool bLockCharacter) {
}

void ASurvivalCharacter::MulticastSetPawnCollision_Implementation(TEnumAsByte<ECollisionResponse> CollisionResponse) {
}
bool ASurvivalCharacter::MulticastSetPawnCollision_Validate(TEnumAsByte<ECollisionResponse> CollisionResponse) {
    return true;
}

void ASurvivalCharacter::MulticastSetAnimMontageNextSection_Implementation(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection) {
}
bool ASurvivalCharacter::MulticastSetAnimMontageNextSection_Validate(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool JumpIfNotInSection) {
    return true;
}

void ASurvivalCharacter::MulticastPlayPropAnimSoftProp_Implementation(UAnimMontage* AnimMontage, const TSoftClassPtr<AActor>& Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
}
bool ASurvivalCharacter::MulticastPlayPropAnimSoftProp_Validate(UAnimMontage* AnimMontage, const TSoftClassPtr<AActor>& Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
    return true;
}

void ASurvivalCharacter::MulticastPlayPropAnim_Implementation(UAnimMontage* AnimMontage, TSubclassOf<AActor> Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
}
bool ASurvivalCharacter::MulticastPlayPropAnim_Validate(UAnimMontage* AnimMontage, TSubclassOf<AActor> Prop, FName AttachSocket, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
    return true;
}

void ASurvivalCharacter::MulticastPlayDestroyVisuals_Implementation(EDestroyCharacterVariation Variation) {
}

void ASurvivalCharacter::MulticastPlayConsumedEffect_Implementation(const FDataTableRowHandle& ItemType, FVector AtLocation) {
}

void ASurvivalCharacter::MulticastPlayAnimMontageSoft_Implementation(const TSoftObjectPtr<UAnimMontage>& AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
}

void ASurvivalCharacter::MulticastPlayAnimMontageSection_Implementation(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
}

void ASurvivalCharacter::MulticastPlayAnimMontage_Implementation(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType) {
}

void ASurvivalCharacter::MulticastJumpAnimMontageSection_Implementation(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection) {
}
bool ASurvivalCharacter::MulticastJumpAnimMontageSection_Validate(UAnimMontage* AnimMontage, FName SectionToSet, FName NextSection) {
    return true;
}

void ASurvivalCharacter::MulticastHandleDetachFromControllerPendingDestroy_Implementation(AController* OldController) {
}

void ASurvivalCharacter::MulticastForceUnlock_Implementation(ECharacterLockCategory Category) {
}

void ASurvivalCharacter::MulticastAttackDestroyCharacter_Implementation(bool bDestroy) {
}
bool ASurvivalCharacter::MulticastAttackDestroyCharacter_Validate(bool bDestroy) {
    return true;
}

bool ASurvivalCharacter::IsLockedByAnimation() const {
    return false;
}

bool ASurvivalCharacter::IsInCombat() const {
    return false;
}

bool ASurvivalCharacter::IsFemale() const {
    return false;
}

bool ASurvivalCharacter::IsCharacterData(FName RowName) const {
    return false;
}

bool ASurvivalCharacter::IsCameraDisplayModeLocked() const {
    return false;
}

void ASurvivalCharacter::InputToggleCameraModePressed() {
}

bool ASurvivalCharacter::HasTag(const FGameplayTag& InTag) const {
    return false;
}

bool ASurvivalCharacter::HasAnyTag(const FGameplayTagContainer& InTags) const {
    return false;
}

void ASurvivalCharacter::HandleNonPlayerInteractionShowTalkIconChanged(UConditionalToggleComponent* Sender, bool bState) {
}


void ASurvivalCharacter::HandleBaseBuildingRelocated(ABuilding* Sender) {
}

void ASurvivalCharacter::HandleAttractBarkConditionalStateChanged(UConditionalToggleComponent* Sender, bool bState) {
}

ASurvivalCharacter* ASurvivalCharacter::GetViewCharacter() const {
    return NULL;
}

FSpeakerReference ASurvivalCharacter::GetSpeaker() {
    return FSpeakerReference{};
}

FVector ASurvivalCharacter::GetMovementForwardVector() const {
    return FVector{};
}

FVector ASurvivalCharacter::GetLookWorldOrigin() const {
    return FVector{};
}

FVector ASurvivalCharacter::GetLookForwardVector() const {
    return FVector{};
}

UAnimMontage* ASurvivalCharacter::GetJumpAnim() const {
    return NULL;
}

bool ASurvivalCharacter::GetIsFirstPerson() const {
    return false;
}

FGuid ASurvivalCharacter::GetId() const {
    return FGuid{};
}

float ASurvivalCharacter::GetGiveUpTimeRemaining() const {
    return 0.0f;
}

float ASurvivalCharacter::GetGiveUpMaxTime() const {
    return 0.0f;
}

AActor* ASurvivalCharacter::GetFollowTarget() const {
    return NULL;
}

UCameraComponent* ASurvivalCharacter::GetFirstPersonCamera() const {
    return NULL;
}

TSoftObjectPtr<UAnimMontage> ASurvivalCharacter::GetEmoteAnim(FGameplayTag EmoteTypeTag) const {
    return NULL;
}

UAnimMontage* ASurvivalCharacter::GetEmergeAnim(int32 EmergeVariation) const {
    return NULL;
}

ASurvivalCharacter* ASurvivalCharacter::GetCurrentMount() const {
    return NULL;
}

FVector ASurvivalCharacter::GetCurrentCameraLocation() const {
    return FVector{};
}

UCameraComponent* ASurvivalCharacter::GetCurrentCamera() const {
    return NULL;
}

UAttack* ASurvivalCharacter::GetCurrentAttack() const {
    return NULL;
}

UControlOptions* ASurvivalCharacter::GetControlOptions(FKey Key) const {
    return NULL;
}

FLocString ASurvivalCharacter::GetCharacterTypeName() const {
    return FLocString{};
}

FString ASurvivalCharacter::GetCharacterInstanceName() const {
    return TEXT("");
}

FDataTableRowHandle ASurvivalCharacter::GetCharacterDataRow() const {
    return FDataTableRowHandle{};
}

FBoxSphereBounds ASurvivalCharacter::GetCapsuleBounds() const {
    return FBoxSphereBounds{};
}

ECameraDisplayMode ASurvivalCharacter::GetCameraDisplayMode() const {
    return ECameraDisplayMode::None;
}

ANonPlayerInteraction* ASurvivalCharacter::GetAttractNonPlayerInteraction() const {
    return NULL;
}

AActor* ASurvivalCharacter::GetAnimProp() const {
    return NULL;
}

TArray<UAbility*> ASurvivalCharacter::GetAbilities() const {
    return TArray<UAbility*>();
}

void ASurvivalCharacter::DisablePlayerLookAndTurnInput(float DisableTime) {
}

void ASurvivalCharacter::ClientNotifyStartAttackFailure_Implementation() {
}

void ASurvivalCharacter::ClientNotifyRangedAttackHit_Implementation() {
}

void ASurvivalCharacter::ClearOverrideCameraDisplayMode(int32 Handle, float InBlendTime) {
}

bool ASurvivalCharacter::CanBeMounted() const {
    return false;
}

void ASurvivalCharacter::ApplyFallDamage() {
}

void ASurvivalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASurvivalCharacter, WaveSpawnID);
    DOREPLIFETIME(ASurvivalCharacter, bIsAttacking);
    DOREPLIFETIME(ASurvivalCharacter, CurrentAnimTarget);
    DOREPLIFETIME(ASurvivalCharacter, DesiredJumpTarget);
    DOREPLIFETIME(ASurvivalCharacter, DesiredJumpHeightMult);
    DOREPLIFETIME(ASurvivalCharacter, NetworkConsensusRelevance);
    DOREPLIFETIME(ASurvivalCharacter, CurrentMount);
    DOREPLIFETIME(ASurvivalCharacter, FollowTarget);
    DOREPLIFETIME(ASurvivalCharacter, bInCombat);
    DOREPLIFETIME(ASurvivalCharacter, bReplicatedIsSprinting);
    DOREPLIFETIME(ASurvivalCharacter, bReplicatedAutorun);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedAttachedSpline);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedDetachSplineReason);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedSplineProgress);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedPerchedObject);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedAttachedZipline);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedZiplinePosition);
    DOREPLIFETIME(ASurvivalCharacter, bReplicatedZiplineDirectionDown);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedCurrentPlayingInteractAnim);
    DOREPLIFETIME(ASurvivalCharacter, ReplicatedMotionEater);
}

ASurvivalCharacter::ASurvivalCharacter() {
    this->WaveSpawnID = -1;
    this->CameraDisplayModeLocked = false;
    this->bIsAttacking = false;
    this->bClientWantsToAttack = false;
    this->ShouldActorLOD = true;
    this->MaxFullActorDistance = 7000.00f;
    this->ProxyStandIn = NULL;
    this->ShouldOrientToGround = false;
    this->GroundOrientLerpSpeed = 10.00f;
    this->CurrentAnimTarget = NULL;
    this->bAlwaysRevelant = false;
    this->LiteData = NULL;
    this->bFemale = false;
    this->MountedAnimation = NULL;
    this->JumpAnimation = NULL;
    this->DesiredJumpHeightMult = 0.00f;
    this->ThirdPersonFollowDistance = 350.00f;
    this->FirstPersonCamera = NULL;
    this->FirstPersonCameraLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FirstPersonCameraLocation"));
    this->ThirdPersonSpringArm = NULL;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->BlockComponent = CreateDefaultSubobject<UBlockComponent>(TEXT("BlockComponent"));
    this->ReactionComponent = CreateDefaultSubobject<UReactionComponent>(TEXT("ReactionComponent"));
    this->TeamComponent = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
    this->StatusEffectComponent = CreateDefaultSubobject<UStatusEffectComponent>(TEXT("StatusEffectComponent"));
    this->CharMovementComponent = CreateDefaultSubobject<UMaineCharMovementComponent>(TEXT("CharMoveComp"));
    this->CharEquipmentComponent = NULL;
    this->ObsidianIDComp = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->IncapacitatedInputComponent = NULL;
    this->CutsceneInputComponent = NULL;
    this->AttractionComponent = CreateDefaultSubobject<UAttractionComponent>(TEXT("AttractionComponent"));
    this->ConversationComponent = NULL;
    this->BossComponent = NULL;
    this->AttackHandlerComponent = CreateDefaultSubobject<UAttackHandlerComponent>(TEXT("AttackHandlerComponent"));
    this->AttackInputBufferTime = 1.00f;
    this->DefaultAttackTier = 0;
    this->AlternateAttackFunction = EAlternateAttackFunction::AlternateAttack;
    this->PlayerDisplayMode = ECameraDisplayMode::FirstPerson;
    this->OverrideViewTarget = NULL;
    this->VoiceOverAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("VoiceOverAudioComponent"));
    this->ExpectedCameraViewPoint = ECameraDisplayMode::None;
    this->ExpectedCameraTransitionTime = 0.00f;
    this->NetworkConsensusRelevance = ERelevanceType::Relevant;
    this->DefaultAttackCombo = NULL;
    this->SwimAttackCombo = NULL;
    this->DeathAttack = NULL;
    this->bTakeFallDamage = true;
    this->MinimumFallDamageVelocity = 2100.00f;
    this->FallDamageRatio = 0.07f;
    this->CurrentMount = NULL;
    this->LockedMontageTargetPitch = 0.00f;
    this->LockedMontageBlendSpeed = 200.00f;
    this->WatchCameraRig = NULL;
    this->bInCombat = false;
    this->bReplicatedIsSprinting = false;
    this->bReplicatedAutorun = false;
    this->ReplicatedDetachSplineReason = EDetachSplineReason::None;
    this->ReplicatedSplineProgress = 0.00f;
    this->ReplicatedAttachedZipline = NULL;
    this->ReplicatedZiplinePosition = 0.00f;
    this->bReplicatedZiplineDirectionDown = false;
    this->ReplicatedCurrentPlayingInteractAnim = NULL;
    this->ReplicatedMotionEater = NULL;
    this->CurrentAttack = NULL;
    this->FlyingLandAnim = NULL;
    this->FlyingTakeoffAnim = NULL;
    this->CachedAudioData = NULL;
    this->InteractableAnimType = EInteractAnimType::None;
    this->InteractableProp = NULL;
    this->AnimPropTemplate = NULL;
    this->GiveUpTime = 1.00f;
    this->LoadedDeathDestroyEffect = NULL;
    this->PhotoModeHelperComponent = CreateDefaultSubobject<UPhotoModeHelperComponent>(TEXT("PhotoModeHelperComponent"));
}

