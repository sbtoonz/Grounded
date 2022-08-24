#include "BossManager.h"
#include "Net/UnrealNetwork.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

class ASurvivalPlayerCharacter;
class AActor;
class APlayerController;

void ABossManager::SpawnPhaseEncounter(int32 PhaseIndex) {
}

void ABossManager::SpawnActor(UClass* Class, const FTransform& Transform) {
}

void ABossManager::OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ABossManager::OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ABossManager::OnPhotoModePreEntered(APlayerController* Controller) {
}

void ABossManager::OnPhotoModeExited() {
}


void ABossManager::OnPhaseChange(int32 NewPhase) {
}

void ABossManager::OnEncounterSpawnKilled(AActor* ActorDamageSource) {
}

void ABossManager::OnEncounterComplete(AActor* DamageSource) {
}



bool ABossManager::IsPlayerInside(ASurvivalPlayerCharacter* PlayerCharacter) const {
    return false;
}

bool ABossManager::IsActive() const {
    return false;
}

int32 ABossManager::GetEncounterMobs() {
    return 0;
}

void ABossManager::DeactivateBossEncounter() {
}

void ABossManager::ActivateBossEncounter() {
}

void ABossManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABossManager, bBossActive);
}

ABossManager::ABossManager() {
    this->Encounter = NULL;
    this->Volume = NULL;
    this->ItemSpawnPoint = NULL;
    this->BossMusicTrack = NULL;
    this->bSpawnBossPhaseEncountersDirectly = true;
    this->bKillMobsEncounterOnBossClear = false;
    this->bBossActive = false;
    this->MaxKillCount = 0;
    this->BossComponent = NULL;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

