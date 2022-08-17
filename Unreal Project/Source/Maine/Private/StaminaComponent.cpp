// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaComponent.h"

// Sets default values for this component's properties
UStaminaComponent::UStaminaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	this->CurrentStamina = 0.00f;
	this->MaxStamina = 100.00f;
	this->RegenDelay = 1.00f;
	this->RegenRate = 20.00f;
	this->ExhaustedStaminaDelay = 3.00f;
	this->bExhausted = false;
	this->StaminaToHungerRatio = 0.01f;
	// ...
}

void UStaminaComponent::Restore()
{
}


// Called when the game starts
void UStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStaminaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UStaminaComponent::IsStaminaCapped() const
{
	return false;
}

bool UStaminaComponent::IsEmpty() const
{
	return false;
}

float UStaminaComponent::GetStaminaRatio() const
{
	return 0.0f;
}

float UStaminaComponent::GetMaxStaminaCapped() const
{
	return 0.0f;
}

float UStaminaComponent::GetMaxStamina() const
{
	return 0.0f;
}

float UStaminaComponent::GetEnergyRatio() const
{
	return 0.0f;
}

float UStaminaComponent::GetCurrentStamina() const
{
	return 0.0f;
}

void UStaminaComponent::ConsumeStamina(float AmountToConsume)
{
}

bool UStaminaComponent::CanRegenerate() const
{
	return false;
}

void UStaminaComponent::AddStamina(float AmountToAdd)
{
}

