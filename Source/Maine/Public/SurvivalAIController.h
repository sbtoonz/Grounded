#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EBehaviorType.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDefaultBehaviorType.h"
#include "BehaviorMovementConfig.h"
#include "AITypes.h"
#include "AICombatAction.h"
#include "EWaveAttackState.h"
#include "EHealthState.h"
#include "DamageInfo.h"
#include "Engine/EngineTypes.h"
#include "Engine/DataTable.h"
#include "ECreatureActivityMode.h"
#include "SurvivalAIController.generated.h"

class UTrackingComponent;
class ASurvivalCharacter;
class UEnvQuery;
class UAITargettingComponent;
class UAIDetectionComponent;
class UInterestComponent;
class UBehaviorTree;
class ASurvivalCreature;
class ASwimmingSurvivalCharacter;
class UAnimMontage;
class AActor;
class UAbility;
class UWaveCreatureComponent;
class AWaypoint;
class UAttack;
class UWorld;
class AController;
class UBaseLODActor;
class ANonPlayerInteraction;

UCLASS(Blueprintable)
class MAINE_API ASurvivalAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTNodeResult::Type> ManualMoveResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInBurrowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* WanderDestinationQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* WarpToFollowTargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange PetFidgetInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAITargettingComponent* TargettingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIDetectionComponent* DetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInterestComponent* InterestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTrackingComponent* TrackingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelWhenIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherRangeTame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivePetWanderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePetWanderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredMinimumHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ConeWanderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExploreMinAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExploreMaxAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDefaultBehaviorType DefaultBehaviorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBehaviorType, FBehaviorMovementConfig> MoveToConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASurvivalCharacter* AICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASurvivalCreature* AICreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASwimmingSurvivalCharacter* AISwimmingCharacter;
    
    UPROPERTY(EditAnywhere, Transient)
    FAIMoveRequest CurrentMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TokenCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TokenRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsesPerToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTargetTokenLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearThreatAfterAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FleeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverFlee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBurrowAfterFlee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStrafeWhileInCombatIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatIdleRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeIdleRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPutsPlayersInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreWander;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAICombatAction DesiredCombatAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderBlockOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HorizontalWanderAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VerticalWanderAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawDebugLines: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWaitAfterWander: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNonPlayerInteractions: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbility* NextWantedAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbility* LastAbilitySelectedCombatAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWaveCreatureComponent* WaveCreatureComponent;
    
    ASurvivalAIController();
    UFUNCTION(BlueprintCallable)
    void UpdateHomeLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickFindNonPlayerInteractions(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldWaitAfterWander();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldStrafeInCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBurrowAfterFlee() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWantsToRetreat();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWaypoint(AWaypoint* Waypoint);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetNextWaypoint(AWaypoint* NextWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void SetHomeLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabled(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredCombatAction(AActor* Target, UAttack* Attack, UAnimMontage* AnimMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaveAttackStateChanged(EWaveAttackState AttackState);
    
    UFUNCTION(BlueprintCallable)
    void OnRevived();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthStateChanged(EHealthState HealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatChanged(ASurvivalCharacter* CombatCharacter, bool bInCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnAttack(UAttack* Attack);
    
    UFUNCTION(BlueprintCallable)
    void OnActorCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsScriptedBpConditionValid(FDataTableRowHandle AbilityData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPatrol() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbilityUsableOfPriority(int32 MinPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbilityUsable();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFollowTargetRespawned(ASurvivalCharacter* InOldPawn, ASurvivalCharacter* InNewPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleActivityModeChanged(UInterestComponent* Sender, ECreatureActivityMode Mode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaveDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWanderRange(const UWorld* World) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsePathFollower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTetherRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSearchOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomStrafeIdleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomCombatIdleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreferredMinimumHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGoalLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGoalActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFollowTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFleeRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANonPlayerInteraction* GetDesiredNonPlayerInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBehaviorType GetDesiredBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDesiredAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttack* GetDesiredAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWaypoint* GetCurrentWaypoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetConeWanderRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBlackboardTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBlackboardTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveManual(TEnumAsByte<EBTNodeResult::Type> ResultType);
    
    UFUNCTION(BlueprintCallable)
    FVector FindClosestAttachPoint();
    
    UFUNCTION(BlueprintCallable)
    void ClearRetreat();
    
};

