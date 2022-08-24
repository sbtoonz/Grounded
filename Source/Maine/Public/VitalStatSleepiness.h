#pragma once
#include "CoreMinimal.h"
#include "VitalStatHourDriven.h"
#include "VitalStatSleepiness.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UVitalStatSleepiness : public UVitalStatHourDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhileSleepingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecayRateWhileSleepingCurve;
    
public:
    UVitalStatSleepiness();
};

