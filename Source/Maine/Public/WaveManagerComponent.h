#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaveSpawnFailedDelegateDelegate.h"
#include "PersistentInterface.h"
#include "WaveSpawnedDelegateDelegate.h"
#include "WaveCompositionData.h"
#include "HeatBracket.h"
#include "WaveCompleteDelegateDelegate.h"
#include "WaveAttackStateChangedDelegateDelegate.h"
#include "OnWaveCompositionChangedDelegateDelegate.h"
#include "ActorCustomTickFunction.h"
#include "WaveSpawn.h"
#include "UObject/NoExportTypes.h"
#include "WaveSpawnFaction.h"
#include "GameplayTagContainer.h"
#include "EWaveCreatureWeightClass.h"
#include "Curves/CurveFloat.h"
#include "EWaveAttackState.h"
#include "DamageInfo.h"
#include "WaveManagerComponent.generated.h"

class UEQSRequest;
class UMusicTrackData;
class USpawnedWave;
class AActor;
class AWaveBlockerVolume;
class UDefensePointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWaveManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSpawnedDelegate OnWaveSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveCompleteDelegate OnWaveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSpawnFailedDelegate OnWaveSpawnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveAttackStateChangedDelegate OnWaveAttackStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveCompositionChangedDelegate OnWaveCompositionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorCustomTickFunction RetrySpawnsTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveSpawnFaction> SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeInRetryQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeatBracket> HeatBrackets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AdditionalMultiplayerHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultWaveSpawnReputationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> WaveSpawnReputationThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumWaveAnchorToAnchorRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrganicWaveCooldownPeriodBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrganicWaveCooldownPeriodRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ManualWaveRefreshesOrganicCooldownThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownDelayThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingCreatureSpawnMinimumSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCreaturesPerTranche;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsBetweenTranches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActiveCreatureSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActiveCreatureWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWaveCreatureWeightClass, float> ActiveCreatureWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingCreatureCountWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalMaxActiveCreaturesPerExtraPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseBufferDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveTargetStartCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpawnCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChancePerBaseRepRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBasePointsForOrganicWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FlyingCreatureSpawnOffsetMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEQSRequest* SpawnEQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEQSRequest* WaveStartEQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEQSRequest* WaveBaseEQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* WaveMusicTensionTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* WaveMusicAttackTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedBuildingCountPercentLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveBaseDestructionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DestroyedBuildingCountPercentLimitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve WaveBaseDestructionRatioCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCapReductionPercentForInactivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenInactivityChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersAwayFromBaseDestructionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualWaveFullClearPointsThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyedBuildingCountIgnoreLimitForManualWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDeathWaveDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderAttackChatterDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpawnedWave* ActiveWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWaveAttackState AttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ActiveWaveInitialSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ActiveWaveRemainingSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWaveActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bOrganicWaveInitiated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bManualWaveInitiated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> FailedToSpawnFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ActiveFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* WaveInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownToNextWave;
    
    UPROPERTY(EditAnywhere)
    int8 HighestCompletedHeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWaveCompositionData> WaveComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWaveBlockerVolume*> BlockingVolumes;
    
public:
    UWaveManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WaveInitiated() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayWaveStartChatter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnKilled(const FDamageInfo& DamageInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDefensePointCompleted(UDefensePointComponent* DefensePoint);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomGameSettingsChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaveActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManualWaveActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFactionWaveActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWaveCreatures() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialWaveCreatureCount() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateWaveSpawns(int32 Heat, UPARAM(Ref) TArray<FWaveSpawn>& WaveSpawnData, bool Finalize);
    
    UFUNCTION(BlueprintCallable)
    void GenerateFactionWaveSpawnsWithWeights(FGameplayTag FactionTag, int32 Weight, bool Finalize);
    
    UFUNCTION(BlueprintCallable)
    void GenerateFactionWaveSpawns(FGameplayTag FactionTag, int32 Heat, bool Finalize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FactionHasFlyingCreatures(FGameplayTag FactionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BaseMeetsWaveAnchorRatio(int32 BaseIndex) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

