#pragma once
#include "CoreMinimal.h"
#include "EBehaviorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EBTNodeResult -FallbackName=EBTNodeResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIMoveRequest -FallbackName=AIMoveRequest
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EDefaultBehaviorType.h"
#include "BehaviorMovementConfig.h"
#include "AICombatAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
#include "EWaveAttackState.h"
#include "EHealthState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ECreatureActivityMode.h"
#include "SurvivalAIController.generated.h"

class UTrackingComponent;
class UAttack;
class ASwimmingSurvivalCharacter;
class ASurvivalCharacter;
class UEnvQuery;
class UAITargettingComponent;
class UInterestComponent;
class ANonPlayerInteraction;
class UAIDetectionComponent;
class UBehaviorTree;
class UAnimMontage;
class UAbility;
class UBaseLODActor;
class ASurvivalCreature;
class AActor;
class UWaveCreatureComponent;
class AWaypoint;
class AController;
class UWorld;

UCLASS()
class MAINE_API ASurvivalAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EBTNodeResult::Type> ManualMoveResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsInBurrowed;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* WanderDestinationQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* WarpToFollowTargetQuery;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatRange PetFidgetInterval;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAITargettingComponent* TargettingComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIDetectionComponent* DetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInterestComponent* InterestComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrackingComponent* TrackingComponent;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(EditAnywhere)
    bool bIsStationary;
    
    UPROPERTY(EditAnywhere)
    bool bLevelWhenIdle;
    
    UPROPERTY(EditAnywhere)
    float TetherRange;
    
    UPROPERTY(EditAnywhere)
    float TetherRangeTame;
    
    UPROPERTY(EditAnywhere)
    float WanderRange;
    
    UPROPERTY(EditAnywhere)
    float ActivePetWanderRange;
    
    UPROPERTY(EditAnywhere)
    float InactivePetWanderRange;
    
    UPROPERTY(EditAnywhere)
    float PreferredMinimumHeight;
    
    UPROPERTY(EditAnywhere)
    bool bFocusOnInterest;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(EditAnywhere)
    UClass* TargetClass;
    
    UPROPERTY(EditAnywhere)
    FVector2D ConeWanderRange;
    
    UPROPERTY(EditAnywhere)
    float ExploreMinAltitude;
    
    UPROPERTY(EditAnywhere)
    float ExploreMaxAltitude;
    
    UPROPERTY(EditAnywhere)
    EDefaultBehaviorType DefaultBehaviorType;
    
    UPROPERTY(EditAnywhere)
    TMap<EBehaviorType, FBehaviorMovementConfig> MoveToConfig;
    
    UPROPERTY(Transient)
    ASurvivalCharacter* AICharacter;
    
    UPROPERTY(Transient)
    ASurvivalCreature* AICreature;
    
    UPROPERTY(Transient)
    ASwimmingSurvivalCharacter* AISwimmingCharacter;
    
    UPROPERTY(Transient)
    FAIMoveRequest CurrentMove;
    
    UPROPERTY(EditAnywhere)
    float TokenCooldown;
    
    UPROPERTY(EditAnywhere)
    float TokenRandomDeviation;
    
    UPROPERTY(EditAnywhere)
    int32 UsesPerToken;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreTargetTokenLimit;
    
    UPROPERTY(EditAnywhere)
    bool bClearThreatAfterAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FleeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNeverFlee;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBurrowAfterFlee;
    
    UPROPERTY(EditAnywhere)
    bool bCanStrafeWhileInCombatIdle;
    
    UPROPERTY(EditAnywhere)
    float CombatIdleTime;
    
    UPROPERTY(EditAnywhere)
    float CombatIdleRandomDeviation;
    
    UPROPERTY(EditAnywhere)
    float StrafeIdleTime;
    
    UPROPERTY(EditAnywhere)
    float StrafeIdleRandomDeviation;
    
    UPROPERTY(EditAnywhere)
    bool bPutsPlayersInCombat;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreWander;
    
    UPROPERTY(Transient)
    FAICombatAction DesiredCombatAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(EditAnywhere)
    FName AttachmentTag;
    
    UPROPERTY(EditAnywhere)
    float TerrainTraceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WanderBlockOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D HorizontalWanderAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D VerticalWanderAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 DrawDebugLines: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bWaitAfterWander: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDoNonPlayerInteractions: 1;
    
public:
    UPROPERTY(Transient)
    UAbility* NextWantedAbility;
    
    UPROPERTY(Transient)
    UAbility* LastAbilitySelectedCombatAction;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWaveCreatureComponent* WaveCreatureComponent;
    
    ASurvivalAIController();
    UFUNCTION(BlueprintCallable)
    void UpdateHomeLocation();
    
protected:
    UFUNCTION()
    void TickFindNonPlayerInteractions(float DeltaTime);
    
public:
    UFUNCTION(BlueprintPure)
    bool ShouldWaitAfterWander();
    
    UFUNCTION(BlueprintPure)
    bool ShouldStrafeInCombat();
    
    UFUNCTION(BlueprintPure)
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
    UFUNCTION()
    void OnWaveAttackStateChanged(EWaveAttackState AttackState);
    
    UFUNCTION()
    void OnRevived();
    
    UFUNCTION()
    void OnHealthStateChanged(EHealthState HealthState);
    
    UFUNCTION()
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnCombatChanged(ASurvivalCharacter* CombatCharacter, bool bInCombat);
    
    UFUNCTION()
    void OnAttack(UAttack* Attack);
    
    UFUNCTION()
    void OnActorCollision(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsScriptedBpConditionValid(FDataTableRowHandle AbilityData);
    
    UFUNCTION(BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPatrol() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAbilityUsableOfPriority(int32 MinPriority);
    
    UFUNCTION(BlueprintPure)
    bool HasAbilityUsable();
    
private:
    UFUNCTION()
    void HandleFollowTargetRespawned(ASurvivalCharacter* InOldPawn, ASurvivalCharacter* InNewPawn);
    
protected:
    UFUNCTION()
    void HandleActivityModeChanged(UInterestComponent* Sender, ECreatureActivityMode Mode);
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetWaveDestination() const;
    
    UFUNCTION(BlueprintPure)
    float GetWanderRange(const UWorld* World) const;
    
    UFUNCTION(BlueprintPure)
    bool GetUsePathFollower() const;
    
    UFUNCTION(BlueprintPure)
    float GetTetherRange() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSearchOrigin() const;
    
    UFUNCTION(BlueprintPure)
    float GetRandomStrafeIdleTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetRandomCombatIdleTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetPreferredMinimumHeight() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHomeLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGoalLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetGoalActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetFollowTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetFleeRange() const;
    
    UFUNCTION(BlueprintPure)
    ANonPlayerInteraction* GetDesiredNonPlayerInteraction() const;
    
    UFUNCTION(BlueprintPure)
    EBehaviorType GetDesiredBehavior() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDesiredAttackTarget() const;
    
    UFUNCTION(BlueprintPure)
    UAttack* GetDesiredAttack() const;
    
    UFUNCTION(BlueprintPure)
    AWaypoint* GetCurrentWaypoint() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetConeWanderRange() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBlackboardTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetBlackboardTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveManual(TEnumAsByte<EBTNodeResult::Type> ResultType);
    
    UFUNCTION()
    FVector FindClosestAttachPoint();
    
    UFUNCTION(BlueprintCallable)
    void ClearRetreat();
    
};

