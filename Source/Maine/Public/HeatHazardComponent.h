#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnSizzleRatioChangedDelegate.h"
#include "PersistentInterface.h"
#include "OnSizzleStateChangedDelegate.h"
#include "EHeatHazardCondition.h"
#include "HeatEmitterTraceResult.h"
#include "HeatHazardConditionState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EHealthState.h"
#include "HeatHazardComponent.generated.h"

class UMaterialInterface;
class UDirectionalLightComponent;
class AHeatHazardVolume;
class UMaterialInstanceDynamic;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHeatHazardComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OwnerSizzles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizzleRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSizzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeatHazardExitDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExitDecayOnAdditiveSizzleDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TakesSizzleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizzlingDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizzlingDamageTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizzlePercentOnRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizzlePercentOnReviveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TestShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TestSurface;
    
    UPROPERTY(BlueprintAssignable)
    FOnSizzleRatioChanged OnSizzleRatioChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSizzleStateChanged OnSizzleStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float CurrentSizzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EHeatHazardCondition, FHeatHazardConditionState> HeatHazardState;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPhysicalSurface> LastTouchedPhysicalMaterial;
    
private:
    UPROPERTY(Transient)
    TArray<FHeatEmitterTraceResult> EmitterResults;
    
    UPROPERTY(Export, Transient)
    UDirectionalLightComponent* SunLight;
    
    UPROPERTY(Transient)
    AHeatHazardVolume* CurrentHazardVolume;
    
    UPROPERTY(Transient)
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
    
    UFUNCTION()
    void SetCurrentHeatHazardVolume(AHeatHazardVolume* HazardVolume);
    
private:
    UFUNCTION()
    void OnRevive();
    
    UFUNCTION()
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
    UFUNCTION()
    void OnHeatVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnHeatVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION()
    void OnGameModeChanged();
    
protected:
    UFUNCTION(BlueprintPure)
    float GetSummedEmitterValues() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrongestEmitterValue() const;
    
    UFUNCTION(BlueprintPure)
    FHeatEmitterTraceResult GetStrongestEmitter() const;
    
    UFUNCTION(BlueprintPure)
    float GetNearestEmitterValue() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FHeatEmitterTraceResult> GetNearbyHeatEmitters() const;
    
    UFUNCTION(BlueprintPure)
    float GetHazardStateDuration(EHeatHazardCondition Condition) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHazardStateActive(EHeatHazardCondition Condition) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentSizzleRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSizzle() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

