#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "ETrapArmedSetting.h"
#include "StatusEffectOrigin.h"
#include "LocString.h"
#include "TrapExitDelegateDelegate.h"
#include "TrapEnterDelegateDelegate.h"
#include "TrapArmedDelegateDelegate.h"
#include "TrapItemAddedDelegateDelegate.h"
#include "TrapTriggerStateChangeDelegateDelegate.h"
#include "ETrapTriggerState.h"
#include "ETrapApplyType.h"
#include "DamageData.h"
#include "Engine/DataTable.h"
#include "RecipeRequirements.h"
#include "TrapHitParams.h"
#include "Engine/EngineTypes.h"
#include "DamageInfo.h"
#include "Trap.generated.h"

class AHazard;
class ATargetPoint;
class AActor;
class UAttack;
class ASurvivalCharacter;
class UPrimitiveComponent;
class UAttackHandlerComponent;
class AController;
class UBaseLODActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API ATrap : public ABuilding, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapEnterDelegate OnCharacterEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapExitDelegate OnCharacterExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapItemAddedDelegate OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapArmedDelegate OnTrapArmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapTriggerStateChangeDelegate OnTrapTriggerStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapArmedSetting TrapArmedSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapApplyType TrapApplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerRearmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfDamageOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendlyTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptAnyPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageData DamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TrapAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeRequirements TrapRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapHitParams TrapHitParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHazard> HazardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* TrapAttackTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastActorOnHitHazardOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastActorOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttack* TrapAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemsAdded, meta=(AllowPrivateAccess=true))
    int32 ItemsAdded;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ASurvivalCharacter>> TargetsInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TrapArmed, meta=(AllowPrivateAccess=true))
    uint8 bTrapArmed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TrapTriggerState, meta=(AllowPrivateAccess=true))
    ETrapTriggerState TrapTriggerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> TriggerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttackHandlerComponent* AttackHandlerComponent;
    
public:
    ATrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnHazard();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrapArmed(bool bActive, bool bForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnHazard(AHazard* SpawnedHazard);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapTriggerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapArmed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemsAdded();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrapArmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTriggerRearmTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTriggerDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingTriggerDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItems() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceTrigger();
    
    
    // Fix for true pure virtual functions not being implemented
};

