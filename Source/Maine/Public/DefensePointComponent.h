#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DefensePointStateChangeDelegateDelegate.h"
#include "DefensePointTarget.h"
#include "InteractableInterface.h"
#include "DefensePointCompleteDelegateDelegate.h"
#include "DefensePointChargeDelegateDelegate.h"
#include "PersistentInterface.h"
#include "DefensePointActivateDelegateDelegate.h"
#include "DefensePointBuildingHealthChangedDelegateDelegate.h"
#include "LocString.h"
#include "DefensePointWave.h"
#include "EDefensePointChargeFailType.h"
#include "GlobalVariableReferenceConditional.h"
#include "EDefensePointState.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DefensePointComponent.generated.h"

class UMusicTrackData;
class AVolume;
class AActor;
class UHealthComponent;
class UPrimitiveComponent;
class ABuilding;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UDefensePointComponent : public UActorComponent, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointActivateDelegate OnDefensePointActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointChargeDelegate OnChargeValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointCompleteDelegate OnDefensePointComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointStateChangeDelegate OnDefensePointStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointBuildingHealthChangedDelegate OnDefensePointBuildingHealthChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString ProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString SuccessText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString CreaturesStillActiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString RepairsNeededText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString FailsConditionalsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefensePointTarget> DefensePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefensePointWave> WaveEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeinstanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDefensePointChargeFailType ChargeFailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargePerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCharge, meta=(AllowPrivateAccess=true))
    float CurrentCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* OverrideMusicTrackMild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* OverrideMusicTrackIntense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderAttackChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EDefensePointState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalActiveCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentActiveCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bPassesConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerUnderAttackHUDMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDMarkerCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> AttackAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AVolume*, float> LastHUDMarkerTriggerTime;
    
public:
    UDefensePointComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(EDefensePointState PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCharge();
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnEncounterSpawnKilled();
    
    UFUNCTION(BlueprintCallable)
    void OnEncounterSpawnDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnEncounterComplete(AActor* DamageSource);
    
    UFUNCTION(BlueprintCallable)
    void OnDefensePointHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDefensePointValid(ABuilding* TargetBuilding);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDefensePointState GetDefensePointState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDefensePointTarget> GetDefensePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeRatio() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateEncounter();
    
    UFUNCTION(BlueprintCallable)
    bool ActivateEncounter(AActor* Instigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

