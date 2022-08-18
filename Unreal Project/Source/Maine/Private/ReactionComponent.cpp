// Fill out your copyright notice in the Description page of Project Settings.


#include "ReactionComponent.h"

#include "BaseLODActor.h"
#include "DamageInfo.h"
#include "EHealthState.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UReactionComponent::UReactionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	this->CurrentStunValue = 0.00f;
	this->MaxStunValue = 0.00f;
	this->StunDecayRate = 0.00f;
	this->StunDuration = 0.00f;
	this->StunCooldown = 0.00f;
	this->bOnlyStunFromBlocks = false;
	this->bOnlyStunWhileFlying = false;
	this->bFlinchOnTakeDamageDuringStun = true;
	this->StaggerThreshold = 5;
	// ...
}


// Called when the game starts
void UReactionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UReactionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UReactionComponent::OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UReactionComponent::OnHealthStateChanged(EHealthState NewHealthState) {
}

bool UReactionComponent::IsStunned() const {
	return false;
}

float UReactionComponent::GetStunRatio() const {
	return 0.0f;
}

float UReactionComponent::GetStunDuration() const {
	return 0.0f;
}

float UReactionComponent::GetMaxStun() const {
	return 0.0f;
}

bool UReactionComponent::CanBeStunned() const {
	return false;
}

void UReactionComponent::BeginStun() {
}

void UReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
	DOREPLIFETIME(UReactionComponent, CurrentStunValue);
}

