#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossPhase.h"
#include "OnAllMobsEncountersKilledDelegate.h"
#include "StatusEffectOrigin.h"
#include "OnBossPhaseChangeDelegate.h"
#include "BossComponent.generated.h"

class ABossManager;
class UHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBossComponent : public UActorComponent, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossPhaseChange OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllMobsEncountersKilled OnAllMobsEncountersKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBossPhase> Phases;
    
public:
    UBossComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnMobsEncountersPhase();
    
    UFUNCTION(BlueprintCallable)
    void SetBossManager(ABossManager* NewBossManager);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintCallable)
    void AllMobsEncounterKilled();
    
    
    // Fix for true pure virtual functions not being implemented
};

