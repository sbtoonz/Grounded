#pragma once
#include "CoreMinimal.h"
#include "VitalStatValue.h"
#include "VitalState.generated.h"

class UVitalStat;

USTRUCT(BlueprintType)
struct FVitalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UVitalStat*, FVitalStatValue> Vitals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UVitalStat*, FVitalStatValue> DirtyVitals;
    
    MAINE_API FVitalState();
};

