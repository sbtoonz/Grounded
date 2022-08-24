#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnStaminaLevelChangedDelegate.h"
#include "StaminaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UStaminaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaminaLevelChanged OnStaminaDepleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentStamina, meta=(AllowPrivateAccess=true))
    float CurrentStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExhaustedStaminaDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExhausted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaToHungerRatio;
    
public:
    UStaminaComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Restore();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStamina(float PrevStamina);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaminaCapped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStaminaCapped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStamina() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeStamina(float AmountToConsume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRegenerate() const;
    
    UFUNCTION(BlueprintCallable)
    void AddStamina(float AmountToAdd);
    
};

