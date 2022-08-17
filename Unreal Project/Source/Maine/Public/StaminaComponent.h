// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StaminaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStaminaComponent();
	UFUNCTION(BlueprintCallable)
	void Restore();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float StaminaToHungerRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float RegenRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float RegenDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float MaxStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float CurrentStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
	float ExhaustedStaminaDelay;
	UPROPERTY(Transient, BlueprintReadWrite, Category = "SurvivalComponent")
	bool bExhausted;

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
