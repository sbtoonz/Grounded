#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BossCompleteDelegateDelegate.h"
#include "BossActivateDelegateDelegate.h"
#include "ItemSource.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "BossActorSpawn.h"
#include "PhaseEncounter.h"
#include "BossDroppedItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BossManager.generated.h"

class UMusicTrackData;
class AEncounter;
class AVolume;
class ATargetPoint;
class UBossComponent;
class UPersistenceComponent;
class UObsidianIDComponent;
class APlayerController;
class ASurvivalPlayerCharacter;

UCLASS()
class MAINE_API ABossManager : public AActor, public IInteractableInterface, public IPersistentInterface, public IItemSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBossActivateDelegate OnBossActivated;
    
    UPROPERTY(BlueprintAssignable)
    FBossActivateDelegate OnBossDeactivated;
    
    UPROPERTY(BlueprintAssignable)
    FBossCompleteDelegate OnBossComplete;
    
protected:
    UPROPERTY(EditInstanceOnly)
    AEncounter* Encounter;
    
    UPROPERTY(EditInstanceOnly)
    AVolume* Volume;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle KeyItem;
    
    UPROPERTY(EditInstanceOnly)
    ATargetPoint* ItemSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    UMusicTrackData* BossMusicTrack;
    
    UPROPERTY(EditAnywhere)
    FLocString InteractText;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FBossActorSpawn> BossEventActors;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FPhaseEncounter> BossPhaseEncounters;
    
    UPROPERTY(EditInstanceOnly)
    bool bSpawnBossPhaseEncountersDirectly;
    
    UPROPERTY(EditInstanceOnly)
    bool bKillMobsEncounterOnBossClear;
    
    UPROPERTY()
    TArray<FBossDroppedItem> CachedDroppedItems;
    
    UPROPERTY(Replicated)
    bool bBossActive;
    
    UPROPERTY(EditAnywhere)
    int32 MaxKillCount;
    
    UPROPERTY(Export)
    UBossComponent* BossComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ABossManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SpawnPhaseEncounter(int32 PhaseIndex);
    
    UFUNCTION(BlueprintCallable)
    void SpawnActor(UClass* Class, const FTransform& Transform);
    
protected:
    UFUNCTION()
    void OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnPhotoModePreEntered(APlayerController* Controller);
    
    UFUNCTION()
    void OnPhotoModeExited();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPhaseChangeBP(int32 NewPhase);
    
    UFUNCTION()
    void OnPhaseChange(int32 NewPhase);
    
public:
    UFUNCTION()
    void OnEncounterSpawnKilled(AActor* ActorDamageSource);
    
protected:
    UFUNCTION()
    void OnEncounterComplete(AActor* DamageSource);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivated();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerInside(ASurvivalPlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION()
    int32 GetEncounterMobs();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateBossEncounter();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBossEncounter();
    
    
    // Fix for true pure virtual functions not being implemented
};

