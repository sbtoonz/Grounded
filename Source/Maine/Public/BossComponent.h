#pragma once
#include "CoreMinimal.h"
#include "BossPhase.h"
#include "OnAllMobsEncountersKilledDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "StatusEffectOrigin.h"
#include "OnBossPhaseChangeDelegate.h"
#include "BossComponent.generated.h"

class UHealthComponent;
class ABossManager;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBossComponent : public UActorComponent, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnBossPhaseChange OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAllMobsEncountersKilled OnAllMobsEncountersKilled;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FBossPhase> Phases;
    
public:
    UBossComponent();
    UFUNCTION()
    void SpawnMobsEncountersPhase();
    
    UFUNCTION()
    void SetBossManager(ABossManager* NewBossManager);
    
protected:
    UFUNCTION()
    void OnHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
public:
    UFUNCTION()
    void AllMobsEncounterKilled();
    
    
    // Fix for true pure virtual functions not being implemented
};

