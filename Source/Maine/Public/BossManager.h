#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossCompleteDelegateDelegate.h"
#include "BossDroppedItem.h"
#include "BossActivateDelegateDelegate.h"
#include "ItemSource.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "BossActorSpawn.h"
#include "PhaseEncounter.h"
#include "UObject/NoExportTypes.h"
#include "BossManager.generated.h"

class AEncounter;
class UBossComponent;
class AVolume;
class ATargetPoint;
class UMusicTrackData;
class UPersistenceComponent;
class UObsidianIDComponent;
class APlayerController;
class ASurvivalPlayerCharacter;

UCLASS(Blueprintable)
class MAINE_API ABossManager : public AActor, public IInteractableInterface, public IPersistentInterface, public IItemSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActivateDelegate OnBossActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActivateDelegate OnBossDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCompleteDelegate OnBossComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEncounter* Encounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle KeyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* BossMusicTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBossActorSpawn> BossEventActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhaseEncounter> BossPhaseEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnBossPhaseEncountersDirectly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillMobsEncounterOnBossClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBossDroppedItem> CachedDroppedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBossActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxKillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBossComponent* BossComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ABossManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhaseEncounter(int32 PhaseIndex);
    
    UFUNCTION(BlueprintCallable)
    void SpawnActor(UClass* Class, const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModePreEntered(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeExited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseChangeBP(int32 NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnPhaseChange(int32 NewPhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEncounterSpawnKilled(AActor* ActorDamageSource);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEncounterComplete(AActor* DamageSource);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInside(ASurvivalPlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetEncounterMobs();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateBossEncounter();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBossEncounter();
    
    
    // Fix for true pure virtual functions not being implemented
};

