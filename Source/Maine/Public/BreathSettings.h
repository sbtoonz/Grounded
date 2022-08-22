#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "BreathSettings.generated.h"

USTRUCT(BlueprintType)
struct FBreathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float AdjustmentPerSecond;
    
    UPROPERTY(EditAnywhere)
    float RegenPerSecond;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle DamageEffect;
    
    UPROPERTY(EditAnywhere)
    int32 OutOfBreathAlertTime;
    
    UPROPERTY(EditAnywhere)
    int32 RunningOutOfBreathEffectTime;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve VignetteIntensityCurve;
    
    MAINE_API FBreathSettings();
};

