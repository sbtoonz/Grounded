#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "AbilityData.h"
#include "BossPhase.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct MAINE_API FBossPhase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float HealthThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAbilityData> Abilities;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> AbilityDataList;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* AnimToLoad;
    
    FBossPhase();
};

