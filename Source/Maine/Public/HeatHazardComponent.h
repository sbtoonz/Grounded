#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "EHeatHazardCondition.h"
#include "OnSizzleRatioChangedDelegate.h"
#include "Chaos/ChaosEngineInterface.h"
#include "OnSizzleStateChangedDelegate.h"
#include "HeatEmitterTraceResult.h"
#include "HeatHazardConditionState.h"
#include "EHealthState.h"
#include "HeatHazardComponent.generated.h"

class UMaterialInterface;
class UDirectionalLightComponent;
class AHeatHazardVolume;
class UMaterialInstanceDynamic;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHeatHazardComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OwnerSizzles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzleRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSizzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatHazardExitDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitDecayOnAdditiveSizzleDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TakesSizzleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlingDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlingDamageTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlePercentOnRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlePercentOnReviveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestSurface;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizzleRatioChanged OnSizzleRatioChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizzleStateChanged OnSizzleStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSizzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHeatHazardCondition, FHeatHazardConditionState> HeatHazardState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> LastTouchedPhysicalMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHeatEmitterTraceResult> EmitterResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* SunLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHeatHazardVolume* CurrentHazardVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PostProcessMaterialInstance;
    
public:
    UHeatHazardComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetHazardStateActive(EHeatHazardCondition Condition, bool Active);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentSizzle(float NewSizzle);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHeatHazardVolume(AHeatHazardVolume* HazardVolume);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRevive();
    
    UFUNCTION(BlueprintCallable)
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
    UFUNCTION(BlueprintCallable)
    void OnHeatVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnHeatVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSummedEmitterValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrongestEmitterValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHeatEmitterTraceResult GetStrongestEmitter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNearestEmitterValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHeatEmitterTraceResult> GetNearbyHeatEmitters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHazardStateDuration(EHeatHazardCondition Condition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHazardStateActive(EHeatHazardCondition Condition) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSizzleRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSizzle() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

