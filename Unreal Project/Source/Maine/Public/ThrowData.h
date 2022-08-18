#pragma once
#include "CoreMinimal.h"
#include "EThrowAttackType.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "ThrowData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FThrowData {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	uint8 bCanThrow: 1;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	uint8 bCanThrowUnderWater: 1;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	uint8 bDestroyOnAttack: 1;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	EThrowAttackType ThrowAttackType;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float ThrowSpeedMultiplier;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float ThrowSpeedMultiplierInWater;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float AttackDelay;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FDataTableRowHandle OverrideImpactAttack;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FGameplayTag ImpactType;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UAnimMontage* ThrowAnim;
    
	MAINE_API FThrowData();
};

