#pragma once
#include "CoreMinimal.h"
#include "AttackAIParams.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAttackAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinDist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PreferredMaxDist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PreferredDistPostLunge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PreferredHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RequiredSideClearance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLockRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequiresFacing;
    
    FAttackAIParams();
};

