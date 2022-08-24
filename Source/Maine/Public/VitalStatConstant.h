#pragma once
#include "CoreMinimal.h"
#include "VitalStat.h"
#include "VitalStatConstant.generated.h"

UCLASS(Blueprintable)
class MAINE_API UVitalStatConstant : public UVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChangeTameRate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TameRate;
    
public:
    UVitalStatConstant();
};

