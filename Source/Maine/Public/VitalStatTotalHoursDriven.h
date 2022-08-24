#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatTotalHoursDriven.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UVitalStatTotalHoursDriven : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecayRateByHourCurve;
    
public:
    UVitalStatTotalHoursDriven();
};

