#pragma once
#include "CoreMinimal.h"
#include "PopulationMonitorSample.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPopulationMonitorSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AActor> ActorType;
    
    UPROPERTY(BlueprintReadOnly)
    float SampleTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SampleValue;
    
    MAINE_API FPopulationMonitorSample();
};

