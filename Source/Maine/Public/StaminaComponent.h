#pragma once
#include "CoreMinimal.h"
#include "OnStaminaLevelChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "StaminaComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UStaminaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStaminaLevelChanged OnStaminaDepleted;
    
private:
    UPROPERTY(Transient, VisibleAnywhere, ReplicatedUsing=OnRep_CurrentStamina)
    float CurrentStamina;
    
    UPROPERTY(EditAnywhere)
    float MaxStamina;
    
    UPROPERTY(EditAnywhere)
    float RegenDelay;
    
    UPROPERTY(EditAnywhere)
    float RegenRate;
    
    UPROPERTY(EditAnywhere)
    float ExhaustedStaminaDelay;
    
    UPROPERTY(Transient)
    bool bExhausted;
    
    UPROPERTY(EditAnywhere)
    float StaminaToHungerRatio;
    
public:
    UStaminaComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Restore();
    
private:
    UFUNCTION()
    void OnStatusEffectChanged();
    
    UFUNCTION()
    void OnRest(float RestDuration);
    
    UFUNCTION()
    void OnRep_CurrentStamina(float PrevStamina);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStaminaCapped() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    float GetStaminaRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStaminaCapped() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStamina() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnergyRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentStamina() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeStamina(float AmountToConsume);
    
    UFUNCTION(BlueprintPure)
    bool CanRegenerate() const;
    
    UFUNCTION(BlueprintCallable)
    void AddStamina(float AmountToAdd);
    
};

