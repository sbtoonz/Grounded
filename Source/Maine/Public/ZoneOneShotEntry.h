#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ZoneOneShotEntry.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct MAINE_API FZoneOneShotEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StartHourOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 EndHourOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseCurveForProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Probability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve ProbabilityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseCurveForRetriggerTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RetriggerTimeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve MinRetriggerTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve MaxRetriggerTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D OneShotSpawnDistanceRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundBase*> RandomSounds;
    
    FZoneOneShotEntry();
};

