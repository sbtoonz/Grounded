#pragma once
#include "CoreMinimal.h"
#include "PopulationMonitorSample.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPopulationMonitorSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleValue;
    
    MAINE_API FPopulationMonitorSample();
};

