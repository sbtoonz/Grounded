#pragma once
#include "CoreMinimal.h"
#include "TrapTriggerStateChangeDelegateDelegate.h"
#include "Building.h"
#include "StatusEffectOrigin.h"
#include "TrapEnterDelegateDelegate.h"
#include "TrapExitDelegateDelegate.h"
#include "TrapArmedDelegateDelegate.h"
#include "TrapItemAddedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ETrapArmedSetting.h"
#include "ETrapApplyType.h"
#include "DamageData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeRequirements.h"
#include "TrapHitParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ETrapTriggerState.h"
#include "DamageInfo.h"
#include "Trap.generated.h"

class UPrimitiveComponent;
class AHazard;
class ATargetPoint;
class AActor;
class UAttack;
class ASurvivalCharacter;
class UAttackHandlerComponent;
class AController;
class UBaseLODActor;

UCLASS(Abstract)
class MAINE_API ATrap : public ABuilding, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTrapEnterDelegate OnCharacterEnter;
    
    UPROPERTY(BlueprintAssignable)
    FTrapExitDelegate OnCharacterExit;
    
    UPROPERTY(BlueprintAssignable)
    FTrapItemAddedDelegate OnItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FTrapArmedDelegate OnTrapArmed;
    
    UPROPERTY(BlueprintAssignable)
    FTrapTriggerStateChangeDelegate OnTrapTriggerStateChange;
    
protected:
    UPROPERTY(EditAnywhere)
    FLocString InteractText;
    
    UPROPERTY(EditDefaultsOnly)
    ETrapArmedSetting TrapArmedSetting;
    
    UPROPERTY(EditDefaultsOnly)
    ETrapApplyType TrapApplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriggerDelay;
    
    UPROPERTY(EditAnywhere)
    float TriggerRearmTime;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyOnTrigger;
    
    UPROPERTY(EditAnywhere)
    float SelfDamageOnTrigger;
    
    UPROPERTY(EditAnywhere)
    bool bFriendlyFire;
    
    UPROPERTY(EditAnywhere)
    bool bFriendlyTrigger;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysTick;
    
    UPROPERTY(EditAnywhere)
    bool bAcceptAnyPlayerDamage;
    
    UPROPERTY(EditAnywhere)
    FDamageData DamageData;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TrapAttackData;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    FRecipeRequirements TrapRequirements;
    
    UPROPERTY(EditAnywhere)
    FTrapHitParams TrapHitParams;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AHazard> HazardClass;
    
    UPROPERTY(EditAnywhere)
    ATargetPoint* TrapAttackTargetPoint;
    
    UPROPERTY(EditAnywhere)
    bool bLastActorOnHitHazardOwner;
    
    UPROPERTY(Transient)
    AActor* LastActorOnHit;
    
    UPROPERTY(Transient)
    UAttack* TrapAttack;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ItemsAdded)
    int32 ItemsAdded;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ASurvivalCharacter>> TargetsInside;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TrapArmed)
    uint8 bTrapArmed: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TrapTriggerState)
    ETrapTriggerState TrapTriggerState;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> TriggerComponents;
    
    UPROPERTY(Export)
    UAttackHandlerComponent* AttackHandlerComponent;
    
public:
    ATrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void SpawnHazard();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrapArmed(bool bActive, bool bForce);
    
protected:
    UFUNCTION()
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnHazard(AHazard* SpawnedHazard);
    
protected:
    UFUNCTION()
    void OnRep_TrapTriggerState();
    
    UFUNCTION()
    void OnRep_TrapArmed();
    
    UFUNCTION()
    void OnRep_ItemsAdded();
    
    UFUNCTION()
    void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTrapArmed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintPure)
    float GetTriggerRearmTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetTriggerDelay() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingTriggerDelay() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumItems() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceTrigger();
    
    
    // Fix for true pure virtual functions not being implemented
};

