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
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	float MaxStunValue;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	float StunDecayRate;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	float StunDuration;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	float StunCooldown;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	bool bOnlyStunFromBlocks;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	bool bOnlyStunWhileFlying;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	bool bFlinchOnTakeDamageDuringStun;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Reaction Component")
	int32 StaggerThreshold;

	UFUNCTION(BlueprintCallable, Category="Reaction Component")
	bool IsStunned() const;
    
	UFUNCTION(BlueprintCallable, Category="Reaction Component")
	float GetStunRatio() const;
    
	UFUNCTION(BlueprintCallable, Category="Reaction Component")
	float GetStunDuration() const;
    
	UFUNCTION(BlueprintCallable, Category="Reaction Component")
	float GetMaxStun() const;
    
	UFUNCTION(BlueprintCallable, Category="Reaction Component")
	bool CanBeStunned() const;
    
	UFUNCTION(BlueprintCallable, Category="Reaction Component")
	void BeginStun();
		
};
