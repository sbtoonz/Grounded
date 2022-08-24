#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "Curves/CurveFloat.h"
#include "SurvivalTraitSettings.h"
#include "BreathSettings.h"
#include "OnSurvivalStatChangedDelegate.h"
#include "OnSurvivalStatImprovedDelegate.h"
#include "SurvivalComponent.generated.h"

class UOverTimeEffect;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSurvivalStatChanged OnFoodChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSurvivalStatChanged OnWaterChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurvivalTraitSettings HungerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurvivalTraitSettings ThirstSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreathSettings BreathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentFood, meta=(AllowPrivateAccess=true))
    float CurrentFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWater, meta=(AllowPrivateAccess=true))
    float CurrentWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBreath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumRestPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillOnEmptyFoodOrWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DeathTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DeathVignetteIntensityCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSurvivalStatImproved OnRest;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOverTimeEffect* PassiveHungerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOverTimeEffect* PassiveThirstEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* HungerDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* HungerBonusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* ThirstDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* ThirstBonusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void Rest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectsChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWater(float PrevWater);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentFood(float PrevFood);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullBreath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFoodOrWaterEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThirstRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHungerRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathSecondsTimerRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeathSecondsLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSizzleRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreathSecondsLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBreathRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreathAlertTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBreathAdjustmentRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBreathe() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddWater(float WaterAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFood(float FoodAmount);
    
    
    // Fix for true pure virtual functions not being implemented
};

