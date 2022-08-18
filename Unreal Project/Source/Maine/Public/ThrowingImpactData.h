#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "ThrowingImpactData.generated.h"

USTRUCT(BlueprintType)
struct FThrowingImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle AttackData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundRange;
    
    MAINE_API FThrowingImpactData();
};

