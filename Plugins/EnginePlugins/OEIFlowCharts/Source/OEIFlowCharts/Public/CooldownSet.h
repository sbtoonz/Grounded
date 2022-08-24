#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CooldownEvent.h"
#include "CooldownSet.generated.h"

USTRUCT(BlueprintType)
struct FCooldownSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimultaneousVOInSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCooldownEvent> CooldownEvents;
    
public:
    OEIFLOWCHARTS_API FCooldownSet();
};

