#pragma once
#include "CoreMinimal.h"
#include "WaveSpawnFailedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "WaveSpawnedDelegateDelegate.h"
#include "WaveCompositionData.h"
#include "WaveCompleteDelegateDelegate.h"
#include "WaveAttackStateChangedDelegateDelegate.h"
#include "OnWaveCompositionChangedDelegateDelegate.h"
#include "ActorCustomTickFunction.h"
#include "WaveSpawn.h"
#include "EWaveCreatureWeightClass.h"
#include "WaveSpawnFaction.h"
#include "HeatBracket.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "EWaveAttackState.h"
#include "WaveManagerComponent.generated.h"

class UEQSRequest;
class UMusicTrackData;
class USpawnedWave;
class AActor;
class AWaveBlockerVolume;
class UDefensePointComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWaveManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaveSpawnedDelegate OnWaveSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FWaveCompleteDelegate OnWaveCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FWaveSpawnFailedDelegate OnWaveSpawnFailed;
    
    UPROPERTY(BlueprintAssignable)
    FWaveAttackStateChangedDelegate OnWaveAttackStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveCompositionChangedDelegate OnWaveCompositionChanged;
    
protected:
    UPROPERTY()
    FActorCustomTickFunction RetrySpawnsTick;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FWaveSpawnFaction> SpawnData;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxTimeInRetryQueue;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FHeatBracket> HeatBrackets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> AdditionalMultiplayerHeat;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultWaveSpawnReputationThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, int32> WaveSpawnReputationThresholds;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumWaveAnchorToAnchorRatio;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OrganicWaveCooldownPeriodBase;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OrganicWaveCooldownPeriodRandom;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ManualWaveRefreshesOrganicCooldownThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CooldownDelay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CooldownDelayThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float FlyingCreatureSpawnMinimumSpawnDelay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxCreaturesPerTranche;
    
    UPROPERTY(EditDefaultsOnly)
    float SecondsBetweenTranches;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxActiveCreatureSpawnDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxActiveCreatureWeight;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EWaveCreatureWeightClass, float> ActiveCreatureWeights;
    
    UPROPERTY(EditDefaultsOnly)
    float FlyingCreatureCountWeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AdditionalMaxActiveCreaturesPerExtraPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseBufferDistance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WaveTargetStartCount;
    
    UPROPERTY(EditDefaultsOnly)
    float WaveSpawnCheckInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnChancePerBaseRepRequirement;
    
    UPROPERTY(EditDefaultsOnly)
    float MinBasePointsForOrganicWave;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D FlyingCreatureSpawnOffsetMinMax;
    
    UPROPERTY(EditDefaultsOnly)
    UEQSRequest* SpawnEQSRequest;
    
    UPROPERTY(EditDefaultsOnly)
    UEQSRequest* WaveStartEQSRequest;
    
    UPROPERTY(EditDefaultsOnly)
    UEQSRequest* WaveBaseEQSRequest;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* WaveMusicTensionTrack;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* WaveMusicAttackTrack;
    
    UPROPERTY(EditDefaultsOnly)
    float DestroyedBuildingCountPercentLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float WaveBaseDestructionRatio;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve DestroyedBuildingCountPercentLimitCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve WaveBaseDestructionRatioCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageCapReductionPercentForInactivity;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeBetweenInactivityChecks;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayersAwayFromBaseDestructionMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float ManualWaveFullClearPointsThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DestroyedBuildingCountIgnoreLimitForManualWave;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerDeathWaveDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float UnderAttackChatterDelay;
    
private:
    UPROPERTY(Transient)
    USpawnedWave* ActiveWave;
    
    UPROPERTY(Replicated)
    EWaveAttackState AttackState;
    
    UPROPERTY(Replicated)
    int32 ActiveWaveInitialSpawnCount;
    
    UPROPERTY(Replicated)
    int32 ActiveWaveRemainingSpawnCount;
    
    UPROPERTY(Replicated, Transient)
    uint8 bWaveActive: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bOrganicWaveInitiated: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bManualWaveInitiated: 1;
    
    UPROPERTY(Replicated, Transient)
    TArray<FGameplayTag> FailedToSpawnFactions;
    
    UPROPERTY(Replicated, Transient)
    TArray<FGameplayTag> ActiveFactions;
    
    UPROPERTY(Replicated, Transient)
    AActor* WaveInstigator;
    
    UPROPERTY()
    int32 CooldownToNextWave;
    
    UPROPERTY()
    int8 HighestCompletedHeatLevel;
    
    UPROPERTY(Replicated, Transient)
    TArray<FWaveCompositionData> WaveComposition;
    
    UPROPERTY()
    TArray<AWaveBlockerVolume*> BlockingVolumes;
    
public:
    UWaveManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool WaveInitiated() const;
    
private:
    UFUNCTION()
    void PlayWaveStartChatter();
    
protected:
    UFUNCTION()
    void OnSpawnKilled(const FDamageInfo& DamageInfo);
    
private:
    UFUNCTION()
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
protected:
    UFUNCTION()
    void OnDefensePointCompleted(UDefensePointComponent* DefensePoint);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomGameSettingsChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWaveActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsManualWaveActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFactionWaveActive() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaveProgress() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumWaveCreatures() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInitialWaveCreatureCount() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateWaveSpawns(int32 Heat, UPARAM(Ref) TArray<FWaveSpawn>& WaveSpawnData, bool Finalize);
    
    UFUNCTION(BlueprintCallable)
    void GenerateFactionWaveSpawnsWithWeights(FGameplayTag FactionTag, int32 Weight, bool Finalize);
    
    UFUNCTION(BlueprintCallable)
    void GenerateFactionWaveSpawns(FGameplayTag FactionTag, int32 Heat, bool Finalize);
    
    UFUNCTION(BlueprintPure)
    bool FactionHasFlyingCreatures(FGameplayTag FactionTag) const;
    
    UFUNCTION(BlueprintPure)
    bool BaseMeetsWaveAnchorRatio(int32 BaseIndex) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

