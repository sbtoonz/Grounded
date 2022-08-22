#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatConstant.generated.h"

UCLASS()
class MAINE_API UVitalStatConstant : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float Rate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bChangeTameRate: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float TameRate;
    
public:
    UVitalStatConstant();
};

