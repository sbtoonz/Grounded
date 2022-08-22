#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "SurvivalTraitSettings.generated.h"

USTRUCT(BlueprintType)
struct FSurvivalTraitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float InitialValue;
    
    UPROPERTY(EditAnywhere)
    float AdjustmentPerSecond;
    
    UPROPERTY(EditAnywhere)
    float AdjustmentTickInterval;
    
    UPROPERTY(EditAnywhere)
    float BonusPercentage;
    
    UPROPERTY(EditAnywhere)
    float PenaltyPercentage;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle AdjustmentEffect;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle DamageEffect;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle BonusEffect;
    
    MAINE_API FSurvivalTraitSettings();
};

