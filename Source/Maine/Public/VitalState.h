#pragma once
#include "CoreMinimal.h"
#include "VitalStatValue.h"
#include "VitalState.generated.h"

class UVitalStat;

USTRUCT(BlueprintType)
struct FVitalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TMap<UVitalStat*, FVitalStatValue> Vitals;
    
    UPROPERTY(Transient)
    TMap<UVitalStat*, FVitalStatValue> DirtyVitals;
    
    MAINE_API FVitalState();
};

