#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EChatterInterruptionType.h"
#include "EChatterQueuedAction.h"
#include "EChatterInterruptionLevel.h"
#include "EGruntGroup.h"
#include "ChatterEvent.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FChatterEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatterInterruptionType OnInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatterInterruptionLevel InterruptionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatterQueuedAction OnQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGruntGroup GruntGroup;
    
public:
    FChatterEvent();
};

