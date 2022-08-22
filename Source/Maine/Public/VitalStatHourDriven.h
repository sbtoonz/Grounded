#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatHourDriven.generated.h"

class UCurveFloat;

UCLASS()
class MAINE_API UVitalStatHourDriven : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DecayRateByHourCurve;
    
public:
    UVitalStatHourDriven();
};

