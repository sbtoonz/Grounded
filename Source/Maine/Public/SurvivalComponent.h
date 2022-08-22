#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SurvivalTraitSettings.h"
#include "BreathSettings.h"
#include "OnSurvivalStatChangedDelegate.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "OnSurvivalStatImprovedDelegate.h"
#include "SurvivalComponent.generated.h"

class UStatusEffect;
class UOverTimeEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSurvivalStatChanged OnFoodChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSurvivalStatChanged OnWaterChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    FSurvivalTraitSettings HungerSettings;
    
    UPROPERTY(EditAnywhere)
    FSurvivalTraitSettings ThirstSettings;
    
    UPROPERTY(EditAnywhere)
    FBreathSettings BreathSettings;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentFood)
    float CurrentFood;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentWater)
    float CurrentWater;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float CurrentBreath;
    
    UPROPERTY(EditAnywhere)
    float MinimumRestPercentage;
    
    UPROPERTY(EditAnywhere)
    float RestRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bKillOnEmptyFoodOrWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DeathDelayTime;
    
    UPROPERTY(Replicated, Transient)
    float DeathTimer;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DeathVignetteIntensityCurve;
    
    UPROPERTY(BlueprintAssignable)
    FOnSurvivalStatImproved OnRest;
    
private:
    UPROPERTY(Transient)
    UOverTimeEffect* PassiveHungerEffect;
    
    UPROPERTY(Transient)
    UOverTimeEffect* PassiveThirstEffect;
    
    UPROPERTY(Transient)
    UStatusEffect* HungerDamageEffect;
    
    UPROPERTY(Transient)
    UStatusEffect* HungerBonusEffect;
    
    UPROPERTY(Transient)
    UStatusEffect* ThirstDamageEffect;
    
    UPROPERTY(Transient)
    UStatusEffect* ThirstBonusEffect;
    
    UPROPERTY(Transient)
    UStatusEffect* BreathDamageEffect;
    
public:
    USurvivalComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentWater(float NewWaterLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentSizzle(float NewSizzle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentFood(float NewFoodLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentBreath(float NewBreath);
    
    UFUNCTION(BlueprintCallable)
    void RestoreBreath(float BreathAmount);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAll();
    
private:
    UFUNCTION()
    void Rest(float RestDuration);
    
    UFUNCTION()
    void OnStatusEffectsChanged();
    
protected:
    UFUNCTION()
    void OnRep_CurrentWater(float PrevWater);
    
    UFUNCTION()
    void OnRep_CurrentFood(float PrevFood);
    
private:
    UFUNCTION()
    void OnGameModeChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFullBreath() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFoodOrWaterEmpty() const;
    
    UFUNCTION(BlueprintPure)
    float GetThirstRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetHungerRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetDeathSecondsTimerRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDeathSecondsLeft() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSizzleRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBreathSecondsLeft() const;
    
    UFUNCTION(BlueprintPure)
    float GetBreathRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBreathAlertTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetBreathAdjustmentRate() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBreathe() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddWater(float WaterAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFood(float FoodAmount);
    
    
    // Fix for true pure virtual functions not being implemented
};

