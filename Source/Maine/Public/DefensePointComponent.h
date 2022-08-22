#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DefensePointChargeDelegateDelegate.h"
#include "DefensePointBuildingHealthChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "DefensePointActivateDelegateDelegate.h"
#include "DefensePointStateChangeDelegateDelegate.h"
#include "DefensePointCompleteDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "DefensePointTarget.h"
#include "DefensePointWave.h"
#include "EDefensePointState.h"
#include "EDefensePointChargeFailType.h"
#include "GlobalVariableReferenceConditional.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DefensePointComponent.generated.h"

class UMusicTrackData;
class ABuilding;
class AVolume;
class AActor;
class UHealthComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UDefensePointComponent : public UActorComponent, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDefensePointActivateDelegate OnDefensePointActivated;
    
    UPROPERTY(BlueprintAssignable)
    FDefensePointChargeDelegate OnChargeValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDefensePointCompleteDelegate OnDefensePointComplete;
    
    UPROPERTY(BlueprintAssignable)
    FDefensePointStateChangeDelegate OnDefensePointStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDefensePointBuildingHealthChangedDelegate OnDefensePointBuildingHealthChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString InteractText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString ProgressText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString SuccessText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString CreaturesStillActiveText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString RepairsNeededText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString FailsConditionalsText;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FDefensePointTarget> DefensePoints;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FDefensePointWave> WaveEncounters;
    
    UPROPERTY(EditInstanceOnly)
    bool bQuestCritical;
    
    UPROPERTY(EditInstanceOnly)
    float DeinstanceRadius;
    
    UPROPERTY(EditAnywhere)
    EDefensePointChargeFailType ChargeFailType;
    
    UPROPERTY(EditAnywhere)
    float ChargeInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChargePerTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCharge;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentCharge)
    float CurrentCharge;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(EditAnywhere)
    UMusicTrackData* OverrideMusicTrackMild;
    
    UPROPERTY(EditAnywhere)
    UMusicTrackData* OverrideMusicTrackIntense;
    
    UPROPERTY(EditDefaultsOnly)
    float UnderAttackChatterDelay;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentState)
    EDefensePointState CurrentState;
    
    UPROPERTY(Replicated, Transient)
    int32 TotalActiveCreatures;
    
    UPROPERTY(Replicated, Transient)
    int32 CurrentActiveCreatures;
    
    UPROPERTY(Replicated, Transient)
    bool bPassesConditionals;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle RewardData;
    
    UPROPERTY(EditAnywhere)
    bool TriggerUnderAttackHUDMarkers;
    
    UPROPERTY(EditAnywhere)
    float HUDMarkerCooldown;
    
    UPROPERTY(EditInstanceOnly)
    TArray<AVolume*> AttackAreas;
    
    UPROPERTY()
    TMap<AVolume*, float> LastHUDMarkerTriggerTime;
    
public:
    UDefensePointComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_CurrentState(EDefensePointState PreviousState);
    
    UFUNCTION()
    void OnRep_CurrentCharge();
    
    UFUNCTION()
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION()
    void OnEncounterSpawnKilled();
    
    UFUNCTION()
    void OnEncounterSpawnDestroyed();
    
    UFUNCTION()
    void OnEncounterComplete(AActor* DamageSource);
    
    UFUNCTION()
    void OnDefensePointHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivated();
    
protected:
    UFUNCTION()
    void OnAttackAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivated();
    
protected:
    UFUNCTION(BlueprintPure)
    static bool IsDefensePointValid(ABuilding* TargetBuilding);
    
public:
    UFUNCTION(BlueprintPure)
    float GetEnemyProgress() const;
    
    UFUNCTION(BlueprintPure)
    EDefensePointState GetDefensePointState() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDefensePointTarget> GetDefensePoints() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeRatio() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateEncounter();
    
    UFUNCTION(BlueprintCallable)
    bool ActivateEncounter(AActor* Instigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

