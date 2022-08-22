#include "WaveManagerComponent.h"
#include "Net/UnrealNetwork.h"

class UDefensePointComponent;
class AActor;

bool UWaveManagerComponent::WaveInitiated() const {
    return false;
}

void UWaveManagerComponent::PlayWaveStartChatter() {
}

void UWaveManagerComponent::OnSpawnKilled(const FDamageInfo& DamageInfo) {
}

void UWaveManagerComponent::OnHourChanged(int32 NewHour, int32 NewDay) {
}

void UWaveManagerComponent::OnDefensePointCompleted(UDefensePointComponent* DefensePoint) {
}

void UWaveManagerComponent::OnCustomGameSettingsChanged() {
}

bool UWaveManagerComponent::IsWaveActive() const {
    return false;
}

bool UWaveManagerComponent::IsManualWaveActive() const {
    return false;
}

bool UWaveManagerComponent::IsFactionWaveActive() const {
    return false;
}

float UWaveManagerComponent::GetWaveProgress() const {
    return 0.0f;
}

int32 UWaveManagerComponent::GetNumWaveCreatures() const {
    return 0;
}

AActor* UWaveManagerComponent::GetInstigator() const {
    return NULL;
}

int32 UWaveManagerComponent::GetInitialWaveCreatureCount() const {
    return 0;
}

void UWaveManagerComponent::GenerateWaveSpawns(int32 Heat, TArray<FWaveSpawn>& WaveSpawnData, bool Finalize) {
}

void UWaveManagerComponent::GenerateFactionWaveSpawnsWithWeights(FGameplayTag FactionTag, int32 Weight, bool Finalize) {
}

void UWaveManagerComponent::GenerateFactionWaveSpawns(FGameplayTag FactionTag, int32 Heat, bool Finalize) {
}

bool UWaveManagerComponent::FactionHasFlyingCreatures(FGameplayTag FactionTag) const {
    return false;
}

bool UWaveManagerComponent::BaseMeetsWaveAnchorRatio(int32 BaseIndex) const {
    return false;
}

void UWaveManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWaveManagerComponent, AttackState);
    DOREPLIFETIME(UWaveManagerComponent, ActiveWaveInitialSpawnCount);
    DOREPLIFETIME(UWaveManagerComponent, ActiveWaveRemainingSpawnCount);
    DOREPLIFETIME(UWaveManagerComponent, bWaveActive);
    DOREPLIFETIME(UWaveManagerComponent, bOrganicWaveInitiated);
    DOREPLIFETIME(UWaveManagerComponent, bManualWaveInitiated);
    DOREPLIFETIME(UWaveManagerComponent, FailedToSpawnFactions);
    DOREPLIFETIME(UWaveManagerComponent, ActiveFactions);
    DOREPLIFETIME(UWaveManagerComponent, WaveInstigator);
    DOREPLIFETIME(UWaveManagerComponent, WaveComposition);
}

UWaveManagerComponent::UWaveManagerComponent() {
    this->MaxTimeInRetryQueue = 20.00f;
    this->DefaultWaveSpawnReputationThreshold = 200;
    this->MinimumWaveAnchorToAnchorRatio = 0.20f;
    this->OrganicWaveCooldownPeriodBase = 24;
    this->OrganicWaveCooldownPeriodRandom = 6;
    this->ManualWaveRefreshesOrganicCooldownThreshold = 2;
    this->CooldownDelay = 10;
    this->CooldownDelayThreshold = 12;
    this->FlyingCreatureSpawnMinimumSpawnDelay = 15.00f;
    this->MaxCreaturesPerTranche = 5;
    this->SecondsBetweenTranches = 20.00f;
    this->MaxActiveCreatureSpawnDelay = 10.00f;
    this->MaxActiveCreatureWeight = 8.00f;
    this->FlyingCreatureCountWeight = 1.50f;
    this->AdditionalMaxActiveCreaturesPerExtraPlayer = 0.25f;
    this->BaseBufferDistance = 0.00f;
    this->WaveTargetStartCount = 1;
    this->WaveSpawnCheckInterval = 25.00f;
    this->SpawnChancePerBaseRepRequirement = 0.10f;
    this->MinBasePointsForOrganicWave = 20.00f;
    this->SpawnEQSRequest = NULL;
    this->WaveStartEQSRequest = NULL;
    this->WaveBaseEQSRequest = NULL;
    this->WaveMusicTensionTrack = NULL;
    this->WaveMusicAttackTrack = NULL;
    this->DestroyedBuildingCountPercentLimit = 0.30f;
    this->WaveBaseDestructionRatio = 0.30f;
    this->DamageCapReductionPercentForInactivity = 0.10f;
    this->TimeBetweenInactivityChecks = 60.00f;
    this->PlayersAwayFromBaseDestructionMultiplier = 0.50f;
    this->ManualWaveFullClearPointsThreshold = 20.00f;
    this->DestroyedBuildingCountIgnoreLimitForManualWave = 10;
    this->PlayerDeathWaveDamage = 2.00f;
    this->UnderAttackChatterDelay = 1.00f;
    this->ActiveWave = NULL;
    this->AttackState = EWaveAttackState::None;
    this->ActiveWaveInitialSpawnCount = 0;
    this->ActiveWaveRemainingSpawnCount = 0;
    this->bWaveActive = false;
    this->bOrganicWaveInitiated = false;
    this->bManualWaveInitiated = false;
    this->WaveInstigator = NULL;
    this->CooldownToNextWave = 0;
    this->HighestCompletedHeatLevel = -1;
}

