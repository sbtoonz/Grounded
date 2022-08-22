#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatTotalHoursDriven.generated.h"

class UCurveFloat;

UCLASS()
class MAINE_API UVitalStatTotalHoursDriven : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DecayRateByHourCurve;
    
public:
    UVitalStatTotalHoursDriven();
};

