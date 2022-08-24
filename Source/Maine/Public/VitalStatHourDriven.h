#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatHourDriven.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UVitalStatHourDriven : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecayRateByHourCurve;
    
public:
    UVitalStatHourDriven();
};

