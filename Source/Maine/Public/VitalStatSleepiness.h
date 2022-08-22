#pragma once
#include "CoreMinimal.h"
#include "VitalStatHourDriven.h"
#include "VitalStatSleepiness.generated.h"

class UCurveFloat;

UCLASS()
class MAINE_API UVitalStatSleepiness : public UVitalStatHourDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WhileSleepingRate;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DecayRateWhileSleepingCurve;
    
public:
    UVitalStatSleepiness();
};

