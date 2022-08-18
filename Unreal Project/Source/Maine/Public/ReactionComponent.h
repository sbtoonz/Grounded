// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseLODActor.h"
#include "DamageInfo.h"
#include "EHealthState.h"
#include "Components/ActorComponent.h"
#include "ReactionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UReactionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UReactionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION()
	void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
	UFUNCTION()
	void OnHealthStateChanged(EHealthState NewHealthState);
	
	UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
	float CurrentStunValue;
    
	UPROPERTY(EditDefaultsOnly)
	float MaxStunValue;
    
	UPROPERTY(EditDefaultsOnly)
	float StunDecayRate;
    
	UPROPERTY(EditDefaultsOnly)
	float StunDuration;
    
	UPROPERTY(EditDefaultsOnly)
	float StunCooldown;
    
	UPROPERTY(EditDefaultsOnly)
	bool bOnlyStunFromBlocks;
    
	UPROPERTY(EditDefaultsOnly)
	bool bOnlyStunWhileFlying;
    
	UPROPERTY(EditDefaultsOnly)
	bool bFlinchOnTakeDamageDuringStun;
    
	UPROPERTY(EditDefaultsOnly)
	int32 StaggerThreshold;

	UFUNCTION(BlueprintPure)
	bool IsStunned() const;
    
	UFUNCTION(BlueprintPure)
	float GetStunRatio() const;
    
	UFUNCTION(BlueprintPure)
	float GetStunDuration() const;
    
	UFUNCTION(BlueprintPure)
	float GetMaxStun() const;
    
	UFUNCTION(BlueprintPure)
	bool CanBeStunned() const;
    
	UFUNCTION(BlueprintCallable)
	void BeginStun();
		
};
